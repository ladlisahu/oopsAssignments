#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,j,temp;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter elements of array :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    cout<<"Second largest number : "<<arr[1]<<endl;
    cout<<"Second smallest number : "<<arr[n-2]<<endl;
    return 0;
}
