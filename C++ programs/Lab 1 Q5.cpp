#include<iostream>
using namespace std;
SphereVolume(float r)
{
	float volume=4/3*3.142*(r*r*r);
	return volume;
	
}
SphereSurfaceArea(float r)
{
	float Sarea=4*3.142*(r*r);
	return Sarea;
}
int main()
{
	float r,Sarea,volume;
	cout<<"Enter the Radius of sphere:";
	cin>>r;
	cout<<"The volume of sphere is:"<<SphereVolume(r);
	cout<<"\nThe surface area of sphere is:"<<SphereSurfaceArea(r);
	return 0;
	
}
