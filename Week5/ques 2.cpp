/*Find the pair whose sum is equal to key*/
#include<iostream>
#include<algorithm>
using namespace std;
void findsum(int arr[],int n,int key)
{
    int low=0,high=n-1,flag=0;
    while(low<high)
    {
        if(arr[low]+arr[high]==key)
        {
           cout<<arr[low]<<" "<<arr[high];
           low++;
           high--;
           flag=1;
        }
        else if(arr[low]+arr[high]<key)
        {
            low++;
        }
        else
        {
            high--;
        }

    }
    if(flag==0)
  {
    cout<<"No such pair exists";
  }
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
        sort(arr,arr+n);
        int key;
        cin>>key;
        findsum(arr,n,key);
    }
    return 0;
}
