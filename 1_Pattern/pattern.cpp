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
            cout << "*"
                 << " ";
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

/* PATTERN 5
1
23
456
78910
*/
void pattern_5(int n) // n = no. of row
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val++ << " ";
        }
        cout << endl;
    }
}
// pattern 5 without using extra vrialble!
// void pattern_5(int n) // n = no. of row
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i+j << " ";
//         }
//         cout << endl;
//     }
// }

/* PATTERN 6
1
21
321
4321
*/
void pattern_6(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// void pattern_6(int n) // n = no. of row
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i-j+1 << " ";
//         }
//         cout << endl;
//     }
// }

/* PATTERN 7
AAA
BBB
CCC
*/
void pattern_7(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
/* PATTERN 8
ABCD
ABCD
ABCD
*/
void pattern_8(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
/* PATTERN 9
ABC
DEF
GHI
*/
void pattern_9(int n) // n = no. of row
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}
/* PATTERN 10 ---> IMP
ABC
BCD
CDE
*/
void pattern_10(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        char x = 'A' + i - 1;
        for (int j = 1; j <= n; j++)
        {
            char ch = x + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
/* PATTERN 11
A
BB
CCC
*/
void pattern_11(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        char x = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
/* PATTERN 12
A
BC
DEF
*/
void pattern_12(int n) // n = no. of row
{
    char x = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x++ << " ";
        }
        cout << endl;
    }
}
/* PATTERN 13
A
BC
CDE
DEFG
*/
void pattern_13(int n) // n = no. of row
{

    for (int i = 1; i <= n; i++)
    {
        char x = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            char ch = x + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
/* PATTERN 14
D
CD
BCD
ABCD
*/
void pattern_14(int n) // n = no. of row
{

    for (int i = 1; i <= n; i++)
    {
        char x = 'A' + n - 1;
        for (int j = i; j > 0; j--)
        {
            char ch = x - j + 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
/* PATTERN 15
  *
 **
***
*/
void pattern_15(int n) // n = no. of row
{

    for (int i = 0; i < n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++) // print space
        {
            cout << " " << " ";
        }
        for (int j = space; j <= n; j++) // print star
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
/* PATTERN 16
****
***
**
*
*/
// void pattern_16(int n) // n = no. of row
// {
//     int x = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= x; j++) // print space
//         {
//             cout << "*" << " ";
           
//         }
//         x--;
//         cout << endl;
//     }
// }
void pattern_16(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1 ; j++) // print space
        {
            cout << "*" << " ";
           
        }
        cout << endl;
    }
}
/* PATTERN 17
****
 ***
  **
   *
*/
void pattern_17(int n) // n = no. of row
{
    for (int i = 0; i < n; i++)
    {
        int space = i;
        for(int k = 1; k <= space; k++){
            cout << " " << " ";
        }
        for (int j = space+1; j <= n; j++) // print space
        {
            cout << "*" << " ";
           
        }
        cout << endl;
    }
}
/* PATTERN 18
1111
 222
  33
   4
*/
void pattern_18(int n) // n = no. of row
{
    for (int i = 1; i <= n; i++)
    {
        int space = i-1;
        for(int k = 1; k <= space; k++){
            cout << " " << " ";
        }
        for (int j = space+1; j <= n; j++) // print space
        {
            cout << i << " ";
           
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
    // pattern_4(4);

    cout << endl;

    // pattern 5
    // pattern_5(4);

    cout << endl;

    // pattern 6
    // pattern_6(4);

    cout << endl;

    // pattern 7
    // pattern_7(4);

    cout << endl;

    // pattern 8
    // pattern_8(4);

    cout << endl;

    // pattern 9
    // pattern_9(4);

    cout << endl;

    // pattern 10
    // pattern_10(4);

    cout << endl;

    // pattern 11
    // pattern_11(4);

    cout << endl;

    // pattern 12
    // pattern_12(4);

    cout << endl;

    // pattern 13
    // pattern_13(4);

    cout << endl;

    // pattern 14
    // pattern_14(4);

    cout << endl;

    // pattern 15
    // pattern_15(4);
    
    cout << endl;

    // pattern 16
    // pattern_16(4);
        
    cout << endl;

    // pattern 17
    // pattern_17(4);
            
    cout << endl;

    // pattern 18
    pattern_18(4);
}