#include <stdio.h>

int lent_get(char *s);
int main()

{
   
  char *str = "25465465dczfzfdzfgfdxgfdgd48";

  int le ;

  le = lent_get(str);
  printf("length of %d", le);
 
    return(0);
}

int lent_get(char *s)
{  int len;
    len=0;
   while(1)
   {
     len++;
     if( *(s + len)  =='\0')
     {
         break;
     }
   }


    return(len);
}