#include<stdio.h>
int linearsearch_rec(int *a,int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(a[i]==key)
	{
		return i;
	}
	linearsearch_rec(a,n,i+1,key);
}
int main()
{
	int n,i,key,res;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	res=linearsearch_rec(a,n,0,key);
	printf("%d",res);
}
