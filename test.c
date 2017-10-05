#include <stdio.h>

int scanfint()
{
    char input[10];
    scanf("%s",&input);
    int i =0,ii,failed=0,value=0;
    for (i=0;i<10;i++)
    {
        if(input[i] == 0)
        {
           ii=i;
           break;         
                    }
        }
    for(i=0;i<ii;i++)
    {
          if((input[i]>57)||(input[i]<48))
          {
                failed=1;  
                printf("%d\n",input[i]);                     
                                       }           
    }
    if(failed)
              return(-1);
    for(i=0;i<ii;i++){
           value = value * 10 + ( input[i] - '0' );           
                      
                      }
    return(value);
}


int main(void){
    
    int value = scanfint();
    printf("%d",value);
    getch();
    
}
