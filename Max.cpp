#include <Stdio.h>
int main(){
	
	int a,b,c ;
	printf("Nhap a= ");
	scanf("%d",&a);
	
	printf("Nhap b= ");
	scanf("%d",&b);
	
	printf("Nhap c= ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){	printf("Max: %d",a);
		}else{		printf("Max: %d",c);
		}
	}else{
		if(b>c){	printf("Max: %d",b);
		}else{		printf("Max: %d",c);
		}
	}
}
	

