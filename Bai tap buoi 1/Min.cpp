#include <stdio.h>
int main (){
	int a,b,c ;
	
	printf("Nhap a= ");
	scanf("%d",&a);
	
	printf("Nhap b= ");
	scanf("%d",&b);
	
	printf("Nhap c= ");
	scanf("%d",&c);
	
	if(a<c){
		if(a<b){	printf("Min: %d",a);
		}else{		printf("Min: %d",b);
		}
	}else{
		if(b<c){	printf("Min: %d",b);
		}else{		printf("Min: %d",c);
		}
	}	
}
