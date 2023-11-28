// * * * * *
//  * * * *
//   * * *
//    * *
//     * 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int row = n; row>=0; row--)
    {
        for(int k = n-row; k>0; k--)
           cout<<" ";
        for(int col = row; col>=0; col--)
        {
            cout<<"* ";
        }      
        cout<<endl;
    }
        return 0;
}