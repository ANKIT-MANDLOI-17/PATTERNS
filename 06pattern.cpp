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

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 8;
    int col = 8;
   for(int i = 1;i<=row;i++){
    for(int j = 1;j<=i;j++){
        cout<<i<<" ";
    }cout<<endl;
   }
}