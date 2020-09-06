#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=flag+1;
        }
    }
        if(flag==2)
        {
            cout<<"The number is prime";
        }
        else
        {
            cout<<"The number is not prime";
        }

    return 0;
}
