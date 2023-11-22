// *****
// ****
// ***
// **
// *
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;

        for(int row = 1; row<=n; row++)
        {
            for(int col =(6-row); col>=1; col--)
            {
                cout<<"*";
            }
        cout<<endl;
        }
    
    return 0;
}

// int main()
// {
//     int n=5;
//     for(int row =1; row <=n; row++)
//     {
//         for(int col= row; col<=n; col++ )
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
