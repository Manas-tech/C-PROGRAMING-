#include <stdio.h>
 
int main()
{
	int arr[10], i, j, Size, Count = 0;
	
	printf("Enter the size of array\n");
	scanf("%d", &Size);
	
	printf("Enter The Values\n");
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("Duplicate Elements in this Array is %d ", Count);
	     
 	return 0;
}