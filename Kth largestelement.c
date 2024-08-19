#include <stdio.h>
    void main()
    {
 
        int i, j, a, n, arr[100],k=0,temp[100];
        printf("Enter the number of elements: \n");
        scanf("%d", &n);
 
        printf("Enter the numbers: \n");
        for (i = 0; i < n; i++)
           {
            scanf("%d", &arr[i]);
           }
 
        for (i = 0; i < n; i++) 
        {
 
            for (j = i + 1; j < n; j++)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    temp[i] =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp[i];
                    k++;
 
                }
 
            }
 
        }
           
        for(i=1;i<k;i++)
        a=arr[0];
        {
            if(arr[i]>a)
            {
                a=arr[i];
            }
        }
        printf("\nKth largest element:%d",a);
    }