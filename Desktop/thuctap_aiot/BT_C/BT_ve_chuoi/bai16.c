//Bai 16
//tim so lan mot tu cho truoc 'the' xuat hien trong chuoi da cho

#include <stdio.h>
#include <string.h>

void main(){
	char str[1000] = "The string where the word the present more than once the";
	int i, len,count=0 ;
    int t,h,e,spc;
	
	//printf("Nhap vao mot chuoi: ");
	//fgets(str, sizeof(str), stdin);

	printf("Chuoi da cho: %s\n\n", str);
	len = strlen(str);
	
	for(i=0;i<=len-3;i++)
	{
		t=(str[i]=='t'||str[i]=='T');
		h=(str[i+1]=='h'||str[i+1]=='H');
		e=(str[i+2]=='e'||str[i+2]=='E');
		spc=(str[i+3]==' '||str[i+3]=='\0');
		if ((t&&h&&e&&spc)==1)
		   count++;
	}
	printf("So lan xuat hien cua tu 'the' la: %d", count);
}
