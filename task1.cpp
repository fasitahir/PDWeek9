#include <iostream>
using namespace std;
//calculate the bill of fruit using parallel arrays
main()
{
    string fruit[] = {"peach" , "apple" , "guava" , "watermelon"};
    int price[]={60 , 70 , 40 , 30};

    int count = 0  , quantity , fruitPrice;
    string name;
    cout << "Enter the name of fruit: ";
    cin >> name;

    cout << "Enter quantity of the fruit: ";
    cin >> quantity;

    for(int i = 0 ; fruit[i] != "\0" ; i++)
    {
        if(name == fruit[i])
        {
            fruitPrice = price[i];
        }
    }

    fruitPrice = quantity * fruitPrice;

    cout << "Total bill is: " << fruitPrice;

}