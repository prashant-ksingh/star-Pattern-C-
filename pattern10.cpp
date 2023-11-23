// 1
// 23
// 456
// 78910
// 1112131415

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5,a=1;
    for( int row=1; row<=n; row++){
        for(int col=1; col<=row; col++)
        {
            cout<<a;
            ++a;
        }
        cout<<endl;
    }
}