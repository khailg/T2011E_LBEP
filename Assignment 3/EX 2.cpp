#include <stdio.h>
int main (){
	int a;
	printf("Nhap so tien gui = $");		scanf("%d",&a);
	
	if (a>0){
		int b= a*(1+0.8)*(1+0.8)*(1+0.8)*(1+0.8);
		printf("So tien sau 4 nam = %d$",b);
	}
}
