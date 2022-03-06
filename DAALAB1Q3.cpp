#include <bits/stdc++.h>
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
        int x=sqrt(val);
        int low=0,high=x,flag=0;
        if(arr[0]>val)
        {
            cout<<"Not Present";
        }
        else{
        while(high<n)
        {
            if(arr[low]<=val&&arr[high]>=val)
            {
                for(int i=low;i<=high;i++)
                {
                    if(arr[i]==val)
                    {
                        flag=1;
                        cout<<"Present"<<endl;
                        break;
                    }
                }
                if(flag==0)
                    cout<<"Not Present";
                break;
            }
            else{
                low=high;
                high=high+x;
            }
        }
    if(high>n)
        cout<<"Not Present"<<endl;
        }
    }
}
