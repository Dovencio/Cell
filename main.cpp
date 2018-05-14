#include "Include.h"
#include "EleList.h"
#include "ElementList.h"
#define Cdebug

/** \note (Dovenchiko#9#04/22/18): Read me
 *
 * To see a list of exiting notes:
 * View -> Todo list
 *
 * To add a note:
 * Right click OR Edit -> Add Todo item
 * Follow the wizard and press okay.
 *
 * Use priority (Highest) 1-9 (lowest).
 *
 */

// \note (Dovenchiko#9#04/22/18): Variables

string Input;
bool debug = false;
int SUR = 250; // Screen Update Rate

// \note (Dovenchiko#9#04/22/18): Functions

string Lowercase(string in)
{
    string n = "";
    int l = in.length();
    for(int i=0; i<l; i++)
    {
        if(in.at(i)=='A')
            n = n + 'a';
        else if(in.at(i)=='B')
            n = n + 'b';
        else if(in.at(i)=='C')
            n = n + 'c';
        else if(in.at(i)=='D')
            n = n + 'd';
        else if(in.at(i)=='E')
            n = n + 'e';
        else if(in.at(i)=='F')
            n = n + 'f';
        else if(in.at(i)=='G')
            n = n + 'g';
        else if(in.at(i)=='H')
            n = n + 'h';
        else if(in.at(i)=='I')
            n = n + 'i';
        else if(in.at(i)=='J')
            n = n + 'j';
        else if(in.at(i)=='K')
            n = n + 'k';
        else if(in.at(i)=='L')
            n = n + 'l';
        else if(in.at(i)=='M')
            n = n + 'm';
        else if(in.at(i)=='N')
            n = n + 'n';
        else if(in.at(i)=='O')
            n = n + 'o';
        else if(in.at(i)=='P')
            n = n + 'p';
        else if(in.at(i)=='Q')
            n = n + 'q';
        else if(in.at(i)=='R')
            n = n + 'r';
        else if(in.at(i)=='S')
            n = n + 's';
        else if(in.at(i)=='T')
            n = n + 't';
        else if(in.at(i)=='U')
            n = n + 'u';
        else if(in.at(i)=='V')
            n = n + 'v';
        else if(in.at(i)=='W')
            n = n + 'w';
        else if(in.at(i)=='X')
            n = n + 'x';
        else if(in.at(i)=='Y')
            n = n + 'y';
        else if(in.at(i)=='Z')
            n = n + 'z';
        else
            n = n + in.at(i);
    }
    return n;
}

int StringToNumber(string MyString)
{
    // #include <sstream>
    istringstream converter(MyString); // Converts from string to number.
    int result;
    // Contains the operation results.
    // Perform the conversion and return the results.
    converter >> result;
    return result;
}


void Delay(int h, int m, int s, int ms) // h, hours, m minuets, s seconds, ms milliseconds
{
    int totalMS = h*3600000+m*60000+s*1000+ms;
    Sleep(totalMS);
}

void TypeWrighter(string msg, bool endLine)
{
    int l = msg.length();
    for(int i=0; i<l; i++)
    {
        cout << msg.at(i);
        Delay(0, 0, 0, 50);
    }
    if(endLine)
        cout << endl;
}

void Pause()
{
    TypeWrighter("Press any button to continue...", 1);
    getch();
    system("CLS");
}

void intro()
{
    TypeWrighter("Today, ", false);
    Delay(0, 0, 1, 0);
    TypeWrighter("you are a cell.", true);
    Delay(0, 0, 1, 0);
    TypeWrighter("But not just any cell.", true);
    Delay(0, 0, 1, 0);
    TypeWrighter("You are a cell that is more advanced than the rest.", true);
    Delay(0, 0, 1, 0);
    TypeWrighter("You can do things other cells cannot do.", 1);
    Delay(0, 0, 5, 0);
    system("CLS");
}

int main()
{
    /** Beginning of program
     *
     * Things like
     * Startup,
     * Variable calls,else if(l.at(i)=='B')
     *     n = n + 'b';
     * etc.
     *
     */
#ifndef Cdebug
    intro();
#endif
    bool LL = true;
    while(LL)
    {
        while(!kbhit()) // Functions that will get looped through until a button is pressed.
        {
            cout << "This is where the stats would be displayed." << endl;
            Delay(0, 0, 0, SUR); // This is the screen update delay
            system("CLS"); // This clears the screen so new data can be printed.
        }
        // after button is pressed commands
        cout << "? ";
        cin >> Input;
        Input = Lowercase(Input);
        if(Input=="q"||Input=="quit")
        {
            TypeWrighter("Quitting...", 1);
            TypeWrighter("Saving profile...", 1);
            // \todo (Dovenchiko#5#04/22/18): Save data to file.
            TypeWrighter("Deleting pointers...", 1);
            // \note (Dovenchiko#5#04/22/18): Delete any pointers here.
            TypeWrighter("Closing active files...", 1);
            // \note (Dovenchiko#5#04/22/18): Close files here.
            TypeWrighter("Profile Saved!", 1);
            Pause();
            break;
        }
        else if(Input=="h"||Input=="?"||Input=="help")
        {
            TypeWrighter("Printing help!", 1);
            TypeWrighter("Type 'quit' (q) to quit.", 1);
            TypeWrighter("Type 'settings' (s) to enter settings.", 1);
            TypeWrighter("Type 'load' (l) to load profile.", 1);
            // \note (Dovenchiko#9#04/22/18): Update the help!
        }
        else if(Input=="d"||Input=="debug")
        {
            TypeWrighter("Debug Mode on!", 1);
            debug = true;
        }
        else if(Input=="s"||Input=="settings")
        {
            TypeWrighter("Settings Menu.", 1);
            TypeWrighter(" 1. Screen Update Rate.", 1);
            TypeWrighter(" 2. Screen Color.", 1);
            cin >> Input;
            Input = Lowercase(Input);
            if(Input=="1")
            {
                TypeWrighter("What update rate: ", 0);
                cin >> Input;
                SUR = StringToNumber(Input);
            }
            else if(Input=="2")
            {
                TypeWrighter("This has not been implemented yet!", 1);
                // \todo (Dovenchiko#5#04/22/18): Add color preferences.
            }
        }
        else if(Input=="l"||Input=="load")
        {
            TypeWrighter("This has not been implemented yet!", 1);
            // \todo (Dovenchiko#4#04/22/18): Make loading sequence to read profile file.
        }
        Pause();
    }

    return 0;
}
