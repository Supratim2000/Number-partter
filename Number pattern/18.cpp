#include<iostream>
const int Nmax=100;
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size=2*n-1;
    int arr[Nmax][Nmax];
    int big=size-1,small=0;
    while(n)
    {
        for(int i=small;i<=big;i++)
            for(int j=small;j<=big;j++)
                if(i==small || j==small || i==big || j==big)
                    arr[i][j]=n;
        n--;
        small++;
        big--;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << arr[i][j]<<" ";
        cout << endl;
    }
    return 0;
}