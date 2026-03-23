#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;

void setFont(int size) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
    cfi.dwFontSize.Y = size; // Set font size
    SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void foreColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void delay(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

int main() {
    setFont(16);
    gotoxy(2, 0); foreColor(4); cout << ".--.      .--.    .-''-.    .---.        _______      ,-----.    ,---.    ,---.    .-''-.          ,---------.    ,-----.     "; delay(100);
    gotoxy(2, 1); foreColor(4); cout << "|  |_     |  |  .'_ _   \\   | ,_|       /   __  \\   .'  .-,  '.  |    \\  /    |  .'_ _   \\         \\          \\ .'  .-,  '.   "; delay(100);
    gotoxy(2, 2); foreColor(1); cout << "| _( )_   |  | / ( ` )   ',-./  )      | ,_/  \\__) / ,-.|  \\ _ \\ |  ,  \\/  ,  | / ( ` )   '         `--.  ,---'/ ,-.|  \\ _ \\  "; delay(100);
    gotoxy(2, 3); foreColor(1); cout << "|(_ o _)  |  |. (_ o _)  |\\  '_ '`)  ,-./  )      ;  \\  '_ /  | :|  |\\_   /|  |. (_ o _)  |            |   \\  ;  \\  '_ /  | : "; delay(100);
    gotoxy(2, 4); foreColor(2); cout << "| (_,_) \\ |  ||  (_,_)___| > (_)  )  \\  '_ '`)    |  _`,/ \\ _/  ||  _( )_/ |  ||  (_,_)___|            :_ _:  |  _`,/ \\ _/  | "; delay(100);
    gotoxy(2, 5); foreColor(2); cout << "|  |/    \\|  |'  \\   .---.(  .  .-'   > (_)  )  __: (  '\\_/ \\   ;| (_ o _) |  |'  \\   .---.            (_I_)  : (  '\\_/ \\   ; "; delay(100);
    gotoxy(2, 6); foreColor(5); cout << "|  '  /\\  `  | \\  `-'    / `-'`-'|___(  .  .-'_/  )\\ ```/  \\  )/ |  (_,_)  |  | \\  `-'    /           (_(=)_)  \\ `/  \\  )  /  "; delay(100);
    gotoxy(2, 7); foreColor(5); cout << "|    /  \\    |  \\       /   |        \\`-'`-'     /  '. \\_/```.'  |  |      |  |  \\       /             (_I_)    '. \\_/```.'   "; delay(100);
}
