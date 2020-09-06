#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char word[1000];
    cin>>word;
    int n= strlen(word);
    int count=0;
    for(int i=0;i<n/2;i++)
    {
        if(word[i]==word[n-i-1])
        {
            count++;
        }
    }
    if (count==n/2)
    {
        cout<<"String is palindrome";
    }
    else
    {
        cout<<"String is not palindrome";
    }
    return 0;
}
