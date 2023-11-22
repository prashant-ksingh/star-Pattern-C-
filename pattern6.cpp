// 11111
// 2222
// 333
// 44
// 5

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 1; row<= n; row++)
    {
        for(int col = 1; col<= 6-row; col++ )
        {
            cout<<row;
        }
    cout<<endl;
    }
}