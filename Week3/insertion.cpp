#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,comp=0,shift=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>key)
            {
                comp++;
                arr[j+1]=arr[j];
                j--;
                shift++;
            }
            shift++;
            arr[j+1]=key;

        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"Comparisons="<<comp<<endl;
        cout<<"Shifts="<<shift;
    }
    return 0;
}
