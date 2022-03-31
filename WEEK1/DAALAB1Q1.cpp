#include<iostream>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        c=0;
        int n,val;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter Value to be searched: ";
        cin>>val;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==val)
            {   c++;
                cout<<"Present"<<endl;
                break;
            }
           c++;
        }
        cout<<c<<endl;
    }

        cout<<"Not Present"<<endl;
        return 0;
}
