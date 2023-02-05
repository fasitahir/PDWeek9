#include <iostream>
using namespace std;
// even-odd transform
main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    int num[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter numbers in array: ";
        cin >> num[i];
    }
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num[j] % 2 == 0)
            {
                num[j] = num[j] - 2;
            }

            else
            {
                num[j] = num[j] + 2;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << num[i] << " ";
    }
}