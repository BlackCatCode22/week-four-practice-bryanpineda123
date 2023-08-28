#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    cout << "\n\nMy Dictionary:\n" << endl;
    map < string, string > myDictionary;
    myDictionary.insert(pair<string, string>("apple", "der apfel"));
    myDictionary.insert(pair<string, string>("banana", "die banane"));
    myDictionary.insert(pair<string, string>("orange", "die orange, die apfelsine"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

    //myDictionary["strawberry"] = "die Erdbeere";
    //cout << myDictionary.size() << endl;
    //myDictionary.clear();

    for(auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    cout << "\n\nMy Key Numbers:\n" << endl;
    map < char, int > myKeyNumbers;
    myKeyNumbers.insert(pair<char, int>('a', 4));
    myKeyNumbers.insert(pair<char, int>('b', 3));
    myKeyNumbers.insert(pair<char, int>('c', 2));
    myKeyNumbers.insert(pair<char, int>('d', 5));

    for(auto pair : myKeyNumbers)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    // Increment the values of our keys
    myKeyNumbers['a']++;
    cout << myKeyNumbers['a'] << endl;
    myKeyNumbers['c']++;
    cout << myKeyNumbers['c'] << endl;
    myKeyNumbers['c']++;
    cout << myKeyNumbers['c'] << endl;
    myKeyNumbers['c'] = myKeyNumbers['c'] + 10;
    cout << myKeyNumbers['c'] << endl;

    return 0;
}
