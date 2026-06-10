#include<iostream>
using namespace std;
int area(int l,int b)
{
	return l*b;
}
int perimeter(int l,int b)
	{
		return 2*(l+b);
	}
int main()
{
	int l,b,result1,result2;
	cout<<"enter lenth and breadth ";
	cin>>l>>b;
	result1=area(l,b);
	result2=perimeter(l,b);
	cout<<"the area is "<<result1<<endl<<"the perimeter is "<<result2;
	return 0;
	
}
