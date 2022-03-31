#include<iostream>
using namespace std;
int quicksort(int arr[],int low,int high,int &comp,int &swaps)
{
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        comp++;
        if(arr[j]<pivot)
        {
            i++;
            swaps++;
            swap(arr[i],arr[j]);
        }
    }
    swaps++;
    swap(arr[i+1],arr[high]);
    return i+1;
}
void part(int arr[],int low,int high,int &comp,int &swaps)
{
    if(low<high)
    {
        int loc=quicksort(arr,low,high,comp,swaps);
        part(arr,low,loc-1,comp,swaps);
        part(arr,loc+1,high,comp,swaps);
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
        int comp=0,swaps=0;
        part(arr,0,n-1,comp,swaps);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<comp<<" "<<swaps<<endl;
    }
}

