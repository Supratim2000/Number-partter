#include <iostream>
#define Nmax 1000
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool arr[Nmax][Nmax];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            (i == 0 || j == 0 || i == n - 1 || j == n - 1)? arr[i][j]=true:arr[i][j]=false;
    arr[0][0]=arr[0][n-1]=arr[n-1][0]=arr[n-1][n-1]=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<(int)arr[i][j];
        cout<<endl;
    }
    return 0;
}