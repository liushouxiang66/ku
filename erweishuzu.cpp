#include<stdio.h> 
#include<string.h>

void g(int s[][4])
{
	int max,jmax,i,j;                                                     	
	for (i=0;i<3;i++)
	{jmax=0;max=s[i][0];
	  for(j=0;j<4;j++)
	  {
	  	 
	  	if(s[i][j]>max) {max=s[i][j];jmax=j;}
	  }
	   s[i][jmax]=s[i][0];s[i][0]=max;  
	}
}

void output(int s[3][4])
{
	int i,j;
	for (i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
	     if(j==3) printf("%d\n",s[i][j]);
		 else printf("%d ",s[i][j]);		 
		}		
	}	
}


int main()
{
	int s[3][4];
	int i,j;
	for (i=0;i<3;i++)
	{
		for( j=0;j<4;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	g(s);
    output(s);
}

