// 1
// 26
// 3710
// 481113
// 59121415

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n= 5;
    for( int row=1; row<=n; row++)
    {
        int a=4;
        for(int col= 1; col<=row; col++)
        {
            
            if(col==1)
            {
                cout<<row;
            }else{
                
                int val =row+a;
                cout<<val<<" -";
                a--;
            }
            
        }
        cout<<endl;
    }
}