//Christian Mendoza 
//Project: tic tac toe
//4/16/2024

#include <iostream>
#include <cassert>

using namespace std;

char spaceNumber[9] = {'1','2','3','4','5','6','7','8','9'};

//draw the board
void board(){
    cout << endl;

    cout << "Tic Tac Toe" << endl << endl;

    cout << " " << spaceNumber[0] << " | " << spaceNumber[1] << " | " << spaceNumber[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << spaceNumber[3] << " | " << spaceNumber[4] << " | " << spaceNumber[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << spaceNumber[6] << " | " << spaceNumber[7] << " | " << spaceNumber[8] << endl << endl;
    cout << "------------------------" << endl << endl;
}

//gameplay
void gamePlay(char identities, char places){
    assert( ((places >= '1' && places <= '9') && identities == 'o') ||
            ((places >= '1' && places <= '9') && identities == 'x') );

    int index = places - '1';

    if(identities == 'x'){
        spaceNumber[index] = 'x';
    }
    else if(identities == 'o'){
        spaceNumber[index] = 'o';
    }
    /*
    if(places == '1' && identities == 'x'){
        spaceNumber[0] = 'x';
    }
    else if(places == '1' && identities == 'o'){
        spaceNumber[0] = 'o';
    }
    else if(places == '2' && identities == 'x'){
        spaceNumber[1] = 'x';
    }
    else if(places == '2' && identities == 'o'){
        spaceNumber[1] = 'o';
    }
    else if(places == '3' && identities == 'x'){
        spaceNumber[2] = 'x';
    }
    else if(places == '3' && identities == 'o'){
        spaceNumber[2] = 'o';
    }
    else if(places == '4' && identities == 'x'){
        spaceNumber[3] = 'x';
    }
    else if(places == '4' && identities == 'o'){
        spaceNumber[3] = 'o';
    }
    else if(places == '5' && identities == 'x'){
        spaceNumber[4] = 'x';
    }
    else if(places == '5' && identities == 'o'){
        spaceNumber[4] = 'o';
    }
    else if(places == '6' && identities == 'x'){
        spaceNumber[5] = 'x';
    }
    else if(places == '6' && identities == 'o'){
        spaceNumber[5] = 'o';
    }
    else if(places == '7' && identities == 'x'){
        spaceNumber[6] = 'x';
    }
    else if(places == '7' && identities == 'o'){
        spaceNumber[6] = 'o';
    }
    else if(places == '8' && identities == 'x'){
        spaceNumber[7] = 'x';
    }
    else if(places == '8' && identities == 'o'){
        spaceNumber[7] = 'o';
    }
    else if(places == '9' && identities == 'x'){
        spaceNumber[8] = 'x';
    }
    else if(places == '9' && identities == 'o'){
        spaceNumber[8] = 'o';
    }
    */
}



void winner(string player1,string player2){
    //int playerWinner;

    if( (spaceNumber[0] == 'x' && spaceNumber[1] == 'x' && spaceNumber[2] == 'x') ||
        (spaceNumber[3] == 'x' && spaceNumber[4] == 'x' && spaceNumber[5] == 'x') ||
        (spaceNumber[6] == 'x' && spaceNumber[7] == 'x' && spaceNumber[8] == 'x') ||

        (spaceNumber[0] == 'x' && spaceNumber[3] == 'x' && spaceNumber[6] == 'x') ||
        (spaceNumber[1] == 'x' && spaceNumber[4] == 'x' && spaceNumber[7] == 'x') ||
        (spaceNumber[2] == 'x' && spaceNumber[5] == 'x' && spaceNumber[8] == 'x') ||

        (spaceNumber[0] == 'x' && spaceNumber[4] == 'x' && spaceNumber[8] == 'x') ||
        (spaceNumber[2] == 'x' && spaceNumber[4] == 'x' && spaceNumber[6] == 'x') ){
        
        cout << "Winner Winner Chicken Dinner!!! " << endl << endl << player1 << " Won the game!!!!!";
        exit(0);
    }
    else if( (spaceNumber[0] == 'o' && spaceNumber[1] == 'o' && spaceNumber[2] == 'o') ||
             (spaceNumber[3] == 'o' && spaceNumber[4] == 'o' && spaceNumber[5] == 'o') ||
             (spaceNumber[6] == 'o' && spaceNumber[7] == 'o' && spaceNumber[8] == 'o') ||

             (spaceNumber[0] == 'o' && spaceNumber[3] == 'o' && spaceNumber[6] == 'o') ||
             (spaceNumber[1] == 'o' && spaceNumber[4] == 'o' && spaceNumber[7] == 'o') ||
             (spaceNumber[2] == 'o' && spaceNumber[5] == 'o' && spaceNumber[8] == 'o') ||

             (spaceNumber[0] == 'o' && spaceNumber[4] == 'o' && spaceNumber[8] == 'o') ||
             (spaceNumber[2] == 'o' && spaceNumber[4] == 'o' && spaceNumber[6] == 'o') ){
             
        cout << "Winner Winner Chicken Dinner!!! " << endl  << endl << player2 << " Won the game!!!!!";
        exit(0);
    }
}


int main(){
    char place;
    char identity;
    board();

    string p1;
    string p2;
    cout << "Enter Player One Name: ";
    cin >> p1;
    cout << endl;
    cout << "Player " << p1 << " will be 'x'" << endl << endl;

    cout << "Enter Player Two Name: ";
    cin >> p2;
    cout << endl;
    cout << "Player " << p2 << " will be 'o'" << endl << endl;

    while(true){
        winner(p1,p2);

        cout << "Who is placing ('x' or 'o'): ";
        cin >> identity;
        cout << endl;

        cout << "Where are you placing (1-9): ";
        cin >> place; 
        cout << endl;
        
        gamePlay(identity, place);
            
        board();

    }
    return 0;
}
