#include<iostream>
using namespace std;

void minandmax(int *a, int *min, int *max)
{
	//whatever we change to * min and *max inside the function will get affected even outside the fuction
	
	int i;
//	int small=1000000,large=-999999;
	int small=a[0],large=a[0];
	
	for(i=1;i<6;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
			
		}
	}
}

int main()
{
	int a[5];
	int min, max;
	int i;
	for(i=0;i<6;i++)
	{
		a[i]=i;
	}
	minandmax(a,&min,&max);
}
