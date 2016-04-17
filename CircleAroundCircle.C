#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
	float x,y,xc,yc,i;
	int gd = DETECT,gm, r;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("Enter co-rd and radius");
	scanf("%f %f %d",&xc,&yc,&r);
	circle(xc,yc,r);
	y = yc;
	x = xc;
	//circle(x,y,10);
	//delay(10);
	for(i = 0; i<=360; i+=5)
	{
		cleardevice();
		x =xc + r*cos(i*3.142/180);
		y =yc + r*sin(i*3.142/180);
		circle(xc,yc,r);
		circle(x,y,10);
		delay(10);
	}
	getch();
	closegraph();
}

