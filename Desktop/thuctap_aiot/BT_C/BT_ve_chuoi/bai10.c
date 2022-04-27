//Bai 10
// Tim ky tu xuat hien nhieu nhat trong chuoi

#include <stdio.h>
#include <string.h>

void main(){
	char str[100];
	int asciiArray[255];
	int i=0, max;
	int ascii;
	
	printf("Nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	
	//dat tan so cac ky tu = 0
	for(i=0; i<255; i++){
		asciiArray[i] = 0;
	}
	i=0;
	while(str[i] != '\0'){
		ascii = (int) str[i];
		asciiArray[ascii] += 1;
		i++;
	}
	
	for(i=0; i<255; i++){
		if(i != 32){
			if(asciiArray[i]>asciiArray[max]){
				max = i;
			}
		}
	}
	printf("Ky tu xuat hien nhie nhat '%c': %d lan", max, asciiArray[max]);
}
