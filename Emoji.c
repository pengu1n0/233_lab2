#include<stdio.h>
int main()
{
    int x,y;
   char q;
   scanf("%c",&q);
   scanf("%d",&x);
   y=abs((q-64)-x);
  
    if(x%2==0)
    {
        if(y<74)
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
        else if(y>73&&y<85)
        {
             if(y%5!=0)
            {
            printf("{*v*}");
            }
             else
            {
              printf("\\{*v*}/");
            }
        }
        else if(y>84)
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
    else if (x%2!=0)
    {
        if(y<10)
        {
        if(y%5!=0)
            {
            printf("(^_^) ");
            }
             else
            {
              printf("\\(^_^)/");
            }
        }
        else if(y>73&&y<85)
        {
            if(y%5!=0)
            {
            printf("(*o*)");
            }
            else
            {
              printf("\\(*o*)/");
            }
        }
        else if(y>84)
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
    }
}
