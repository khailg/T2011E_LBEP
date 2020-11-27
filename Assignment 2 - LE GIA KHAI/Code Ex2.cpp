#include <stdio.h>
int main (){
	int a,b;
	
	printf("Nhap a= ");
	scanf("%d",&a);
	
	printf("Nhap b= ");
	scanf("%d",&b);
	if(b!=0){
		if(a>=b){	
				printf("KQ phep chia = %f",(float)a/b);
		}else{	
				printf("KQ phep nhan = %d",a*b);
		}
	}else{
		if(a==0){
				printf("KQ phep chia = vo cung");
		}else{
				printf("Khong tinh duoc ket qua phep chia");
		}
	}
}
