/*
              1 
            1 2 1 
          1 2 3 2 1         
        1 2 3 4 3 2 1       
      1 2 3 4 5 4 3 2 1     
    1 2 3 4 5 6 5 4 3 2 1   
  1 2 3 4 5 6 7 6 5 4 3 2 1 
1 2 3 4 5 6 7 8 7 6 5 4 3 2 1      

*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 8;
    for(int row = 1;row<=n;row++){

        //print space
        for(int space = 1;space <= n-row; space++){
            cout<<"  ";
        }
        //print No from 1 to Row
      for(int col = 1; col<=row;col++){
        cout<<col<<" ";
      }
      //print NO from row-1 to 1
      for(int col = row-1;col>=1;col--){
        cout<<col<<" ";
      }
        cout<<endl;
    }
}