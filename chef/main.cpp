#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,r,i,left,right,k=0;
        cin>>n>>r;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(a[0]>r)
        {
            left=a[0];
            right=0;
        }
        else
        {
            right=a[0];
            left=INT_MAX;
        }
        for(i=1;i<n-1;i++)
        {
            if(a[i]>r&&a[i]<left&&a[i]>right)
                left=a[i];
            else if(a[i]<r&&a[i]<left&&a[i]>right)
                right=a[i];
            else
                k=1;
        }
        if(k==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
