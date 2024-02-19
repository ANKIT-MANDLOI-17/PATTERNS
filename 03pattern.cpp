/*
1 2 3 4 
5 6 7 8
9 10 11 12
13 14 15 16
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int row = 4;
    int col = 4;
    int count = 1;
    for(int i = 1;i<= row;i++){
        for(int j = 1;j<=col;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}