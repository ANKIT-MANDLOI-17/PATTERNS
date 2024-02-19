/*
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1 
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 4;
    int col = 4;
    for(int i = 1;i<= row;i++)
    {
        for(int j  = col;j>=1;j--){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}