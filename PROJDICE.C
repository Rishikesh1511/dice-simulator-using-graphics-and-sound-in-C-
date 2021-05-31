	      /* ----- Dice Simulator using graphics -----  */
		/* ----- Made by - Rishikesh verma -----  */



#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,i;
int font=7,direction=0,font_size=4,r;
char press,key,num[1],value[6]="624531";

//ghaphics path
initgraph(&gd,&gm,"C:\\TC\\BGI");

//heading
setcolor(WHITE);
settextstyle(font,direction,font_size);
outtextxy(100,10,"-----DICE SIMULATOR-----");

setcolor(2);
settextstyle(10,0,1);
outtextxy(120,180,"\"enter (space) to throw dice\"");
press=' ';

while(1)
{
  key=getch();
  if(press == key)
    {
    //beep sound on throwing dice
     sound(3000);
     delay(10);
     nosound();
    cleardevice();
       for(i=0;i<40;i++)
	{
	  delay(5);
	  //rectangle
	  rectangle(270+i,190+i,350-i,270-i);

	}

	setcolor(WHITE);
	settextstyle(font,direction,font_size);
	 outtextxy(100,10,"-----DICE SIMULATOR-----");

	setcolor(10);
	settextstyle(10,0,1);
	outtextxy(5,60,"\"press 0 (zero) for exit.\"");
	outtextxy(5,100,"\"enter (space) to throw dice again.\"\n");
       for(i=1;i<40;i++)
	{
	  delay(5);
	  setcolor(1);
	  //rectangle
	  rectangle(310-i,230-i,310+i,230+i);
	}
	//generate random no. between 1 to 6
	 r = random(6);
	 num[1]=value[r];

     setcolor(6);
     settextstyle(1,0,6);
     outtextxy(300,200,num);
    }
    else if(key=='0')
       {
	 break;
       }
    else
    {
      cleardevice();
      setcolor(WHITE);
      settextstyle(font,direction,font_size);
      outtextxy(100,10,"-----DICE SIMULATOR-----");

      setcolor(4);
      settextstyle(10,0,1);
      outtextxy(170,110,"\"you enter wrong key\"");
      setcolor(14);
      outtextxy(170,170,"\"Enter 0 (zero) for exit\"");
      setcolor(9);
      outtextxy(300,220,"(or)");
      setcolor(5);
      outtextxy(90,270,"\"Enter (space) to throw dice again\"");

    }
}
closegraph();
}