/*Intersection of two arrays*/
#include<iostream>
using namespace std;
void intersection(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(i<0&&a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    intersection(a,b,n,m);
    return 0;
}
