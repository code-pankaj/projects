#include <iostream> 
#include <windows.h>

using namespace std;

void hideCursor() {
    cout << "\033[?25l";  // ANSI escape code to hide cursor
}

// void showCursor() {
//     cout << "\033[?25h";  // ANSI escape code to show cursor
// }

int main()
{
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

    hideCursor();

    while(true){
        system("cls");
        cout << hours << " : " << minutes << " : " << seconds << endl ;
        seconds++;
        if(seconds == 60){
            seconds = 0;
            minutes++;
        }
        if(minutes == 60){
            minutes = 0;
            hours++;
        }
        if(hours == 24){
            hours = 0;
        }
        _sleep(1000);
    }
    return 0;
}