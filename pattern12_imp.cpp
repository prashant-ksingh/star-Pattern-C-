// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int row= 1;row<=n; row++)
    {
        int val=row;
        for(int col= 1; col<=row; col++)
        {
            cout<<val<<" ";
            val += n-col;
        }
        cout<<endl;
    }
    return 0;
}
