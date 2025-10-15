#include<iostream>
using namespace std;

int main()
{
	int sdc, sdm, sdsd;
	double tien;
	cout<<"Nhap so dien cu"<<endl;
	cin>>sdc;
	cout<<"nhap so dien moi"<<endl;
	cin>>sdm;
	if(sdc<sdm&& sdc>=0)
	{
		//Lap bieu thuc
		sdsd= sdm - sdc;
		//Xuat ket qua
		cout<<"So dien su dung la: "<<sdsd<<endl;
		if(sdsd<=100)
		{
			tien= 100*1200;
		}
		else
		{
			if(sdsd<=150)
			{
				tien= 100*1200 + (sdsd-100)*1800;
			}
			else
			{
				tien= 100*1200 + (sdsd-100)*1800 + (sdsd-150)*2200;
			}
			
		}
		tien= tien*1.1;
		cout<<"So tien can thanh toan la: "<<tien<<endl;
	}
	else
	{
		cout<<"Du lieu khong hop le";
	}
	
}
