#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp,arr[30];
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    cout<<"\nEnter the elements "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n-1;i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    cout<<"\nSorted list is as follows"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}
