#include <bits/stdc++.h>
using namespace std;
void duplicate(vector<int>&arr,int n)
{
    sort(arr.begin(),arr.end());
   int flag=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==arr[i+1])
       {
           flag=1;
           break;
       }
   }
   if(flag==1)
   {
       cout<<"YES";
   }
   else{
    cout<<"No";
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
        int x;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr.push_back(x);
        }
        duplicate(arr,n);
    }
}
