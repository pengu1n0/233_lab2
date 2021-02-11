#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
   char q;
   scanf("%c",&q);
   scanf("%d",&x);
   y=abs((q-64)-x);
    if(q%2==0)
    {
        if(y<10)
        {
            if(y%5!=0)
            {
            printf("{@_@} ");
            }
            else
            {
              printf("\\{@_@} /");
            }
        }
        else if(y>9&&y<21)
        {
             if(y%5!=0)
            {
            printf("{*v*} ");
            }
             else
            {
              printf("\\{*v*} /");
            }
        }
        else if(y>20)
        {
             if(y%5!=0)
            {
            printf("{x_x}");
            }
             else
            {
              printf("\\{x_x}/");
            }
        }
    }
    else if (q%2!=0)
    {
        if(y<10)
        {
        if(y%5!=0)
            {
            printf("{x_x} ");
            }
             else
            {
              printf("\\{x_x}/");
            }
        }
        else if(y>9&&y<21)
        {
            if(y%5!=0)
            {
            printf("(T_T)");
            }
            else
            {
              printf("\\(T_T)/");
            }
        }
        else if(y>20)
        {
            if(y%5!=0)
            {
            printf("{@_@}");
            }
             else
            {
              printf("\\{@_@}/");
            }
        }
    }
}
