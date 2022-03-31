#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> counttriplet(int arr[],int n)
{
    vector<int>res;
    int c=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((arr[i]+arr[j]==arr[k]))
                {

                    res.push_back(i);
                    res.push_back(j);
                    res.push_back(k);

                }
            }
        }
    }
   /* int j=1;
    for(int i=0;i<n-2;i++)
    {

        int sum=arr[i]+arr[j];
        for(int k=j+1;k<n;k++)
        {
            if(sum==arr[k])
            {
               res.push_back(i);
                    res.push_back(j);
                    res.push_back(k);
            }
        }
        j++;
    }*/

return res;
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
      vector<int>res;
      res=counttriplet(arr,n);
       for(int i=0;i<res.size();i++)
      {
          cout<<res[i];
          cout<<endl;
      }
      cout<<endl;
    }
}
