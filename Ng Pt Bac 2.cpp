#include <Stdio.h>
int main (){
	int a,b,c,delta;
	
	printf("Nhap a= ");
	scanf("%d",&a);
	
	printf("Nhap b= ");
	scanf("%d",&b);
	
	printf("Nhap c = ");
	scanf("%d",&c);
	
	delta = (a+b+c)/2;
	printf("Delta= %d",delta);
	
	if(delta>=0){
		if(delta==0){	printf("	Phuong trinh co nghiem kep");
		}else{			printf("	Phuong trinh co 2 nghiem phan biet");
		}
	}else{				printf("	Phuong trinh vo nghiêm");
	}
	//if(delta>=0){
	//if(delta==0){			x1=x2=(-b/(2*a));
						//printf("	Phuong trinh co nghiem kep: x1=x2= ",x1);
						
	//	}else{			x1=(-b+sqrt(delta))/(2*a);
	//					x2=(-b-sqrt(delta))/(2*a);
	//					printf("	Phuong trinh co nghiem x1= ",x1);
	//					printf("	Phuong trinh co nghiem x2= ",x2);
	//	}
	//}else{				printf("	Phuong trinh vo nghiem");
	//}
}
