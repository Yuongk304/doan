#include<iostream>
using namespace std;
int main()
{
double a, b, x;
cin>>a;
cin>>b;
if(a==0)
{
	if(b==0)
	{
		cout<<"Phuong trinh vo so nghiem";
	}
	else
	{
		cout<<"Phuong trinh vo nghiem";
	}

}
else
{
	x= -b/a;
	cout<<"Nghiem cua phuong trinh la"<<x;
}
		
}
