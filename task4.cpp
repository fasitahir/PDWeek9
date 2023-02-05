#include <iostream>
using namespace std;
// print boom if there is 7
main()
{
    int size, digit;
    bool present = false;
    cout << "Enter size: ";
    cin >> size;
    int num[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter array of numbers: ";
        cin >> num[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (num[i] > 9)
        {
            while (num[i] > 0)
            {
                digit = num[i] % 10;
                num[i] = num[i] / 10;
                if(digit == 7)
                {
                    break;
                }
            }
        }
        if (digit == 7 || num[i] == 7)
        {
            present = true;
            break;
        }
    }

    if (present == true)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "7 not present";
    }
}