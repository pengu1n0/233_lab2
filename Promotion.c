#include<stdio.h>
#include<math.h>
int main()
{
    float n,x,num1,num2,num3,ans;
    char a;
    scanf("%c",&a);
   scanf("%f",&n);
   if(a=='A')
   {
       if(n<201)
       {
           printf("199.00");
       }

       else if(n>201)
       {
           x=n-200;
           num1=(int)x*60;
           num2=(x-(int)x)*100;
           ans=((num1+num2)*3)/60;
           printf("%.2f",ans+199);
       }
   }
   else if(a=='B')
   {
       if(n<401)
       {
           printf("299.00");
       }
       else if(n>401)
       {
           x=n-400;
           num1=(int)x*60;
           num2=(x-(int)x)*100;
           ans=((num1+num2)*2)/60;
           printf("%.2f",ans+299);
       }
   }




}
