#include <stdio.h>

int main()
{
    int arr[100], tanso[100];
    int n, i, j, count;
		

       printf("Nhap vao n: ");
       scanf("%d",&n);
   
       printf("Nhap vao %d phan tu cua mang :\n",n);
       for(i=0;i<n;i++)
        {
            printf("phan tu arr[%d]: ",i);
	      	scanf("%d",&arr[i]);
	      	tanso[i] = -1;
	    }
	    
	    
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                tanso[j] = 0;
            }
        }

        if(tanso[i]!=0)
        {
            tanso[i] = count;
        }
    }
    printf("\nTan suat xuat hien cua cac phan tu cua mang: \n");
    for(i=0; i<n; i++)
    {
        if(tanso[i]!=0)
        {
            printf("So %d xuat hien %d lan\n", arr[i], tanso[i]);
        }
    }
}
