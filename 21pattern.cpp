
/*
* * * * * * * * * * * * * * * 
  * * * * * * * * * * * * *   
    * * * * * * * * * * *     
      * * * * * * * * *       
        * * * * * * *         
          * * * * * 
            * * * 
              * 

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    for(int row = n;row>=1;row--){
        //print space
        for(int space = 1; space<= ((2*n-1)-(2*row-1))/2;space++){
            cout<<"  ";
        }
        for(int star  = 1 ;star<=2*row-1;star++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}