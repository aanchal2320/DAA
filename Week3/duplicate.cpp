#include<iostream>
using namespace std;
int partition(int arr[],int l,int h);
void qsort(int arr[],int l,int h,int n)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        qsort(arr,l,p-1,n);
        qsort(arr,p+1,h,n);
    }
}
int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
            {
                return j;
            }
       swap(arr[i],arr[j]);
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
        int l=0,h=n-1;
        qsort(arr,l,h,n);
        int flag=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]==arr[i])
              {
                  flag=0;
                 break;
              }
    }
   if(flag==0)
    cout<<"YES";
   else
    cout<<"NO";
    }
   return 0;
}
