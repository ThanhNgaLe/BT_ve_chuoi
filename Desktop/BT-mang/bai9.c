#include <stdio.h>

void main()
{
    int arr[100];
    int i, max, min, n;

       printf("Nhap vao so phan tu n :");
       scanf("%d",&n);
   
       printf("Nhap vao %d phan tu cua mang: ",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr[i]);
	    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }

        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Phan tu lon nhat : %d\n", max);
    printf("Phan tu nho nhat : %d\n", min);
}
