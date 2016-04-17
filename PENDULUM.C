#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int gd = DETECT, gm,i, j;
	float t,px,py;
	int xc,yc;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	xc = 275;
	yc = 200;
	line(250,200,350,200);
	for(j = 0; j<=30;j++)
	{
	for(i = 45; i<=135; i+=5)
	{
		cleardevice();
		line(250,200,350,200);
		px = xc +  30*cos(i*3.142/180);
		py = yc + 30*sin(i*3.142/180);
		line(px,py,xc,yc);
		circle(px,py,10);
		delay(10);
	}
	for(i = 135; i>=45; i-=5)
	{
		cleardevice();
		line(250,200,350,200);
		px = xc +  30*cos(i*3.142/180);
		py = yc + 30*sin(i*3.142/180);
		line(px,py,xc,yc);
		circle(px,py,10);
		delay(10);
	}
	}
	getch();
	closegraph();
}