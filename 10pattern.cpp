
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 7;
    int col = 7;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i; j++)
        {

          cout<<j<<" ";
        }

        cout << endl;
    }
}