#include<iostream>
using namespace std;
int main()
{
 int n,key,c=0;
 cin>>n>>key;
 int arr[n];
 for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
   c++;
   if(arr[i]==key)
   {
     cout<<"Key Found"<<endl;
     break;
    }
 }
 cout<<c;
 return 0;
 }