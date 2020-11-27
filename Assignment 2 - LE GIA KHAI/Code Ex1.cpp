#include <stdio.h>

int main (){
	int a;
	printf("Nhap a= ");
	scanf("%d",&a);
	
	if(a==8){
					printf("Day la ngay chu nhat");
	}else{
		if(a>8){	
					printf("Day khong phai la thu trong tuan");
		}else{
			if(a>=2){
				if(a==2){ printf("Day la thu 2"); }
				if(a==3){ printf("Day la thu 3"); }
				if(a==4){ printf("Day la thu 4"); }	
				if(a==5){ printf("Day la thu 5"); }
				if(a==6){ printf("Day la thu 6"); }
				if(a==7){ printf("Day la thu 7"); }
			}else{
					printf("Day khong phai ngay trong tuan");
			}
		}
	}
}
