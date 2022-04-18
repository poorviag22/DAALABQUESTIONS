#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high,int &comp)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++)
        l[i]=arr[low+i];
    for(int i=0;i<n2;i++)
        r[i]=arr[mid+1+i];
    int i=0,j=0,k=low;
    while(i<n1&&j<n2)
    {
        comp++;
        if(l[i]<=r[j])
           arr[k++]=l[i++];
        else
            arr[k++]=r[j++];
    }
    while(i<n1)
    {
        //comp++;
        arr[k++]=l[i++];
    }
     while(j<n2)
    {
       // comp++;
        arr[k++]=r[j++];
    }
}
void mergesort(int arr[],int low,p;int high,int &comp,int &inv)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid,comp,inv);
        mergesort(arr,mid+1,high,comp,inv);
        merge(arr,low,mid,high,comp);
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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int comp=0,inv=0;
        mergesort(arr,0,n-1,comp,inv);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<comp<<" "<<inv<<endl;
    }
}
