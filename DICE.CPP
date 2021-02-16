			/* Dice Simulator  */
	    /*---------Rishikesh Verma----------*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int num;        //variable declaration
clrscr();
  randomize();
     num=random(6);  //generate random no. from 1 to 6
     num+=1;
     cout<<num;      //output
return 0;
getch();
}
 