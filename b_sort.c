BUBBLE SORT:
 * no.of pass required = no.of elements -1
 * No.of loops required = 2( 1 for passes and another for comparsions)

#include<stdio.h>
void swap(int *x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void b_sort(int *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
void display(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int arr[]={11,2,12,1,4,5};
	int SIZE=sizeof(arr)/sizeof(arr[0]);
	b_sort(arr,SIZE);
	display(arr,SIZE);
	return 0;
}
