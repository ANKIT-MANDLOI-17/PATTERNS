/*
*                     * 
* *                 * *
* * *             * * *
* * * *         * * * *
* * * * *     * * * * *
* * * * * * * * * * * * 
* * * * *     * * * * * 
* * * *         * * * *
* * *             * * *
* *                 * * 
*                     *

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n  = 6;

      for(int row = 1;row<=n;row++){
        for(int star = 1;star<=row; star++){
            cout<<"* ";
        }
        for(int space =1 ;space<= 2*n-2*row;space++ ){
            cout<<"  ";
        }
         for(int star = 1;star<=row; star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row = n-1; row>= 1; row--){
         for(int star = 1;star<=row; star++){
            cout<<"* ";
        }
        for(int space =1 ;space<= 2*n-2*row;space++ ){
            cout<<"  ";
        }
         for(int star = 1;star<=row; star++){
            cout<<"* ";
        }
        cout<<endl;
    }
}