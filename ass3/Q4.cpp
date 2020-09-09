#include<iostream>
#include<math.h>
using namespace std;

int sphereVolume(int r)
{
    return ((4.00/3.00)*3.14159*pow(r,3));
}

int main()
{   
    int radius; 
    cout<<"Enter the radius of the sphere : " ;
    cin>>radius;
    int volume = sphereVolume(radius);
    cout<<"Volume of the sphere is : "<<volume<<endl;
}