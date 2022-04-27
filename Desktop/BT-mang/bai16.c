#include <stdio.h>

void main()
{
    int arr[100];
    int i, max, max2, n;

       printf("Nhap vao so phan tu n :");
       scanf("%d",&n);
   
       printf("Nhap vao %d phan tu cua mang :",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr[i]);
	    }

    max = 0;
    max2 = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    for (i=0; i<n; i++)
    {
    	if (max == arr[i])
    	{
			continue;
		}
		else if (max2 < arr[i])
		{
			max2 = arr[i];
		}
    }
    printf("Phan tu lon thu 2 : %d\n", max2);
}
