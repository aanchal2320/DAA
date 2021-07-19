#include<iostream>
using namespace std;
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
        int key,c=0,f=0;
        cin>>key;
        for(int i=0;i<n;i++)
        {
            c++;
            if(arr[i]==key)
            {
                f=1;
                break;
            }

        }
        if(f==1)
        {
            cout<<"Present"<<" "<<c;
        }
        else
        {
            cout<<"Not Present";
        }

    }
    return 0;
}
