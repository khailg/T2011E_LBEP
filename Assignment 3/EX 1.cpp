#include <stdio.h>
int main (){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	 	if(n%2==0){
	 		printf("So chan ay la : %d \n",n-2);
	 		break;
		 }else{
		 	printf("so chan ay la : %d \n",n-1);
		 	break;
		 }
	}
}
