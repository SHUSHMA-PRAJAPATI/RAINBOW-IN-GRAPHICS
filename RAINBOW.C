#include<stdio.h>
#include<graphics.h>
void main()
{
	int i,x,y,gd=DETECT,gm;
	initgraph(&gd,&gm,"");

	x=getmaxx()/2;
	y=getmaxx()/2;
	for(i=10;i<220;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
	getch();
}