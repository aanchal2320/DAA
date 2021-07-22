#include<iostream>
using namespace std;
void find_triplet(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int start=0;
        int last=i-1;
        while(start<last)
        {
            if(arr[start]+arr[last]==arr[i])
            {

                cout<<start+1<<","<<last+1<<","<<i+1<<endl;
                return;
            }
            else if(arr[i]>arr[start]+arr[last])
                start++;
            else
                last--;
        }
    }
    cout<<"No Sequence Found"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        find_triplet(arr,n);
    }
    return 0;
}
