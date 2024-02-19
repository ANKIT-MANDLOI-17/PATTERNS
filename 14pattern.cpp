#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 8 ;
    int col, row;
    for( row = 1;row<=n;row++){
        for( col = 1;col <= n-row;col++)
            cout<<"  ";
        
        for( col = 1;col<=row;col++){
            cout<<"* ";
        }


        cout<<endl;

    }
}