#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>  // time() function ke liye

using namespace std;

// Screen aur game ki dimensions
const int SCREEN_HEIGHT = 29;
const int WIN_WIDTH = 70;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyX, enemyY, enemyFlag;
char car[4][4] = { 
    { ' ', '+', '+', ' ' }, 
    { '+', '+', '+', '+' }, 
    { ' ', '+', '+', ' ' }, 
    { '+', '+', '+', '+' }
};

int carpos = WIN_WIDTH / 2; //screen ka center
int score = 0;

// Cursor ko kisi bhi jagah move karne ke liye
void gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

// Cursor ko hide/show aur size set karne ke liye
void setcursor(bool visible) {
    CONSOLE_CURSOR_INFO cursor; //CONSOLE_CURSOR_INFO => is used to get or set the size and visibility of the cursor
    cursor.bVisible = visible;
    cursor.dwSize = 10;
    SetConsoleCursorInfo(console, &cursor);
}

// Border banane ke liye
void drawBorder() {
    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        gotoxy(0, i); cout << "*";            // Left border
        gotoxy(WIN_WIDTH, i); cout << "*";    // Right border
    }
}

// Enemy (dusri car) generate karne ke liye
void genEnemy() {
    enemyX = 18 + rand() % 33;  // Random position
    enemyY = 1;
    enemyFlag = 1;
}

// Enemy ko draw karne ke liye
void drawEnemy() {
    if (enemyFlag) {
        gotoxy(enemyX, enemyY);     cout << "****";
        gotoxy(enemyX, enemyY + 1); cout << " ** ";
        gotoxy(enemyX, enemyY + 2); cout << "****";
        gotoxy(enemyX, enemyY + 3); cout << " ** ";
    }
}

// Enemy ko erase karne ke liye
void eraseEnemy() {
    if (enemyFlag) {
        gotoxy(enemyX, enemyY);     cout << "    ";
        gotoxy(enemyX, enemyY + 1); cout << "    ";
        gotoxy(enemyX, enemyY + 2); cout << "    ";
        gotoxy(enemyX, enemyY + 3); cout << "    ";
    }
}

// Car draw karne ke liye
void drawCar() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            gotoxy(carpos + j, 22 + i);
            cout << car[i][j];
        }
    }
}

// Car ko erase karne ke liye
void eraseCar() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            gotoxy(carpos + j, 22 + i);
            cout << " ";
        }
    }
}

// Collision check karne ke liye
bool collision() {
    return (enemyY + 4 >= 22 && enemyX + 4 > carpos && enemyX < carpos + 4);
}

// Game Over Screen
void gameover() {
    system("cls");
    cout << "\n\t\t--- GAME OVER ---\n";
    cout << "\t\tScore: " << score << "\n";
    cout << "\t\tPress any key to continue...";
    getch();
}

// Score update karne ke liye
void updateScore() {
    gotoxy(WIN_WIDTH + 5, 5);
    cout << "Score: " << score;
}

// Game Instructions
void instructions() {
    system("cls");
    cout << "Instructions:\n";
    cout << "1. Car ko left ya right move karo.\n";
    cout << "2. Dusri car se bachna hai.\n";
    cout << "3. Left: 'A' ya Left Arrow\n";
    cout << "4. Right: 'D' ya Right Arrow\n";
    cout << "5. Exit: 'ESC'\n";
    cout << "Press any key to go back...";
    getch();
}

// Game Start
void play() {
    carpos = WIN_WIDTH / 2;
    score = 0;
    enemyFlag = 0;

    system("cls");
    drawBorder();
    updateScore();
    genEnemy();

    gotoxy(18, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(18, 5);
    cout << "                      ";

    while (1) {
        if (kbhit()) {
            char ch = getch();
            if ((ch == 'a' || ch == 75) && carpos > 18) carpos -= 4;  // Left Move
            if ((ch == 'd' || ch == 77) && carpos < 50) carpos += 4;  // Right Move
            if (ch == 27) break;  // ESC to exit
        }

        drawCar();
        drawEnemy();
        if (collision()) {
            gameover();
            return;
        }
        Sleep(50);
        eraseCar();
        eraseEnemy();

        enemyY++;
        if (enemyY > SCREEN_HEIGHT - 4) {
            genEnemy();
            score++;
            updateScore();
        }
    }
}

// Main Menu
int main() {
    setcursor(false);
    srand((unsigned)time(NULL));

    while (1) {
        system("cls");
        gotoxy(10, 5);  cout << "----------------------";
        gotoxy(10, 6);  cout << "|     Car Game      |";
        gotoxy(10, 7);  cout << "----------------------";
        gotoxy(10, 9);  cout << "1. Start Game";
        gotoxy(10, 10); cout << "2. Instructions";
        gotoxy(10, 11); cout << "3. Quit";
        gotoxy(10, 13); cout << "Select option: ";
        char op = getche();

        if (op == '1') play();
        else if (op == '2') instructions();
        else if (op == '3') exit(0);
    }

    return 0;
}
