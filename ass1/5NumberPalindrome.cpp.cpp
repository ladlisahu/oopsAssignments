#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,temp,rem;
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==temp)
        cout<<"This is palindrome";
    else
        cout<<"This is not palindrome";
    return 0;

}
