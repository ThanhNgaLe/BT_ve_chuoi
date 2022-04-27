#include<stdio.h>

void nhap(int a[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("x[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}

void xuat(int a[50][50], int m, int n) { 
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void tich(int a[50][50], int b[50][50], int c[50][50], int m, int n, int k) {
	int i, j, l;
	for(i = 0; i < m; i++) {
		for(j = 0; j < k; j++) {
			for(l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
}

int main() {
	int a[50][50], b[50][50], c[50][50];
	int m, n;
	
	printf("\nNhap so hang, so cot cua ma tran: ");
	scanf("%d%d", &m, &n); 
	
	printf("Nhap Ma Tran A: \n");
	nhap(a, m, n);
	printf("Nhap Ma Tran B:\n ");
	nhap(b, m, n);
	
	tich(a, b, c, m, n, n);
	printf("Ma tran A: \n");
	xuat(a, m, n);
	printf("Ma tran B: \n");
	xuat(b, m, n);
	printf("Ma tran C: \n");
	xuat(c, m, n);

}
