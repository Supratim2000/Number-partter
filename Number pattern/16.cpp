#include<iostream>
using namespace std;

int main()
{
    int n,temp,temp2;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        temp = i + 1;
        temp2 = i;
        for (int j = 0; j < n - i; j++)
            cout << temp++;
        for (int j = 0; j < i; j++)
            cout << temp2--;
        cout << endl;
    }
    return 0;
}