#include<iostream>
using namespace std;

int main()
{
    int n,k=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        k=i+1;
        for(int j=0;j<n;j++)
            cout<<k++;
        cout<<endl;
    }
    return 0;
}