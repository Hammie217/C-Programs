#include<stdio.h>

int main(void)
{
    float voltage,current,ans,applied;
    int count;
    printf("Calculates series resistance for purely led system\n");
    printf("Enter voltage drop over 1 LED(v)\n");
    scanf("%f",&voltage);
    printf("Enter voltage supplied (rms for ac)(V) \n");
    scanf("%f",&applied);
    printf("Enter current through circuit(A)\n");
    scanf("%f",&current);
    printf("Enter number of LED's\n");
    scanf("%d",&count);
    //v=ir
    //230 = current R + voltage*count
    //230 - (voltage*count)/Current = R
    ans = (applied -(voltage*(float)count))/current;
    printf("needed resistor = %f R\n",ans);
    ans = current*current*ans; 
    printf("Power dissipated in resistor %f W",ans);
    getch();
}
