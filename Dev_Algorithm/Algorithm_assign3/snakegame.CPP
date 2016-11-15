#include<stdio.h>
#include<conio.h>
void main()
{
int ar[31]={0,0,0,19,0,3,0,0,0,0,0,15,0,0,0,0,0,-13,0,-12,9,-12,0,0,0,0,0,-26,0,0,0};
int pos=1;
int dice_outcome,count=0,large_ladder,small_snake,a;
int ladders=0,snakes=0,n=0,j=0,i=0,flag=0;
clrscr();
printf("Enter 3 dice outcomes so that you reach to last cell:\n");
while(pos<30)
 {
    count++;
    printf("Enter %d dice outcome:",count);
    scanf("%d",&dice_outcome);
    pos=pos+dice_outcome;
    printf("pebble position after last dice outcome:%d\n",pos);
    if(ar[pos]>0)
      {
	pos=pos+ar[pos];
      }
 }
 printf("Your current position is:%d\n",pos);
 printf("Congrats you won the game in 3 dice outcomes\n");

 for(i=1;i<31;i++)
    {
     if(ar[i]>0)
     ladders++;
     if(ar[i]<0)
     snakes++;
    }
    printf("The total number of ladders in the given board are:%d\n",ladders);
    printf("The totoal number of snakes in the given board are:%d\n",snakes);
    printf("Enter the initial position of pebble to find minimum no of dice throws without snakebite:");
    scanf("%d",&pos);
 while(pos<30)
 {
   n++;
   if(pos==3 || pos==5 || pos==11 || pos==20)
   pos=pos+ar[pos];
   large_ladder=0;
   for(i=pos;i<=(pos+5);i++)
     {
      if(ar[i]>large_ladder)
	 {
	   a=i-pos+1;
	   large_ladder=ar[i];
	 }
     }
     if(large_ladder>0)
	{
	  pos=pos+a-1;
	  pos=pos+large_ladder;
	}
	else
	pos=pos+6;
	while(ar[pos]<0)
	  {
	   --pos;
	  }
 }
 printf("Throws without snakebite:%d\n",n);
 pos=1;
 while(pos<30)
 {
  n++;
   for(j=0;j<6;j++)
    {
     if(ar[pos]>0)
       {
	 pos=pos+ar[pos];
	 break;
       }
     if(ar[pos]<0 && flag!=1)
       {
	 for(i=pos;i<(pos+5);i++)
	   {
	    if(ar[i]>small_snake && ar[i]!=0)
	      {
	       small_snake=ar[i];
	      }
	   }
	   pos=pos+small_snake;
	   flag=1;
	   break;
       }
       ++pos;
    }
 }
 printf("Minimum number of dice throws with one snakebite:%d\n",n);
 getch();
}
