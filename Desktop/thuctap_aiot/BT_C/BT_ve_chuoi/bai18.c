//Bai 18
//Tim tan so ky tu

#include <stdio.h>

void main(){
	char str[1000], kytu;
	int i, count = 0;
	
	printf("Nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Nhap vao ky tu can tin tan so: ");
	scanf("%c", &kytu);
	
	for(i=0;str[i]!='\0';++i)
   {
       if(kytu==str[i])
           ++count;
   }
    printf("Tan so xuat hien cua ky tu '%c' la: %d", kytu, count);	
}

