#include<iostream>
using namespace std;

int main()
{
	int thang;
	cout<<"Nhap so thang: ";
	cin>>thang;
	if(thang>=1&& thang<=12)
	{
		if(thang>=1&& thang<=3)
		{
			cout<<"Mua xuan";
		}
		else
		{
			if(thang>=4&& thang<=6 )
			{
				cout<<"Mua he";
			}
			else
			{
				if(thang>=7&& thang<=9)
				{
					cout<<"Mua thu";
				}
				else
				{
					cout<<"Mua dong";
				}
			}
			
		}
	}
	else
	{
		cout<<"Du lieu khong hop le";
	}
}
   
