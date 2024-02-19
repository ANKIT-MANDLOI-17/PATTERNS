

/*

1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7   
1 2 3 4 5 6     
1 2 3 4 5       
1 2 3 4         
1 2 3
1 2
1

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 8;
    for(int row = n;row >= 1 ;row--){
        for(int col = 1 ;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
  
}