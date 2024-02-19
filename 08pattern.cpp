/*
A       
B C     
C D E   
D E F G 
E F G H I
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

            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }

        cout << endl;
    }
}