#include <stdio.h>
int main (){
//	int s,n;
//	s=0;
//	n=1;
//	for(n=1;n<200; ){
//		n=n+2;
//		s= s+n;
//	}
//	printf("Tong S = %d",s);
	int S=0;
	for(int i=0,j=0;i<100;j++){
		if(j%2!=0){
			S+=j;
			i++;
		}
	}
	printf("Tong 100 so le: %d",S);
}
