#include<stdio.h>
#include<string.h>
void main()
{
   int n,i,j,k,j1,i1;
   char s[50][50],a[50],a1[50],z,z1;
   printf("enter no. of intermediate codes\n");
   scanf("%d",&n);
   printf("enter intermediate code\n");
   for(i=0;i<n;i++)
   {
	   scanf("%s",s[i]);
   }
   for(i=0;i<n;i++)
   {
	   k=0;
	   for(j=2;j<strlen(s[i]);j++)
	   {
		   a[k]=s[i][j];
		   k++;
	   }
	   for(j=i+1;j<n;j++)
	   {
			  k=0;
	          for(j1=2;j1<strlen(s[j]);j1++)
	          {
		         a1[k]=s[j][j1];
		         k++;
	          } 
			  if(strcmp(a,a1)==0)
			  {
				z=s[j][0];
				z1=s[i][0];
				strcpy(s[j],"xx");
				for(i1=j+1;i1<n;i1++)
				{
					for(j1=0;j1<strlen(s[i1]);j1++)
					{
						if(s[i1][j1]==z)
						{
							s[i1][j1]=z1;
						}
					}
				}
			  }
		   
	   }
   }
   printf("\ncode optimization");
   for(i=0;i<n;i++)
   {
	   if(strcmp(s[i],"xx")!=0)
	   {
		   printf("\n%s",s[i]);
	   }
   }
}
                  				