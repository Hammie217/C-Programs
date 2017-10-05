#include <stdio.h>
#include <stdio.h>
#include <string.h>
int i=0,ii=0;
int xcoord=0, ycoord=0;
char naughts[3][3];
int gameover=0;
char turn = 'x';

void draw()
{
     printf(" %c | %c | %c \n",naughts[0][2],naughts[1][2],naughts[2][2] );
     printf("-----------\n");
     printf(" %c | %c | %c \n",naughts[0][1],naughts[1][1],naughts[2][1] );
     printf("-----------\n");
     printf(" %c | %c | %c \n",naughts[0][0],naughts[1][0],naughts[2][0] ); 
}

void checkWin()
{
     if(((naughts[0][0] == 'x' && naughts[0][1]=='x')&& naughts[0][2]=='x') ||((naughts[1][0] == 'x' && naughts[1][1]=='x')&& naughts[1][2]=='x') ||((naughts[2][0] == 'x' && naughts[2][1]=='x')&& naughts[2][2]=='x') ||((naughts[0][0] == 'x' && naughts[1][0]=='x')&& naughts[2][0]=='x') ||((naughts[0][1] == 'x' && naughts[1][1]=='x')&& naughts[2][1]=='x') ||((naughts[0][2] == 'x' && naughts[1][2]=='x')&& naughts[2][2]=='x') ||((naughts[0][0] == 'x' && naughts[1][1]=='x')&& naughts[2][2]=='x') ||((naughts[0][2] == 'x' && naughts[0][1]=='x')&& naughts[2][0]=='x') )
     {
     	if(turn =='o')
	     {
	     turn = 'x';        
	     }
	     else if(turn == 'x')
	     {
	         turn = 'o';
	     }
      printf("Game is over %c wins",turn);
      gameover =1;
     }          
}

void fillArray()
{
   for(i=0;i<3;i++)
    {
     for(ii=0;i<3;i++)
      {
       naughts[i][ii]=' ';
      } 
    }  
}

void notinside()
{
	coords();
	xcoord = x();
	ycoord = y();
     if((naughts[xcoord-1][ycoord-1]=='x')||(naughts[xcoord-1][ycoord-1]=='o'))
     {
     	printf("already taken \n");
     	notinside();
	 }
}


void playerTurn()
{
	notinside();
     naughts[xcoord-1][ycoord-1] = turn;
     if(turn =='o')
     {
     turn = 'x';        
     }
     else if(turn == 'x')
     {
         turn = 'o';
     }
}




int coords()
{
	printf("it is %c's turn \n",turn);
}

int x()
{
	int x = 0;
	printf("Where do you want to go? x co-ordinate (use coordinates)\n");
    scanf("%d",&x); 
    return(x);
}

int y()
{
	int x = 0;
	printf("Where do you want to go? y co-ordinate (use coordinates)\n");
    scanf("%d",&x); 
    return(x);
}





int main (void)
{
    fillArray();
    while(gameover==0)
    {
     
     draw();
     checkWin();
     if(gameover==1)
     {
     	break;
	 }
     playerTurn();
     system("cls");
    }
     scanf("%d",i);                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
 return(0);
}


