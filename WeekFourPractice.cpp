#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>

using namespace std;

int main()
{

    cout << "\n\n\nWelcome to Week Four Practice\n\n\n" << endl;

    //Make a number into a string
    int num1;
    num1 = 5;

    string Str = to_string(num1);

    cout << "This number has been put into a string; " << Str << endl;

    //While Loop
    cout << "Making a While Loop similarly as a For Loop" << endl;
    int i = 0;
    while(i <= 10)
    {
        cout << "\n Adding up to " << i;
        i++;
    }

    //For Loop String
    cout << "\n\nMaking a For Loop for my ABCs" << endl;
    string myStr;
    myStr = "\nabcdefghij";

    for(int i = 0; i < 10; i++)
    {
        cout << myStr[i] << " \n ";
    }

    //Reverse a string
    cout << "\n\nReversing the string\n" << endl;
    for(int i = 9; i > 0; --i)
    {
        cout << "\n " <<myStr[i];
    }

    //ChatGPT String (skipping this section, does the same thing as line 30)
    //cout << "\n\nChatGPT creating a For Loop with characters\n" << endl;
    for(char c = 'a'; c <= 'z'; ++c)
    {
      //  cout << c;
    }

    //Create a one-dimensional array
    cout << "\n\nCreating a one-dimensional array" << endl;
    char myChars[10] = {'a','b','c','d','e','f','g','h','i','j'};

    cout << "\n\nshould be an e..." << myChars[4];
    cout << "\n\nmyChars is " << myChars;

    for(int i = 0; i < 10; i++)
    {
        cout << "\n\nmyChars[" << i << "] is " << myChars[i];
    }

    //If Statement
    cout << "\n\nCoding an If-Else Statement" << endl;

    int myNum1 = 100;
    int myNum2 = 33;

    if(myNum1 > myNum2)
    {
        cout << "\nThe test condition was true";
    }
    else
    {
        cout << "\nThe test condition evalyated to fale";
    }

    return 0;
}
