#include<stdio.h>
int linear_search(int *arr,int size,int se)
{
	int i;
	for (i=0;i<size;i++)
	{
		if(arr[i]==se)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,i,arr[20],se,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	res=linear_search(arr,n,se);
	printf("%d",res);
}
