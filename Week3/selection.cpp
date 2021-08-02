#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,comp=0,swaps=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min_idx;
        for(int i=0;i<n-1;i++)
        {
            min_idx=i;
            int j;
            for(j=i+1;j<n;j++)
            {
              comp++;
            if (arr[j]<arr[min_idx])
            {
               min_idx=j;
            }
            }
               swap(arr[min_idx],arr[i]);
               swaps++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" "<<endl;
        }
        cout<<"Comparisons="<<comp<<endl;
        cout<<"Swaps="<<swaps;
    }
    return 0;
}
