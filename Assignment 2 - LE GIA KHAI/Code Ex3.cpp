#include <stdio.h>
int main (){
	int a,b;
	
	printf("Nhap a= ");
	scanf("%d",&a);
	
	printf("Nhap b= ");
	scanf("%d",&b);
	
	
	if((b==2) && ((a>1) && (a<30)))
	{ 	
		printf("Ngay %d Thang %d Nam 2020 \n",a,b);
		printf("La ngay thu %d trong nam \n",32+a);	
		printf("La thu hai");
	}
	if((b==4) ||
		(b==6) ||
		(b==9)	||
		(b==11)	
		&& ((a>0) && (a<31)))
	{
		printf("Ngay %d Thang %d Nam 2020 \n",a,b);
		printf("La ngay thu %d trong nam \n",a+98);	// chua ro cthuc
		printf("La thu hai"); 						//chua ro cthuc
	}
	if((b==1)	||
		(b==3)	||
		(b==5)	||
		(b==7)	||
		(b==8)	||
		(b==10)	||
		(b==12)
		&& ((a>0) && (a<32)))
	{
		printf("Ngay %d Thang %d Nam 2020 \n",a,b);
		printf("La ngay thu %d trong nam \n",a+13); // chua ro cthuc
		printf("La thu hai"); 						//chua ro cthuc
	}	
}
