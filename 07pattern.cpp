
/*
A 
B B
C C C
D D D D
E E E E E

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 5;
    int col = 5;
    
    for(int i = 1;i<=row;i++){
        for(int j = 1;j<= i;j++){
            char alpha = 'A'+i-1;
            cout<<alpha<<" ";
        }
        cout<<endl;
    }
    
 
}