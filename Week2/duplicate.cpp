#include<iostream>
using namespace std;
int first(int arr[],int low,int high,int key,int n)
{
    if(high>=low)
    {
        int mid=(low+high)/2;
        if((mid==0||key>arr[mid-1]&&arr[mid]==key))
        return mid;
        else if(key>arr[mid-1])
            return first(arr,(mid+1),high,key,n);
        else
            return first(arr,low,(mid-1),key,n);
    }
    return -1;
}
int last(int arr[],int low,int high,int key,int n)
{
    if(high>=low)
    {
        int mid=(low+high)/2;
        if(mid==n-1||key<arr[mid+1]&&arr[mid]==key)
        {
            return mid;
        }
        else if(key<arr[mid])
            return last(arr,low,mid-1,key,n);
        else
            return last(arr,(mid+1),high,key,n);
    }
    return -1;
}
int count_freq(int arr[],int key,int n)
{
    int i,j;
    i=first(arr,0,n-1,key,n);
    if(i==1)
        return -1;
    j=last(arr,0,n-1,key,n);
    if(j==-1)
        return j;
    return j-i+1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,key;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cin>>key;
     cout<<key<<"-"<<count_freq(arr,key,n);
}
return 0;
}
