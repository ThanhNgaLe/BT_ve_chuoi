
#include <stdio.h>

int x[100], y[100], z[100];
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

//in ra phan tu chiem da so
int inDaSo(int *x, int m){
	for(i=0; i<m; i++){
		int count;
		for(j=0; j<m; j++){
			if(x[i] == x[j])
			count++;
		}
		if(count >= m/2){
			return i;
		}
		return -1;	
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
	//in
	printf("\nPhan tu chiem da so: ");
	int poss = inDaSo(x, m);
	if (poss == -1){
		printf("Khong ton tai");
	}
	else{
		printf("%d", x[poss]);
	}
}

