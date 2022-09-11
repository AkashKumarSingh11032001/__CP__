#include <bits/stdc++.h>
using namespace std;

/* PATTERN 1
1234
1234
1234
1234
*/
void pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " "; // for reverse use n-j+1
        }
        cout << endl;
    }
}

/* PATTERN 2
123
456
789
*/
void pattern_2(int n) // n = no. of row
{
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << val++ << " ";
        }
        cout << endl;
    }
}

/* PATTERN 3
*
**
***
****
*/
void pattern_3(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

/* PATTERN 4
1
22
333
4444
*/
void pattern_4(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (int j = 1; j <= i; j++)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
int main()
{

    // pattern 1
    // pattern_1(6);

    cout << endl;

    // pattern 2
    // pattern_2(3);

    cout << endl;

    // pattern 3
    // pattern_3(3);

    cout << endl;

    // pattern 4
    pattern_4(4);
}