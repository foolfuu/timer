#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	int h,m,s;
	cout<<"A few hours: ";
	cin>>h;
	cout<<"A few minutes: ";
	cin>>m;
	cout<<"a few seconds: ";
	cin>>s;
	int H,M,S;
	H = h;M = m;S = s;
	while(1)
	{
	Sleep(1000);
	cout<<H<<":"<<M<<":"<<S<<endl;
	--S;
	if(H == 0 and M == 0 and S == 0)
	{
		for(int i = 0 ; i < 3 ; i++)
		{
			cout<<"\a";
			
		}
		Sleep(1000);
		cout<<"0:0:0"<<endl;
		break;
	}
	
	if(S == 0)
	{
		if(M != 0)
		{
			--M;
			S = 60;
		}
	}
	
	if(M == 0)
	{
		if(H != 0)
		{
			--H;
			M = 60;
		}
	}
	}
	
	
	
	getch();
	return 1;
}