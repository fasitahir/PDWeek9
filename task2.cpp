#include <iostream>
using namespace std;
// movie ticket

main()
{
    string movie[5] = {"Gladiator", "OP", "DBS", "Avengers", "Intersteller"};
    float price = 500 , totalPrice;

    string name;

    cout << "Enter name of movie: ";
    cin >> name;

    for (int i = 0; movie[i] != "\0"; i++)
    {
        if (name == movie[i])
        {

            if (i % 2 == 0)
            {
                totalPrice = price - (price*10/100);
            }

            else
            {
                totalPrice = price - (price * 0.05);
            }
        }
    }

    cout << totalPrice;
}