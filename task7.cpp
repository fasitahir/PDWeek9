#include <iostream>
using namespace std;
// common letters
main()
{
    string s1;
    string s2;
    int l1, l2, size1, size2,  count = 0;

    cout << "Enter string 1: ";
    cin >> s1;

    cout << "Enter string 2: ";
    cin >> s2;

    size1 = s1.length();
    size2 = s2.length();
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (s1[i] == s2[j])
            {
                count++;
                s2[j] = '.';
                break;
            }
        }
    }

    cout << count;
}
