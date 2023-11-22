//     1
//    22
//   333
//  4444
// 55555

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int row =1; row<= n; row++)
    {
        for(int col =1; col<= n; col++ )
        {
            if( col >= 6-row)
            {
                cout<<row;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}