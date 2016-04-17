#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int gd = DETECT, gm,i, j;
	float t,px,py,xp,yp;
	int xc,yc;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	xc = 320;
	yc = 240;
	for(j = 0; j <= 360; j += 30)
	{
		px = xc + 38*cos(3.142*j/180);
		py = yc + 38*sin(3.142*j/180);
		for(i = 0; i<=360; i+= 5)
		{
			cleardevice();
			circle(320,240,50);
			outtextxy(315,200,"12");
			outtextxy(360,240,"3");
			outtextxy(320,280,"6");
			outtextxy(280,240,"9");
			xp = xc + 28*cos(3.142*i/180);
			yp = yc + 28*sin(3.142*i/180);
			line(xc,yc,xp,yp);
			line(xc,yc,px,py);
			delay(10);
		}
	}
	getch();
	closegraph();
}
