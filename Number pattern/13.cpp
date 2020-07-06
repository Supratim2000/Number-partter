#include<iostream>
using namespace std;

int main()
{
    int n,k=-4,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        k+=n;
        temp=k;
        for(int j=0;j<n;j++)
            cout<<temp++<<" ";
        cout<<endl;
    }

    return 0;
}