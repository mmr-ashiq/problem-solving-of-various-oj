#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
