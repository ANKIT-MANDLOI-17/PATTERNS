
/*
D 
C D
B C D
A B C D
@ A B C D
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 5;
    int col = 5;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i; j++)
        {

           char ch = 'A'+row-i+j-2;
           cout<<ch<<" ";
        }

        cout << endl;
    }
}