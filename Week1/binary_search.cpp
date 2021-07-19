#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int x)
{

    int low=0,high=n-1,c=0,f=0;
    while(low<=high)
    {
        c++;
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            f=1;
            break;
        }
        else if(arr[mid]>x)
        {

            high=mid-1;
        }
        else
        {

            low=mid+1;
        }
    }
    if(f==1)
    {
        cout<<"Present"<<" "<<c;
    }
    else
    {
        cout<<"not present";
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bsearch(arr,n,key);
}
