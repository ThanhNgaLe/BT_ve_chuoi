#include <stdio.h>

int x[100][100], y[100][100], c[100][100];
int m, n, i, j;

void nhapmt(int x[100][100], int m, int n){		
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			printf("x[%d][%d]= ", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmt(int x[100][100], int m, int n){
	for(i=0; i<m; i++){
		for (j=0; j<n; j++){
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
}
void congmt(int x[100][100],int y[100][100]){
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=x[i][j]+y[i][j];
		}
	}
            
    for(i=0; i<m; i++){
		for (j=0; j<n; j++){
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}    
}
int main(){
	do{
		printf("Nhap vao m va n: ");
		scanf("%d%d", &m, &n);
	}while(m<=0 || n<=0);
	printf("Nhap vao ma tran x: \n");
	nhapmt(x, m, n);
	printf("Nhap vao ma tran y: \n");
	nhapmt(y, m, n);
	printf("Ma tran x: \n");
	xuatmt(x,m,n);
	printf("Ma tran y: \n");
	xuatmt(y,m,n);
	printf("Tong 2 ma tran c: \n");
	congmt(x,y);
}
