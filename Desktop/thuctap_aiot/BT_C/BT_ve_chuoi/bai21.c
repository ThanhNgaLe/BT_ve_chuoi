//Bai 21
// chuyen 1 chuoi thanh chu hoa

#include <stdio.h>
#include <string.h>

char str[100];
int i = 0;

void vietHoa(char str[]){
	for (i=0; i< strlen(str); i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]= str[i]-32;
		}
	}
}

int main(){

	printf("Nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	printf("-----------------------\n");
	vietHoa(str);
	printf("Chuyen thanh chuoi viet hoa: %s", str);
	
}
