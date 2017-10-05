#include <stdio.h>

int scanfint()
{
    char input[10];
    scanf("%s",input);
    int i =0,actual;
    for(i=0;i<10;i++){
          if(input==0)
                      actual = i;                  
    }
    int failed =0;
    for (i=0;i<actual;i++)
    {
        if((input[i]>57)||(input[i]<48))
                                        failed =1;
        }
        
    int num2=0;
	for(i=0; i<actual; i++)
	{
	
		num2 = num2 * 10 + ( str2[i] - '0' );

	}
    
    if(failed)
    {
           return(-1);   
              }
              else
              {
                  return(num2);
                  }
}


int main(void){
    
    int value = scanfint();
    printf("%d",value);
    getch();
    
    
}
