//Bai 14
// Kiem tra xem chuoi con da cho co trong chuoi da cho khong

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
  	
bool kiemtra(char *check, char *string)
{
	int i, j;
	
	int slen1 = strlen(string);
	int clen1 = strlen(check);
	
	int end = slen1 - clen1;
	
	for(i=0; i<end; i++)
	{
		bool check_found = true;
		for(j=0; j<clen1; j++)
		{
			if(check[j] != string[j+i])
			{
				check_found = false;
				break;
			}
		}
		if (check_found) return true;
	}
	return false;
}

int main(){
	/*
	char str[1000], kytu;
	int i, count = 0;
	printf("Nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	printf("Nhap vao chuoi con: ");
	fgets(str, sizeof(str), stdin);
	*/
	char s1[] = "This is my test string.";
  	char c1[] = "test";
  	
  	if (kiemtra(c1,s1))
    	printf("\n'%s' co ton tai trong chuoi\n", c1);
  	else
    	printf("\n'%s' khong ton tai trong chuoi\n", c1);
    
    return 0;
}
