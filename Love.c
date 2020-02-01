#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int upper_heart()
{
	int i=36,j=12,k=35,z,l=27,h=27;
	while(j>=9)
	{
		printf("\n");
		j--;
	}
	while(i>0)
	{
		printf(" ");
		i--;
	}
	printf(" * * * * * * * * * * * * *");
	fflush(stdin);
	Sleep(200);
	for(z=17;z>0;z--)
	{
		printf(" ");
	}
	printf(" * * * * * * * * * * * * *");
	fflush(stdin);
	z=14;
	while(j>0)
	{
		printf("\n");
		for(i=k;i>0;i--)
		{
			printf(" ");
		}
		k--;
		Sleep(200);
		printf("*");
		fflush(stdin);
		for(i=l;i>0;i--)
		{
			printf(".");//inner 1
		}
		Sleep(200);
		printf("*");
		fflush(stdin);
		l+=2;
		for(i=z;i>0;i--)
		{
			printf(" ");
		}
		Sleep(200);
		printf("*");
		fflush(stdin);
		z-=2;
		for(i=h;i>0;i--)
		{
			printf(".");//inner 2
		}
		Sleep(200);
		printf("*");
		fflush(stdin);
		h+=2;
		j--;
		fflush(stdin);
	}
	for(k=5;k>0;k--)  // last 2 straight line
	{
		printf("\n");
		for(i=27;i>0;i--)
		{
			printf(" ");
		}
		printf("*");
		fflush(stdin);
		if(k==1||k==5)
		{
			for(i=86;i>0;i--)
			{
				printf(".");
			}
		}
		else if(k==3)
		{
			for(i=36;i>0;i--)
			{
				printf(".");
			}
			printf("I LOVE YOU 1234");
			for(i=35;i>0;i--)
			{
				printf(".");
			}
		}
		else
		{
			for(i=86;i>0;i--)
			{
				printf(" ");
			}
		}
		printf("*");
		fflush(stdin);
	}	
	return 0;
}
int lower_heart()
{
	int h=27,i,z=86,g=22;
	while(g>0)
	{
		printf("\n");
		i=h;
		while(i>0)
		{
			printf(" ");
			i--;
		}
		h+=2;
		Sleep(200);
		printf("*");
		for(i=z;i>0;i--)
		{
			printf("."); // space between lower heart
		}
		z-=4;
		Sleep(200);
		printf("*");
		g--;
		fflush(stdin);
	}
	return 0;
}
int main()
{
	upper_heart();
	lower_heart();
	getch();
	return 0;
}
