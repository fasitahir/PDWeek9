#include <iostream>
using namespace std;
// atm detects dance
main()
{
    string pin;
    bool check = false;
    int num[4];
    int value[4];
    int index;
    string dance[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                      "Pop", "Lock", "Arabesque"};

    cout << "Enter Your pin: ";
    cin >> pin;

    for (int i = 0; i < 4; i++)
    {
        if (pin[i] == '0')
        {
            num[i] = 0;
        }

        else if (pin[i] == '1')
        {
            num[i] = 1;
        }

        else if (pin[i] == '2')
        {
            num[i] = 2;
        }

        else if (pin[i] == '3')
        {
            num[i] = 3;
        }

        else if (pin[i] == '4')
        {
            num[i] = 4;
        }

        else if (pin[i] == '5')
        {
            num[i] = 5;
        }

        else if (pin[i] == '6')
        {
            num[i] = 6;
        }

        else if (pin[i] == '7')
        {
            num[i] = 7;
        }

        else if (pin[i] == '8')
        {
            num[i] = 8;
        }

        else if (pin[i] == '9')
        {
            num[i] = 9;
        }

        else
        {
            check = true;
            break;
        }
    }

    if (check == true)
    {
        cout << "Invalid input";
    }

    for (int i = 0; i < 4; i++)
    {
        if (check == true)
        {
            break;
        }

        else
        {
            value[i] = num[i] + i;

            index = value[i];
            if (index > 9)
            {
                index = index - 10;
            }
            cout << dance[index] << " ";
        }
    }
}