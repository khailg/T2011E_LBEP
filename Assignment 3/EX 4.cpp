#include <stdio.h>
int main(){
	int a,b;
		printf("Vui long nhap a = ");
		scanf("%d",&a);
		printf("Vui long nhap b = ");
		scanf("%d",&b);
	if((a<=0) || (b<=0)){
			printf("Khong co BCNN");
		}else if(a>0 && b>0){
			int bc=a*b;
			while(a!=b){
				if(a>b){
					a=a-b;
				}else{
					b=b-a;
				}
			}
			printf("BCNN = %d",bc / a);
		}
}
		
