#include<iostream>
#include<conio.h>
// #include<direct.h>
#include<windows.h>
#include<time.h>


const int SCREEN_WIDTH =  90;
const int SCREEN_HEIGHT = 29;
const int WIN_WIDTH = 70; 

using namespace std;

// This is a console api but I don't know how to use it, WINDOWS.H is the library
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //HANDLE Windows API ka ek special datatype hai jismein console screen ka reference save hoa hai,
COORD CursorPosition; // COORD: Yeh ek Windows data structure hai, jo do integer values ko store karta hai: X-coordinate aur Y-coordinate

//SIMPLE ARRAYS
int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = { 
    { ' ', '+', '+', ' ' }, 
    { '+', '+', '+', '+' }, 
    { ' ', '+', '+', ' ' }, 
    { '+', '+', '+', '+' }
};

int carpos = WIN_WIDTH/2; //screen ka center
int score = 0;

void gotoxy(int x, int y){
	CursorPosition.X = x; //reset coordinates 
	CursorPosition.Y = y; //reset coordinates
	SetConsoleCursorPosition( console, CursorPosition ); //built in windows ka function hai, pehla parameter console screen ka hai aur dosra parameter coordinates ka hai (COORD)
}

void setcursor(bool visible, DWORD size) {
	if(size ==0)
	size  = 50;
	
	CONSOLE_CURSOR_INFO lpCursor;// another windows struct with two elements, cursor visibility and size
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor); //built in windows ka function hai, cursor ki propertied visibility and size kp update karne ke lie use hota hai
}

void drawBorder(){
	for(int i=0; i<SCREEN_HEIGHT; i++){
		for(int j=0; j<18; j++){
			gotoxy(0+j,i); // left border
			 cout<<"*";
			gotoxy(WIN_WIDTH-j,i); // right border WIN_WIDTH 79
			 cout<<"*";
		}
	}
	for(int i=0; i<SCREEN_HEIGHT; i++){
		gotoxy(SCREEN_WIDTH,i); //SCREEN_WIDTH 90, right side par ik line
 		cout<<"+";
	}
}

void genEnemy(int ind){
	enemyX[ind] = 17 + rand()%(33); // ( 0 - 32 ) hi aiga modulas ka remainder + 17 = 49 RANGE
	//Enemy har dafa 17 se 49 ke beech kisi bhi X-position pe spawn ho sakta hai.
}

void drawEnemy(int ind){
	if( enemyFlag[ind] == true ){ // 1 ke barabar hoi toh
		gotoxy(enemyX[ind] , enemyY[ind]); 		    
		cout<<"****";
		gotoxy(enemyX[ind] , enemyY[ind]+1);		
		cout<<" ** ";
		gotoxy(enemyX[ind] , enemyY[ind]+2);		
		cout<<"****";
		gotoxy(enemyX[ind] , enemyY[ind]+3);		
		cout<<" ** ";
		
	}
}

void eraseEnemy(int ind){
	if( enemyFlag[ind]== true ){
		gotoxy(enemyX[ind] , enemyY[ind]); 		    
		cout<<"    ";
		gotoxy(enemyX[ind] , enemyY[ind]+1);		
		cout<<"    ";
		gotoxy(enemyX[ind] , enemyY[ind]+2);		
		cout<<"    ";
		gotoxy(enemyX[ind] , enemyY[ind]+3);		
		cout<<"    ";
		gotoxy(WIN_WIDTH -40, 0); 
		cout<<"     ||     ";
		gotoxy(WIN_WIDTH -40, 5); 
		cout<<"     ||     ";
		gotoxy(WIN_WIDTH -40, 10); 
		cout<<"     ||     ";
		gotoxy(WIN_WIDTH -40, 15); 
		cout<<"     ||     ";
		gotoxy(WIN_WIDTH -40, 20); 
		cout<<"     ||     ";
		gotoxy(WIN_WIDTH -40, 25); 
		cout<<"     ||     ";
	}
}

void resetEnemy(int ind){
	eraseEnemy(ind); // enemy end par pohnch gaya toh erase karo
	enemyY[ind] = 1; // enemy ko y axis main 1 yani top tak le jao
	genEnemy(ind); // enemy ka naya x position randomly generate karo
}

void drawCar(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carpos, i+22);  
			cout<<car[i][j];
		}
	}
}

void eraseCar(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carpos, i+22);  
			cout<<" ";
		}
	}
}

int collision(){
	if( enemyY[0] + 4 >=23 ){
		if( enemyX[0] + 4 -carpos >=0 && enemyX[0] + 4 -carpos <9 ){
			return 1;
		}
	}
	return 0;
}

