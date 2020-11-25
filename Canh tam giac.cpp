#include <stdio.h>
int main (){
	int a,b,c,p;
	
	printf("Nhap a= ",a);
	scanf("%d",&a);
	
	printf("Nhap b= ",b);
	scanf("%d",&b);
	
	printf("Nhap c= ",c);
	scanf("%d",&c);
	
	p = (a+b+c)/2;
	printf("Chu vi= %d",p);
	
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("	Dien tich= %d",s);
	
	if(a>b){
		if(c>b){	printf("	Ba canh a,b,c la ba canh cua tam giac");
		}else{		printf("	Ba canh a,b,c la ba canh cua tam giac");
		}
	}else{
		if(c>a){	printf("	Ba canh a,b,c la ba canh cua tam giac");
		}else{		printf("	Ba canh a,b,c la ba canh cua tam giac");
		}
	}
}
