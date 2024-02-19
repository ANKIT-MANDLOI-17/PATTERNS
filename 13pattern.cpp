#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 8;
   for(int row = 1;row<= n;row++){
    for(int col = 1;col<=row;col++){
        cout<<n-(col-1)<<" ";
    }

    cout<<endl;
   }
    
  
}