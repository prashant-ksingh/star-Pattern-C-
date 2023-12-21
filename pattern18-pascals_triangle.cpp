// pascals triangle

//     1 
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i = 1; i<=n; i++)
    {
        int coef=1;
        for(int k = n-i;k>0;k--)
        cout<<" ";
        for(int j =1; j<=i; j++)
            {
                cout<<coef<<" ";
                coef=coef*(i-j)/j;
            }
            cout<<endl;
    }
    return 0;
}