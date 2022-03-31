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
        int c=0,s=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            int me=arr[i];
            int pos=i;
            for(int j=i+1;j<n;j++)
            {
                c++;
                if(arr[j]<me)
                {
                    me=arr[j];
                    pos=j;
                }
            }
            int temp=arr[i];
            arr[i]=me;
            arr[pos]=temp;
            s++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons:"<<c<<endl<<"Shifts: "<<s;
    }
    cout<<endl;
    return 0;
}

