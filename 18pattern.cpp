
/*
              1 
            2 1
          3 2 1
        4 3 2 1 
      5 4 3 2 1
    6 5 4 3 2 1
  7 6 5 4 3 2 1 
8 7 6 5 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 8;
    for(int row = 1;row<=n;row++){
        for(int space = 1;space <= n-row; space++){
            cout<<"  ";
        }
        for(int col = row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}