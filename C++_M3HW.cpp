//
//  main.cpp
//  M3HW
//  Created by Angelina Kapiniaris on 9/22/20.
// Welcome to the Game of Pig. This game consists of a human and a computer taking turns in gaining points through a random number generator, consistently adding each rounds' points to their total score. Both have the option to "roll" or "hold" after their first roll. However, their turn could automatically end if they rolled the number '1', as well as lose all the points gained in that round. The computer is programmed to "hold" when it rolls an even number, or it will "roll" if it receives an odd number (with the exception of '1'). The first user to reach 100 points wins the game. Enjoy!

#include <iostream>
#include <cstdlib>
using namespace std;

//prototypes
int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);
int rollDie();

// main function
int main ()
{
    srand((unsigned) time(0));
    int humanTotalScore = 0, computerTotalScore = 0;
    bool gameOver = false;
    bool ishumanTurn = true;

    while (!gameOver) //game is going
    {
        if (ishumanTurn)
        {
            humanTotalScore += humanTurn(humanTotalScore); //call human function
            ishumanTurn = false; // human's turn is over
        }
        else
        {
            computerTotalScore += computerTurn(computerTotalScore); //call comp funtion
            ishumanTurn = true; // human's turn is starting
        }
            
            
        if (humanTotalScore >= 100) // human wins
        {
            gameOver = true;
            cout << "Congratulations! You win! \n";
        }
    
        else if (computerTotalScore >= 100) // comp wins
        {
            gameOver = true;
            cout << "Sorry, you lost. \n";
        }
    }
    
    return 0;

}


int humanTurn(int humanTotalScore) // human turn
{
    // human variables
    int roll = 0;
    int roundScore = 0;
    char next = 'c';
    char rollorHold;
    
    cout << "Your turn! Enter 'r' to roll. \n";
    cin >> rollorHold;
    
        while (rollorHold == 'r') // roll option
        {
            roll = rollDie();
            
            cout << "You rolled " << roll << endl;
            if (roll == 1) // human roll a 1
            {
                roundScore = 0;
                cout << "You lose your turn. Enter 'c' to continue. \n";
                cin >> next; // press 'c'
                return 0; // return no human round score
            }
            else
            {
            roundScore += roll; // add roll to round score
            cout << "If you hold, your total score would be: " << (roundScore + humanTotalScore) << endl;
            cout << "Press 'h' to hold or 'r' to roll again. \n";
                cin >> rollorHold; // roll or hold choice
            }
        }
        while (rollorHold == 'h') // hold option
        {
            return roundScore;
        }
    
        return roundScore; // return round score to total human score
    
}

// computer turn
int computerTurn(int computerTotalScore)
{
    // comp variables
    int roll = 0;
    int roundScore = 0;
    char next = 'c';
    bool done = false;
    
        while (!done) // computer turn is going
        {
            roll = rollDie();
            cout << "It's the computer's turn! \n";
            cout << "The computer rolled " << roll << endl;
        
            if (roll == 1) // comp roll a 1
            {
                roundScore = 0;
                cout << "The computer loses its turn. Enter 'c' to continue. \n";
                cin >> next; // press 'c'
                return 0; // return no comp round score
                
            }

            else if (roll == 2 || roll == 4 || roll == 6) // even comp outcome
            {
                roundScore += roll; // add roll to round score
                cout << "If the computer holds, its total score would be: " << (roundScore + computerTotalScore) << endl;
                cout << "The computer holds. Enter 'c' to continue. \n";
                cin >> next; // press 'c'
                done = true;
            }

            else // odd comp outcome
            {
                roundScore += roll; // add roll to round score
                cout << "If the computer holds, its total score would be: " << (roundScore + computerTotalScore) << endl;
                continue; // repeat comp roll
            }
        }
    
        return roundScore; // return round score to computer total score
}

//dice roll function
int rollDie()
{
    int roll = (int)(rand()%6)+1; // random number generator
    
    return roll; // return roll to human & computer function
    
}
