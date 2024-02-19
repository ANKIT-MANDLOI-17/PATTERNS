
/*

* * * * * * * * * * * * 
* * * * *     * * * * * 
* * * *         * * * * 
* * *             * * * 
* *                 * *
*                     * 
*                     *
* *                 * * 
* * *             * * *
* * * *         * * * * 
* * * * *     * * * * *
* * * * * * * * * * * * 

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
        //top part
    for(int row = n;row>= 1;row--){
        //print star
        for(int star = 1 ; star <= row;star++){
            cout<<"* ";
        }
        for(int space = 1; space<= 2*n-2*row;space++){
            cout<<"  ";
        }
         for(int star = 1 ; star <= row;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //bottom part
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
}
