//
//  main.cpp
//  M11A
//
//  Created by Angelina Kapiniaris on 11/10/20.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int CAPACITY = 280;
    char cstring[281];
    cout << "Please enter your tweet below: \n";
    cin.getline(cstring, 281);
    
    cout << "The tweet you entered is: \n";
    cout << cstring << endl;
    cout << strlen(cstring) << "/" << CAPACITY << " chars used." << endl;
    
    return 0;
}
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void Sebastian(int& sebastian);
void Maria(int& maria);
void Jackie(int& jackie);
void Valentina(int& valentina);
void Juliana(int& juliana);
void Angelina(int& angelina);
void Carson(int& carson);

int main()
{
    srand((unsigned) time(0));
    
    cout << "Welcome to the Illegal Immigrants Quiz!" << endl;
    cout << "This quiz is to figure out which Illegal Immigrant Member you are!" << endl;
    char start = 'Z';
    char choice = 'Z';
    int sebastian = 0, maria = 0, jackie = 0, valentina = 0, juliana = 0, angelina = 0, carson = 0;
    
    while (start != 'c')
    {
        cout << "Press c to start!" << endl;
        cin >> start;
        if (start == 'c')
        {
            cout << endl;
            break;
        }
    }
    
    
    cout << endl;
    cout << "QUESTION 1: \n";
    cout << endl;
    cout << "If you were stranded on an island by yourself, what would you do? \n";
    cout << "----------------------------------------------------------------- \n";
    cout << "a) Create a bonfire and try to build a tent out of the materials around you. \n";
    cout << "b) Kill yourself. \n";
    cout << "c) Attempt to find grapes to ferment as wine for your remaining days \n";
    cout << "d) Create an escape plan and even an agenda of what you will do when you're back home \n";
    cout << "e) Wander around. Eat some sus berries. Vibe I guess. \n";
    cout << "f) Think about your last days and stress yourself to death. Also prob climb a tree once or twice \n";
    cout << "g) Smoke some tree \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Sebastian(sebastian);
            break;
        case 'b':
            Maria(maria);
            break;
        case 'c':
            Jackie(jackie);
            break;
        case 'd':
            Valentina(valentina);
            break;
        case 'e':
            Juliana(juliana);
            break;
        case 'f':
            Angelina(angelina);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 2: \n";
    cout << endl;
    cout << "If you liked someone, how would you go about it? \n";
    cout << "------------------------------------------------ \n";
    cout << "a) Try getting to know them. Hopedfully something will ignite as we spend more time together. \n";
    cout << "b) Watch them from afar. Never tell them. \n";
    cout << "c) Make a move. \n";
    cout << "d) Probably send them some flirty messages and post some pictures to catch their attention. \n";
    cout << "e) Find out their daily schedule and slowly go where they go. \n";
    cout << "f) Just tell them? \n";
    cout << "g) Smoke some tree. But now I'm in my feels. \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Juliana(juliana);
            break;
        case 'b':
            Angelina(angelina);
            break;
        case 'c':
            Jackie(jackie);
            break;
        case 'd':
            Maria(maria);
            break;
        case 'e':
            Valentina(valentina);
            break;
        case 'f':
            Sebastian(sebastian);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 3: \n";
    cout << endl;
    cout << "Of which of these things do you prefer? \n";
    cout << "--------------------------------------- \n";
    cout << "a) Money \n";
    cout << "b) Love \n";
    cout << "c) Dream job \n";
    cout << "d) Fame \n";
    cout << "e) Happiness \n";
    cout << "f) Fulfillment \n";
    cout << "g) Weed \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Jackie(jackie);
            break;
        case 'b':
            Angelina(angelina);
            break;
        case 'c':
            Sebastian(sebastian);
            break;
        case 'd':
            Maria(maria);
            break;
        case 'e':
            Juliana(juliana);
            break;
        case 'f':
            Sebastian(sebastian);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 4: \n";
    cout << endl;
    cout << "If you were to get arrested, what would it be for? \n";
    cout << "-------------------------------------------------- \n";
    cout << "a) Prank calling \n";
    cout << "b) Domestice Violence \n";
    cout << "c) Copyright Infringement \n";
    cout << "d) Questioning the police \n";
    cout << "e) Jaywalking \n";
    cout << "f) Public sex misdimeanor \n";
    cout << "g) Drug Possession \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Sebastian(sebastian);
            break;
        case 'b':
            Jackie(jackie);
            break;
        case 'c':
            Angelina(angelina);
            break;
        case 'd':
            Valentina(valentina);
            break;
        case 'e':
            Juliana(juliana);
            break;
        case 'f':
            Maria(maria);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 5: \n";
    cout << endl;
    cout << "My biggest pet peeve is \n";
    cout << "----------------------- \n";
    cout << "a) slow walkers \n";
    cout << "b) nail biting \n";
    cout << "c) the word 'moist' \n";
    cout << "d) loud chewing \n";
    cout << "e) staring \n";
    cout << "f) a confident woman \n";
    cout << "g) having no weed \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Valentina(valentina);
            break;
        case 'b':
            Maria(maria);
            break;
        case 'c':
            Juliana(juliana);
            break;
        case 'd':
            Jackie(jackie);
            break;
        case 'e':
            Angelina(angelina);
            break;
        case 'f':
            Sebastian(sebastian);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 6: \n";
    cout << endl;
    cout << "What kind of drunk are you? \n";
    cout << "----------------------- \n";
    cout << "a) the creepy drunk \n";
    cout << "b) the smiley drunk \n";
    cout << "c) the hyper drunk \n";
    cout << "d) the sentimental drunk \n";
    cout << "e) the 'no change' drunk \n";
    cout << "f) the flirty drunk \n";
    cout << "g) I'm high \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Jackie(jackie);
            break;
        case 'b':
            Angelina(angelina);
            break;
        case 'c':
            Sebastian(sebastian);
            break;
        case 'd':
            Juliana(juliana);
            break;
        case 'e':
            Valentina(valentina);
            break;
        case 'f':
            Maria(maria);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 7: \n";
    cout << endl;
    cout << "What is a turn on for you? \n";
    cout << "----------------------- \n";
    cout << "a) Good taste in music \n";
    cout << "b) Confidence \n";
    cout << "c) Satisfactory hygiene \n";
    cout << "d) Intelligence \n";
    cout << "e) When they smile \n";
    cout << "f) Smells good \n";
    cout << "g) Willing to smoke \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Valentina(valentina);
            break;
        case 'b':
            Maria(maria);
            break;
        case 'c':
            Jackie(jackie);
            break;
        case 'd':
            Sebastian(sebastian);
            break;
        case 'e':
            Angelina(angelina);
            break;
        case 'f':
            Juliana(juliana);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
            
            
    }
    
    cout << endl;
    cout << "QUESTION 8: \n";
    cout << endl;
    cout << "What would you appreciate most from a partner? \n";
    cout << "----------------------- \n";
    cout << "a) Randomly giving me a kiss \n";
    cout << "b) Spending time with me all day doing nothing \n";
    cout << "c) Taking me on a sunset picnic \n";
    cout << "d) Making a music playlist for me \n";
    cout << "e) Helping me with something important \n";
    cout << "f) Joining me on my errands \n";
    cout << "g) Passing the blunt \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Maria(maria);
            break;
        case 'b':
            Angelina(angelina);
            break;
        case 'c':
            Valentina(valentina);
            break;
        case 'd':
            Juliana(juliana);
            break;
        case 'e':
            Sebastian(sebastian);
            break;
        case 'f':
            Jackie(jackie);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 9: \n";
    cout << endl;
    cout << "What gift would you most like to receive from someone? \n";
    cout << "----------------------- \n";
    cout << "a) A handwritten letter \n";
    cout << "b) A bouquet of flowers \n";
    cout << "c) A cap \n";
    cout << "d) A necklace \n";
    cout << "e) A nice shirt \n";
    cout << "f) A pretty ring \n";
    cout << "g) A new cart \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Angelina(angelina);
            break;
        case 'b':
            Valentina(valentina);
            break;
        case 'c':
            Jackie(jackie);
            break;
        case 'd':
            Maria(maria);
            break;
        case 'e':
            Sebastian(sebastian);
            break;
        case 'f':
            Juliana(juliana);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    
    cout << endl;
    cout << "QUESTION 10: \n";
    cout << endl;
    cout << "How do you deal with stress? \n";
    cout << "----------------------- \n";
    cout << "a) Cry. But then get my life together \n";
    cout << "b) Try to fix it, but simultaneously stress more \n";
    cout << "c) Self care day \n";
    cout << "d) Drink ;) \n";
    cout << "e) Sleep \n";
    cout << "f) I don't have that. Sorry. \n";
    cout << "g) A new cart \n";
    cin >> choice;
    
    switch (choice)
    {
        case 'a':
            Valentina(valentina);
            break;
        case 'b':
            Maria(maria);
            break;
        case 'c':
            Juliana(juliana);
            break;
        case 'd':
            Jackie(jackie);
            break;
        case 'e':
            Angelina(angelina);
            break;
        case 'f':
            Sebastian(sebastian);
            break;
        case 'g':
            Carson(carson);
            break;
        default:
            cout << endl;
            cout << endl << "Yikes! That is just not an option. Go ahead and try again \n" << endl;
            cout << endl;
            break;
    }
    cout << endl;
    cout << endl;
    
    const int CAPACITY = 281;
    char cstring[CAPACITY];
    cout << "Finally, describe all the things that makes Angelina great. (free response)" << endl;
    cin.getline(cstring, CAPACITY);
    cout << "Your response was: \n";
    cout << cstring;
    
    
    int roll = (int)(rand()%2)+1;
    cout << roll << endl;
    if (roll == 1)
        cout << endl << "Thank you! That was really sweet... I think." << endl;
    else
        cout << endl << "Something in me says that wasn't actually nice. I guess I'll never really know. " << endl;
    cout << endl;
    
    
    char results = 'Z';
    while (results == 'Z')
    {
        cout << " Enough of that! Press r to get your results AHHHHHH!!!!! \n";
        cin >> results;
        if (results == 'r')
            break;
        else
        {
            cout << "Unfortunately that actually was not the 'r' key. Try again my friend. \n";
            continue;
        }
    }
    cout << endl;
    cout << endl;
    
    
    
    if (sebastian > maria && sebastian > jackie && sebastian > valentina && sebastian > juliana && sebastian > angelina && sebastian > carson)
        cout << "Congrats! You got Sebastian Suarez. You may have some questionable comments but at least you're happy! " << endl;
    else if (maria > sebastian && maria > jackie && maria > valentina && maria > juliana && maria > angelina && maria > carson)
        cout << "Congrats! You got Maria." << endl;
    else if (jackie > maria && jackie > sebastian && jackie > valentina && jackie > juliana && jackie > angelina && jackie > carson)
        cout << "Congrats! You got Jackie." << endl;
    else if (valentina > maria && valentina > jackie && valentina > sebastian && valentina > juliana && valentina > angelina && valentina > carson)
        cout << "Congrats! You got Valentina." << endl;
    else if (juliana > maria && juliana > jackie && juliana > valentina && juliana > sebastian && juliana > angelina && juliana > carson)
        cout << "Congrats! You got Juliana." << endl;
    else if (angelina > maria && angelina > jackie && angelina > valentina && angelina > juliana && angelina > sebastian && angelina > carson)
        cout << "Congrats! You got Angelina." << endl;
    else if (carson > sebastian && carson > maria && carson > jackie && carson > valentina && carson > juliana && carson > angelina)
        cout << "Congrats! You got Carson." << endl;
    else
    {
        cout << "It seems there's been an issue. \n";
    }
    
    return 0;
}


void Sebastian(int& sebastian)
{
    sebastian++;
    cout << sebastian << endl;
}
void Maria(int& maria)
{
    maria++;
    cout << maria << endl;
}
void Jackie(int& jackie)
{
    jackie++;
    cout << jackie << endl;
}
void Valentina(int& valentina)
{
    valentina++;
    cout << valentina << endl;
}
void Juliana(int& juliana)
{
    juliana++;
    cout << juliana << endl;
}
void Angelina(int& angelina)
{
    angelina++;
    cout << angelina << endl;
}
void Carson(int& carson)
{
    carson ++;
    cout << carson << endl;
}
