#include<iostream>
using namespace std;
int main()
{
    int t,c=0,val;
    cin>>t;
    while(t--)
    {
        c=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter Value to be searched: ";
        cin>>val;
        int low=0,high=n-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[mid]==val)
            {
                c++;
                cout<<"Present ";
                break;
            }
            else if(arr[mid]<val)
            {
                c++;
                low=mid+1;
            }
            else{
                c++;
                high=mid-1;
            }
        }
        cout<<c<<endl;
        if(low>high||high<0)
        {
            cout<<"Not Present ";
        }
    }

    return 0;
}
