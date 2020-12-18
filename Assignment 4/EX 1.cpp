#include <stdio.h>
int main (){
	int n ;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int arr[n];
	int x;
	for(int i=n-1;i>=0;i--){
		if(arr[i] %2 !=0){
			x=arr[i];
			break;
		}
	}
	if(x==0){
		printf("Khong co so le nao ca");
	}else{
		printf("So le cuoi cung : %d",x);
	}
}
