#include<bits/stdc++.h>
using namespace std;
void countpair(int arr[],int n,int k)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if ((arr[i] - arr[j] == k )|| (arr[j] - arr[i] == k)  )
                  c++;
        }
    }

    cout<<c<<endl;
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
      int k;
      cin>>k;
      countpair(arr,n,k);
    }
    return 0;
}
