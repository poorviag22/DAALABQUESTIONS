#include<iostream>
using namespace std;
int binarysearchl(int arr[],int low,int high,int n,int key)
{
    int mid,ans=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}
int binarysearchr(int arr[],int low,int high,int n,int key)
{
    int mid,ans=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}
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
      int key;
      cin>>key;
      int l=binarysearchl(arr,0,n-1,n,key);
      int r=binarysearchr(arr,0,n-1,n,key);
      if(l==n)
      {
          cout<<"Element Not found!!"<<endl;
      }
      else
      cout<<r-l+1<<endl;

    }
}
