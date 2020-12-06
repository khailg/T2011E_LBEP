#include <stdio.h>
int main(){
	int a,b;
		printf("Vui long nhap a = ");
		scanf("%d",&a);
		printf("Vui long nhap b = ");
		scanf("%d",&b);
	if((a<=0) || (b<=0)){
			printf("Khong co UCLN");
		}else if(a>0 && b>0){
			while(a!=b){
				if(a>b){
					a= a-b;
				}else{
					b= b-a;
				}
			}
			printf("UCLN = %d",a);
		}
}
		
