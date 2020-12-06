#include <stdio.h>
int main (){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int k = 0; // k la so luong uoc cua n
	for(int i=1;i<=n;i++){
		if(n%i==0){
			k++;
		}
	}
	if(k==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai la so nguyen to",n);
	}
}
