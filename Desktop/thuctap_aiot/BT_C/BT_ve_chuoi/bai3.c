//Bai 3
//tach cac ky tu rieng le khoi mot chuoi

#include <stdio.h>

void main(){
	char str[100];
	int i = 0;
	
	printf("Nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	printf("\nCac ky tu cua chuoi: ");
	while(str[i] != '\n'){
		printf(" %c ", str[i]);
		i++;
	}
}
