//Bai 4
//in cac ky tu rieng le cua chuoi theo thu tu nguoc lai

#include <stdio.h>
#include <string.h>
void main(){
	char str[100];
	int i, l;
	
	printf("Nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	l = strlen(str);
	printf("\nCac ky tu cua chuoi theo thu tu nguoc lai: ");
	for(i=l; i>=0; i--){
		printf(" %c ", str[i]);
	}
}
