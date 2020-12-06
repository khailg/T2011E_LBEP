#include <stdio.h>
int main (){
//	float i,s=0;
//	i=1;
//	for(i=1;i<1001;i++ ){
//		s= s+1/i;
//	}
//	printf("Tong = %f",s);
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	float s=0;
	for(int i=1;i<=n;i++){
		s+=(float)1/i;
	}
	printf("Tong = %f",s);
}
