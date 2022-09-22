#include<stdio.h>
main()
{
	int a,number,again=1;
	while(again==1)
	{
		printf("\nEnter the number whose factor you want:");
		scanf("%d",&number);
		printf("\nFactors of %d are ",number);
		for(a=1;a<=number;a++)
		{
			if(number%a==0)
			printf("%d ",a);
		}
		printf("\n\nIf you want to find the factors of another number press 1 otherwise press any digit:");
    	scanf("%d",&again);
	}
}
/* Output

Enter the number whose factor you want:23

Factors of 23 are 1 23

If you want to find the factors of another number press 1 otherwise press any digit:1

Enter the number whose factor you want:45

Factors of 45 are 1 3 5 9 15 45

If you want to find the factors of another number press 1 otherwise press any digit:0

*/

