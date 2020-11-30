#include <stdio.h>
int main (){
	int n;
	printf("Nhap so n= ");
	scanf("%d",&n);
	
	if((n>1000) && (n<9999) || (n<-1000) && (n>-9999)){
		int a;
		a= (n%10)*1000 + ((n/10)%10)*100 + (((n/10)/10)%10)*10 + (n/1000);
		printf("KQ : %d",a);
	}
	if(n==0){
		printf("KQ : %d",n);
	}
	if((n>100) && (n<1000) || (n<-100) && (n>-1000)){
		int a;
		a= (n%10)*100 + ((n/10)%10)*10 +  (n/100);
		printf("KQ : %d",a);
	}
	if((n>10) && (n<100) || (n<-10) && (n>-100)){
		int a;
		a= (n%10)*10 +  (n/10);
		printf("KQ : %d",a);
	}
}
