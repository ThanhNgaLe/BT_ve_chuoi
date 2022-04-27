#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], arr3[100];
    int i, j=0, k=0, n;

       printf("Nhap vao so phan tu n :");
       scanf("%d",&n);
   
       printf("Nhap vao %d phan tu cua mang: ",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
	    
	for(i=0;i<n;i++)
	    {
			if (arr1[i]%2 == 0)
			{
			   arr2[j] = arr1[i];
			   j++;
			}
			else
			{
			   arr3[k] = arr1[i];
			   k++;
			}
	    }
	    
	printf("\nCac phan tu chan: ");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr2[i]);
    }

    printf("\nCac phan tu le: ");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr3[i]);
    }

}
