#include<stdio.h>
void main()
{
	int n=3;
	int a[n],i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	char b[n];
	for(i=0;i<n;i++)
        scanf("%c",&b[i]);
        
    int sum;
    for(j=0 ; j<=n ; j++)
    {
        for(i=0 ; i<n ; i++)
        {
            if(a[i]>a[i+1])
            {
                sum=a[i];
                a[i]=a[i+1];
                a[i+1]=sum;
            }
        }

    }
    
    int Answer[n];
    for(i=0 ; i<n ; i++)
    {
        if(b[i]=='A')
        {
            Answer[i]=a[0];
        }
        else if(b[i]=='B')
        {
            Answer[i]=a[1];
        }
        else if(b[i]=='C')
        {
            Answer[i]=a[2];
        }
    }
    printf("%d %d %d",Answer[0],Answer[1],Answer[2]);
}
