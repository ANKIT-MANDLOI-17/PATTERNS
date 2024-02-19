/*
              A 
            A B 
          A B C 
        A B C D 
      A B C D E 
    A B C D E F 
  A B C D E F G 
A B C D E F G H 

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
      for(char ch = 'A';ch<='A'+row-1;ch++){
        cout<<ch<<" ";
      }
        cout << endl;
    }
}