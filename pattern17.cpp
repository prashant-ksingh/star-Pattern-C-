#include <iostream>

using namespace std;

int main()
{
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=2; j<=i; j++)
        {
            cout<<" ";
        }
        for (int k=1;k<=5;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}