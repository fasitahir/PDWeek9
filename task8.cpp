#include <iostream>
using namespace std;
main()
{
    int size, time , count = 0;
    cout << "Enter total number of colours: ";
    cin >> size;
    string color[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter colour: ";
        cin >> color[i];
    }

    for (int i = 0; i < size; i++)
    {
        if((color[i] == color[i+1]) )
        {
            count ++ ;
        }
        else if (color[i] != color[i+1])
        {
            time = (size - 1) + (size * 2);
        }

    }
    cout << time - count;
}