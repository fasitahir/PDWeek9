#include <iostream>
using namespace std;
// print true if all identical

main()
{
    string symbol[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the word: ";
        cin >> symbol[i];
    }

    if(symbol[0] == symbol[1] && symbol[1] == symbol[2] && symbol[2]==symbol[3] )
    {
        cout << "true";
    }

    else
    {
        cout << "false";
    }
}