
#include <stdio.h>

int x[100];
int m, i, j;
//nhap mang
void nhapMang(int x[100], int m){
	for (i=0; i<m; i++){
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
	}
}

//xuat mang
void xuatMang(int x[100], int m){
	for (i=0; i<m; i++){
		printf("%d  ", x[i]);
	}
	
}
//in ra phan tu duy nhat
void inRaPhanTuDuyNhat(int *x, int m){
	int i, j, k;
	int temp;
	for (i = 0; i< m; i++){
		temp = 0;
		for (j = 0, k=m; j<k+1; j++){
			if (i != j){
				if (x[j] == x[i]){
				temp++;
				}
			}
			
		}
		if (temp == 0){
			printf("%5d", x[i]);
		}
	}
}
int main(){
    do{
    	printf("Nhap vao m: ");
    	scanf("%d", &m);
	}while(m<=0);
	
	nhapMang(x, m);
	printf("Mang: \n");
	xuatMang(x, m);
	printf("\nIn ra phan tu duy nhat: \n");
	inRaPhanTuDuyNhat(x, m);
}
