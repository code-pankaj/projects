#include <iostream> 
#include <string.h>

using namespace std;

// Defining Variables Globally

string firstPlayer, secondPlayer;
int x_coordinate, y_coordinate;
char positions[3][3];

// Functions Used in the program

void inputNames(string &firstPlayer, string &secondPlayer);
void inputCoordinatesFirstPlayer(int &x_coordinate, int &y_coordinate);
void inputCoordinatesSecondPlayer(int &x_coordinate, int &y_coordinate);
void storeCross(int &x_coordinate, int &y_coordinate);
void storeCircle(int &x_coordinate, int &y_coordinate);
void checkWinFirst(int &x_coordinate, int &y_coordinate);
void checkWinSecond(int &x_coordinate, int &y_coordinate);
void printBoard();
void initializeBoard();
bool isBoardFull();

int main()
{
    initializeBoard();

    inputNames(firstPlayer, secondPlayer);

    while(true){

    inputCoordinatesFirstPlayer(x_coordinate, y_coordinate);
    printBoard();
    checkWinFirst(x_coordinate, y_coordinate);

    if (isBoardFull()){
        cout << "It is a Draw." << endl ;
        break;
    }
    
    inputCoordinatesSecondPlayer(x_coordinate, y_coordinate);
    printBoard();
    checkWinSecond(x_coordinate,y_coordinate);

    if (isBoardFull()){
        cout << "It is a Draw." << endl ;
        break;
    }
    
    }

    return 0;
}

// Getting Players Names

void inputNames(string &firstPlayer, string &secondPlayer){
    cout << "Enter first player name : " ;
    cin >> firstPlayer ;
    cout << "Enter second player name : " ;
    cin >> secondPlayer ;
}

// Let the players choose from Cross 'X' and 'O' which one they want... thinking of adding this...

// Asking firstPlayer for coordinates

void inputCoordinatesFirstPlayer(int &x_coordinate, int &y_coordinate){

    x_coordinate = 0;
    y_coordinate = 0;

    cout << firstPlayer << " enter the coordinates : " ;

    do{
        cin >> x_coordinate >> y_coordinate ;

        if (x_coordinate < 0 || x_coordinate > 2 || y_coordinate < 0 || y_coordinate > 2) {
            cout << "Invalid coordinates! Enter values between 0 and 2: ";
        }
        else if (positions[x_coordinate][y_coordinate] != '\0') {
            cout << "Position already taken! Choose another spot: ";
        }

    } while (x_coordinate > 2 || x_coordinate < 0 || y_coordinate > 2 || y_coordinate < 0);

    storeCross(x_coordinate, y_coordinate);
    
}

// Asking secondPlayer for coordinates

void inputCoordinatesSecondPlayer(int &x_coordinate, int &y_coordinate){

    x_coordinate = 0;
    y_coordinate = 0;

    cout << secondPlayer << " enter the coordinates : " ;

    do{
        cin >> x_coordinate >> y_coordinate ;

        if (x_coordinate < 0 || x_coordinate > 2 || y_coordinate < 0 || y_coordinate > 2) {
            cout << "Invalid coordinates! Enter values between 0 and 2 : ";
        }
        else if (positions[x_coordinate][y_coordinate] != '\0') {
            cout << "Position already taken! Choose another spot : ";
        }

    } while (x_coordinate > 2 || x_coordinate < 0 || y_coordinate > 2 || y_coordinate < 0);

    storeCircle(x_coordinate, y_coordinate);

}

// Store 'X' for firstPlayer

void storeCross(int &x_coordinate, int &y_coordinate){
    positions[x_coordinate][y_coordinate] =  'X' ;
}

// Store 'O' for secondPlayer

void storeCircle(int &x_coordinate, int &y_coordinate){
    positions[x_coordinate][y_coordinate] =  'O' ;
}

// Checking Wins for firstPLayer

void checkWinFirst(int &x_coordinate, int &y_coordinate){

    //first row
    if(positions[0][0] == 'X' && positions[0][1] == 'X' && positions[0][2] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }
    //first column
    else if(positions[0][0] == 'X' && positions[1][0] == 'X' && positions[2][0] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }
    //first diagonal
    else if(positions[0][0] == 'X' && positions[1][1] == 'X' && positions[2][2] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }
    //second diagonal
    else if(positions[0][2] == 'X' && positions[1][1] == 'X' && positions[2][0] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }
    //second row
    else if(positions[1][0] == 'X' && positions[1][1] == 'X' && positions[1][2] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }
    //third row
    else if(positions[2][0] == 'X' && positions[2][1] == 'X' && positions[2][2] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }
    //second column
    else if(positions[0][1] == 'X' && positions[1][1] == 'X' && positions[2][1] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }
    //third column
    else if(positions[0][2] == 'X' && positions[1][2] == 'X' && positions[2][2] == 'X'){
        cout << firstPlayer << " won the game." << endl ;
        exit(0);
    }

}

// Check Win For secondPlayer

void checkWinSecond(int &x_coordinate, int &y_coordinate){

    //first row
    if(positions[0][0] == 'O' && positions[0][1] == 'O' && positions[0][2] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
    //first column
    else if(positions[0][0] == 'O' && positions[1][0] == 'O' && positions[2][0] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
    //first diagonal
    else if(positions[0][0] == 'O' && positions[1][1] == 'O' && positions[2][2] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
    //second diagonal
    else if(positions[0][2] == 'O' && positions[1][1] == 'O' && positions[2][0] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
    //second row
    else if(positions[1][0] == 'O' && positions[1][1] == 'O' && positions[1][2] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
    //third row
    else if(positions[2][0] == 'O' && positions[2][1] == 'O' && positions[2][2] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
    //second column
    else if(positions[0][1] == 'O' && positions[1][1] == 'O' && positions[2][1] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
    //third column
    else if(positions[0][2] == 'O' && positions[1][2] == 'O' && positions[2][2] == 'O'){
        cout << secondPlayer << " won the game." << endl ;
        exit(0);
    }
}

// Checking For draw if full board

bool isBoardFull(){
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(positions[i][j] == '\0'){
                return false;
            }
        }
        
    }
    return true;
}

// Setting up board for starting game

void initializeBoard(){
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            positions[i][j] = '\0' ;
        }
        
    }
}

// Printing the game 

void printBoard(){
    system("cls");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (positions[i][j] == '\0'){
                cout << "- " ;
            }
            else{
                cout << positions[i][j] << " " ;
            }
            
        }
        cout << endl ;
    }
        
}