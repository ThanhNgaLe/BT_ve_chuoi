//Bai5
//In ra tong phan tu trung lap trong mang:
#include <stdio.h>

int x[100], y[100], z[100];
int m,i;
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
//In phan tu trung lap
void inPtTrungLap(int *x, int m){
	int i, j;
	int temp=1, ctr = 0;
	//copy mang x
	for(i = 0; i<m ; i++){
		y[i] = x[i];
		z[i] = 0;
	}
	//danh dau phan tu trung lap
	for (i=0; i<m; i++){
		for(j=0; j<m; j++){
			if (x[i] == y[j]){
				z[j] = temp;
				temp ++;
			}
		}
		temp =1;
	}
	//in ra
	for(i =0; i<m; i++){
		if (z[i] == 2){
			ctr++;
		}
	}
	
	printf("\nTong so phan tu trung lap duoc tìm thay trong mang là: %d \n", ctr);
	
}
int main(){
    do{
    	printf("Nhap vao m: ");
    	scanf("%d", &m);
	}while(m<=0);
	
	nhapMang(x, m);
	printf("Mang: \n");
	xuatMang(x, m);
	
	inPtTrungLap(x, m);
}
