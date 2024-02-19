/*
              1 
            2 2 
          3 3 3 
        4 4 4 4 
      5 5 5 5 5 
    6 6 6 6 6 6 
  7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8 
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << row
                 << " ";
        }
        cout << endl;
    }
}