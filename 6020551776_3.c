#include<stdio.h>
void main()
{
    int n=3;
    int a[n],i,j;
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);

    char b[n];
    for(i=0;i<n;i++)
        scanf("%c",&b[i]);



    int max=a[0],min=a[0],mid=a[0];
    for(i=0 ; i<n ; i++)
    {
        if(max<=a[i])
            max=a[i];
        else if(min>=a[i])
            min=a[i];
    }
    for(i=0 ; i<n ; i++)
    {
        if(a[i]!=max && a[i]!=min)
            mid=a[i];
    }

   int answer[n];
    for(i=0 ; i<n ; i++)
    {
        if(b[i]=='A')
        {
            answer[i]=min;
        }
        else if(b[i]=='B')
        {
            answer[i]=mid;
        }
        else if(b[i]=='C')
        {
            answer[i]=max;
        }
    }
    printf("%d %d %d",answer[0],answer[1],answer[2]);



}
