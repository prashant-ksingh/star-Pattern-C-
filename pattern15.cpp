//      1 
//    1 2 1
//   1 3 3 1
//  1 4 6 3 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =5;
    for(int row = 1; row<= n; row++ )
    {
        int coef = 1;
        for(int k = n-row; k>=1; k--)
         cout<<" ";
        {
            for(int col =1; col<=row; col++)
            {
                cout<< coef<< " ";
                coef = coef*(row-col)/col;

            }
        }
        cout<<endl;
    }
    return 0;
}