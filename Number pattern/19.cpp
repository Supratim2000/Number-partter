#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;
    int count=1;
    /* Note:-
            dir==0 ---> right triversal
            dir==1 ---> down triversal
            dir==2 ---> left triversal
            dir==3 ---> up triversal
     */
    int dir=0;
    while(top<=bottom && left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
                arr[top][i]=count++;
            top++;
            dir=1;
        }
        if(dir==1)
        {
            for(int i=top;i<=bottom;i++)
                arr[i][right]=count++;
            right--;
            dir=2;
        }
        if(dir==2)
        {
            for(int i=right;i>=left;i--)
                arr[bottom][i]=count++;
            bottom--;
            dir=3;
        }
        if(dir==3)
        {
            for(int i=bottom;i>=top;i--)
                arr[i][left]=count++;
            left++;
            dir=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}