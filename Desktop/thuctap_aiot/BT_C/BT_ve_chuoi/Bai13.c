//Bai 13
// Trich xuat 1 chuoi con tu 1 chuoi da cho

#include <stdio.h>
#include <string.h>

void main(){
	char str[1000], str_con[100];
	int len, vitri, i=0;
	
	printf("Nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	printf("Nhap vao vi tri bat dau: ");
	scanf("%d", &vitri);
	printf("Nhap vao do dai chuoi con: ");
	scanf("%d", &len);
	
	while(i<len){
		str_con[i] = str[vitri + i - 1];
		i++;
	}
	printf("Chuoi con can trich xuat la: %s", str_con);
}