void gameover(){
	system("cls");
	cout<<endl;
	cout<<"\t\t----------------------------"<<endl;
	cout<<"\t\t--------- Game Over --------"<<endl;
	cout<<"\t\t----------------------------"<<endl;
	cout<<"\t\tPress any Key to go back to menu.";
	getch();
}

void updateScore(){
	gotoxy(WIN_WIDTH +7, 5);
	cout<<"Score: "<<score<<endl;
}

void instructions(){
	system("cls");
	cout<<"Instructions";
	cout<<"\n-----------------";
	cout<<"\n Avoid car by moving left or right.";
	cout<<"\n\n Press 'Arrow Keys' to move the Car";
	cout<<"\n\n Press 'escape' to Exit";
	cout<<"\n\n Press any Key to go back to the menu";
	getch();
}

void play(){
	carpos = -1 + WIN_WIDTH/2;
	score = 0;
	enemyFlag[0] = 1;//pehla enemy active
	enemyFlag[1] = 0;// doosra inactive
	enemyY[0] = enemyY[1] = 1;//Dono y axis par top pe hain, 1=top
	
	system("cls");
	drawBorder();
	updateScore();
	genEnemy(0);
	genEnemy(1);
	
	gotoxy(WIN_WIDTH +7, 2); cout<<"Car Game";
	gotoxy(WIN_WIDTH +6, 4); cout<<"----------";
	gotoxy(WIN_WIDTH +6, 6); cout<<"----------";
	gotoxy(WIN_WIDTH +7, 12); cout<<"Control ";
	gotoxy(WIN_WIDTH +7, 13); cout<<"-------- ";
	gotoxy(WIN_WIDTH +2, 14); cout<<"A Key - Left";
	gotoxy(WIN_WIDTH +2, 15); cout<<"D Key - Left";
	gotoxy(WIN_WIDTH +2, 15); cout<<"Left Arrow";
	gotoxy(WIN_WIDTH +2, 14); cout<<"Right Ket";
	
	gotoxy(18, 5);cout<<"Press any key to start";
	getch(); //getch() tab tak wait karega jab tak koi key press na kare.
	gotoxy(18, 5);
	cout<<"                      "; //Phir prompt erase ho jayega.
	
	while(1){ // Yeh infinite loop hai jo tab tak chalega jab tak player "Esc" press na kare ya collision na ho.
		if(kbhit()){ //Jab kbhit() ko call kiya jata hai, yeh check karta hai ke keyboard se koi key press hui hai ya nahi.
			char ch = getch(); // Key input.
			if( ch=='a' || ch=='A' || ch == 75 ){				//  75 is ascii code of left arrow
				if( carpos > 18 )					
					carpos -= 4;
			}				
			if( ch=='d' || ch=='D' || ch== 77 ){				//  77 is ascii code of right arrow
				if( carpos < 50 )
					carpos += 4;
			} 
			if(ch==27){ // // Escape key to exit
				break;
			}
		}
		
		drawCar();
		drawEnemy(0);
		drawEnemy(1);
		if( collision() == 1 ){
			gameover();
			return ;
		}
		Sleep(50); //50ms wait
		eraseCar();
		eraseEnemy(0);
		eraseEnemy(1);
		
		if( enemyY[0] == 10 ) // Jab pehla enemy Y = 10 par pohonch jaye,
			if( enemyFlag[1] == 0 )
				enemyFlag[1] = 1;  //doosra enemy activate ho jata hai.
		
		if( enemyFlag[0] == 1 )
			enemyY[0] += 1; //Increment console main neeche ki taraf
		
		if( enemyFlag[1] == 1 )
			enemyY[1] += 1;    //Increment console main neeche ki taraf
		 
		if( enemyY[0] > SCREEN_HEIGHT-4 ){ // matlab enemy end tak pohnch gaya without collision
			resetEnemy(0);
			score++;
			updateScore();
		}
		if( enemyY[1] > SCREEN_HEIGHT-4 ){
			resetEnemy(1);
			score++;
			updateScore();
		}  	
	}
}


int main(){
	setcursor(0,0); 
	srand( (unsigned)time(NULL));
	
	do{
		system("cls");
		gotoxy(10,5); cout<<" -------------------------- "; 
		gotoxy(10,6); cout<<" |        Car Game        | "; 
		gotoxy(10,7); cout<<" --------------------------";
		gotoxy(10,9); cout<<"1. Start Game";
		gotoxy(10,10); cout<<"2. Instructions";	 
		gotoxy(10,11); cout<<"3. Quit";
		gotoxy(10,13); cout<<"Select option: ";
		char op = getche();
		
		if( op == '1'){
			play();
		}
		else if( op =='2'){
			instructions();
		}
		else if( op == '3'){
			exit(0);	
		}
	
	}while(1);
	
	return 0;
}
