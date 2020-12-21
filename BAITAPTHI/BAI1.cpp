#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c,chuvi;
	
	printf("Nhap a= ",a);
	scanf("%d",&a);
	
	printf("Nhap b= ",b);
	scanf("%d",&b);
	
	printf("Nhap c= ",c);
	scanf("%d",&c);
	
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
			printf("a b c la 3 canh cua tam giac \n");
			chuvi = (a+b+c);
			float p= (float)chuvi/2;
			float s = sqrt(p*(p-a)*(p-b)*(p-c));
			printf("Dien tich:  s = %0.0f \n",s);
		}else{
			printf("a b c khong phai la 3 canh cua tam giac");
	}
}
