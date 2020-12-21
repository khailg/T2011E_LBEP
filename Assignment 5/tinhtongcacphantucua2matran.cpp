#include <stdio.h>
int main (){
	int i,j, mat[10][10] , row, col;
	int sum =0; 
	printf("\n Nhap so hang cua ma tran: ");
	scanf("%d",&row);
	printf("\n Nhap so cot cua ma tran : ");
	scanf("%d",&col);
	printf("\n Nhap ma tran: \n");
	for(i=0;i< row ; i++){
		for(j=0; j < col ; j++){
			printf("\n Nhap phan tu mat[%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j< col; j++){
			sum = sum + mat[i][j];
		}
	}
	printf("\n Tong tat ca cac phan tu cua matran la : %d ",sum);
	return (0);
}
