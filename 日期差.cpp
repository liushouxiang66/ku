#include<stdio.h>

int niancha(int a,int b)
{
	int m,n,count,i,min,max;
	count=0;
	m=a/10000;
	n=b/10000;
	min=m;
	if(m>n) min=n;
	max=n;
	if(n<m) max=m;
	i=min;
	for(i=min;i<max;i++)
	{
	  if (i%400==0) count+=366;
	  else if(i%4==0 && (i%100)!=0)  count+=366;
	  else count+=365;
	  
	}
	return count;
	
}

int yuecha(int a, int b)
{
	int m,n,count,i,min,max,nian,t;
	if(a<=b) nian=b/10000;
	if(a>b) nian=a/10000;
	m=a%10000/100;
	n=b%10000/100;
	count=0;
	min=m;
	if(m>=n) min=n;
	max=n;
	if(n<m) max=m;
	i=min;
	if(nian%400==0 || (nian%4==0 && (nian%100)!=0)) t=1;
	else t=0;
	for(i=min;i<max;i++)
	{
		if(i==1) count+=31;
		if(i==3) count+=31;
		if(i==4) count+=30;
		if(i==5) count+=31;
		if(i==6) count+=30;
		if(i==7) count+=31;
		if(i==9) count+=30;
		if(i==10) count+=31;
		if(i==11) count+=30;
		if(i==12) count+=31;
		if(i==2 && t==1) count+=29;
		if(i==2 && t==0) count+=28;
		
	}
	return count;
	
	
}

int main()
{
	int a,b,count,m,n;
	scanf("%d %d",&a,&b);
	m=a%100;
	n=b%100;
	count=yuecha(a,b)+niancha(a,b)+n-m;
	printf("%d",count);
	if(count<0) count=-count;
	return 0;
}

