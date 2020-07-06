#include<iostream>
using namespace std;

int main()
{
    int n,temp,count;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        temp=n+1;
        count=i;
        for(int j=0;j<n;j++)
            j>count?cout<<temp:cout<<--temp;
        cout<<endl;
    }
    return 0;
}