#include<stdio.h>
void main()
{
void readarr(int[],int);
void disparr(int[],int);
void merge(int[],int[],int[],int,int);
int s1[50],s2[50],s3[100],n,m;
printf("Enter no of elements in 1st array[1-50]:");
scanf("%d",&n);
printf("Enter elements in 1st arrray:");
readarr(s1,n);
printf("No of elements in 2nd array:");
scanf("%d",&m);
printf("Enter elements in 2nd arrray:");
readarr(s2,m);
merge(s1,s2,s3,n,m);
printf("Merged array:\n");
disparr(s3,n+m);
printf("\n");
}							//function for reading an array
							void readarr(int s[],int n)
							{
							int i;
							printf("Enter non decreasing order:");
							for(i=0;i<n;++i)
							scanf("%d",&s[i]);
							return;
							}
				//function for displaying the array
				void disparr(int s[],int n)
				{
				int i;
				for(i=0;i<n;++i)
				printf("%d ",s[i]);
				return ;
				}
			//function for merging
			void merge(int s1[],int s2[],int s3[],int n,int m)
			{
			int i=0,j=0,k=0;
			//compare and copy element
			while(i<n && j<m)
{
		if(s1[i]<s2[j])
		{
		s3[k]=s1[i];
		i=i+1;
		k=k+1;
		}
else
		{
		s3[k]=s2[j];
		j=j+1;
		k=k+1;
		}
}
//copy remaining elements from s1
while(i<n)
{
s3[k]=s1[i];
k=k+1;
i=i+1;
}
//copy remaining elements from s2
while(j<m)
{
s3[k++]=s2[j++];
}
return;
}


