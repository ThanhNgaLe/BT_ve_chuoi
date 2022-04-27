#include <stdio.h>

void main()
{
    int arr[100];
    int i, min, min2, n;

       printf("Nhap vao so phan tu n :");
       scanf("%d",&n);
   
       printf("Nhap vao %d phan tu cua mang: ",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr[i]);
	    }

    min = arr[0];
    min2 = arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    for (i=0; i<n; i++)
    {
    	if (min == arr[i])
    	{
			continue;
		}
		else if (min2 > arr[i])
		{
			min2 = arr[i];
		}
    }
    printf("Phan tu nho thu 2 : %d\n", min2);
}
