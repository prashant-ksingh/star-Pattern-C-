// Rohmbus

//  * * * * * *   
//   * * * * * *  
//    * * * * * * 
//     * * * * * *
//      * * * * * *

#include <iostream>

using namespace std;

int main()
{
    int n=5;
    for(int i =0; i<=n;i++)
    {
        for(int k=1; k<=i; k++)
        cout<<" ";
        for(int j =0; j<=n; j++ )
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
} 