#include<stdio.h>
main()
{
	int a[20],n,num,loc,i;
	printf("enter no. of elements\n");
	scanf("%d",&n);
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("new array\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
