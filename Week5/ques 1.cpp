/*Count maximum appearing duplicate in character array*/
#include<iostream>
using namespace std;
void freq(char arr[],int n,int &maximum, char &ans)
{

    int freq[26]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]-'a']++;
     if(maximum<freq[arr[i]-'a'])
     {
         maximum=freq[arr[i]-'a'];
         ans=arr[i];
     }
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
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int maximum=INT_MIN;
        char ans;
        freq(arr,n,maximum,ans);
        if(maximum>1)
            cout<<ans<<"-"<<maximum;
        else
            cout<<"NO DUPLICATES PRESENT";
    }
    return 0;
}
