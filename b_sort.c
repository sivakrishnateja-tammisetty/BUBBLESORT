BUBBLE SORT: pushes the maximum elemnt at last by adjacent swaps.
	
 * no.of pass required = no.of elements -1
 * No.of loops required = 2( 1 for passes and another for comparsions)




Eg:
	#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
 int a[]={11,2,4,2,23,20};
 int n=sizeof(a)/sizeof(a[0]);
 bubble_sort(a,n);
 display(a, n);
 
    return 0;
}

o/p: 2 2 4 11 20 23




	

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
