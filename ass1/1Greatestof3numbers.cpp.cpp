#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3)
    {
        cout<<"The largest number is "<<num1;
    }
    if(num2>=num1 && num2>=num3)
    {
        cout<<"The largest number is "<<num2;
    }
    if(num3>=num1 && num3>=num2)
    {
        cout<<"The largest number is "<<num3;
    }
    return 0;
}
