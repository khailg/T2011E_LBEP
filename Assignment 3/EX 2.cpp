#include <stdio.h>
int main (){
	int n,Tong;
	do{
		printf("Vui long nhap so nguyen duong n= ");
		scanf("%d",&n);
		if(n<=0){
			printf("n nhap khong dung, vui long thu lai \n");
		}
	}while(n<=0);
	for(int i;i<=n;i++){
		if(n%i==0){
			printf("Uoc cua %d la %d \n",n,i);
			Tong=Tong+i;
		}
	}
	printf("Tong cua cac uoc = %d \n",Tong);
}
