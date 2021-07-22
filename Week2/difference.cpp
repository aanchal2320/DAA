#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key,c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(abs(arr[i]-arr[j])==key)
                 c++;
            }
        }
        cout<<c;
    }
    return 0;
}
