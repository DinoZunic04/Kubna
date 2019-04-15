#include <stdio.h>
double pow(int e)
{
	if(e==0)	return 1.0;
	int i,s=10;
	for(i=1;i<e;i++)	s*=10;
	return ((double)s);
}
void zaokruzeno(double d,int n)
{
	if(d==(double)(int)(d))	
	{
		printf("%d",(int)d);
		return;
	}
	int i;
	for(i=1;i<n;i++)
	{
		if((d/pow(i))==(double)(int)(d/pow(i)))
		{
			printf("%d.%d",(int)d, (int)((d-(double)(int)(d))*pow(i) ) );
			return;
		}
	}
	printf("%d.%d",(int)d, (int)((d-(double)(int)(d))*pow(n)) );
}
int main() {
	double a,b,c,d;
	printf("Unesite koeficijent a: ");
	scanf("%lf",&a);
	printf("Unesite koeficijent b: ");
	scanf("%lf",&b);
	printf("Unesite koeficijent c: ");
	scanf("%lf",&c);
	printf("Unesite slobodan clan: ");
	scanf("%lf",&d);
	if(a==0.0||a==-0.0)
	{
		a=b;b=c;c=d;
		if(a==0.0||a==-0.0)
		{
			a=b;b=c;
			if(a==0.0||a==-0.0)
			{
				a=b;
				if(a==0.0||a==-0.0)
					printf("x je neodredjeno.\n");
				else
					printf("x je nedefinisano.\n");
			}
			else
			{
				double x=-b/a;
				printf("x = ");zaokruzeno(x,3);
			}
		}
		else
		{
			
		}
	}
	else
	{
		
	}
	return 0;
}
