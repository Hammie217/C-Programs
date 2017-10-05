#include<stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
     SMALL_RECT windowSize = {0 , 0 , 25 , 1}; //change the values
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
    int randomnumber,randomnumber2;
    char rnd1, rnd2;
    char name[10];
    printf("Write your name \n");
    scanf("%s",&name);
    char j[9];  
    printf("%s is a fuck smuggler\n",name);
    while(1)
    {
    randomnumber = rand() % 15;
    randomnumber2 = rand() % 15;

     
    sprintf(j,"COLOR %d%d",rnd1,rnd2);
    system(j);
    sleep(10);
}
    
    
    
}
