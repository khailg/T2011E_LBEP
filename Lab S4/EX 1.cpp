#include <stdio.h>
int main (){
	
//	int a,x;
//	printf("Nhap so a= ");
//	scanf("%d",&a);
//	for(x=1;a>1;a--){
//		x=x*a;
//	}
//	printf("Luy thua cua a bang %d",x);

	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	printf("%d! = %d",n,s);
}
