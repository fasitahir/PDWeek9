#include <iostream>
using namespace std;
//length even or odd
main()
{
    string word;
    int length;
    cout << "Enter a string: ";
    getline(cin , word);

    length = word.length();

    if(length % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}