#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int sign(int x)
{
	if(x < 0)
		return -1;
	else if(x > 0)
		return 1;
	return 0;
}

void main()
{
	int gd=DETECT,gm;
	float x1, y1, x2, y2, dx, dy, len, x, y;
	int i, x0, y0;
	x0 = 320;
	y0 = 240;
	initgraph(&gd,&gm,"");
	printf("Enter co-ordinates");
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	dx = x2 - x1;
	y1 = y0 - y1;
	y2 = y0 - y2;
	dy = y2 - y1;
	x1 += x0;
	x2 += x0;
	printf("%f %f %f %f",x1,y1,x2,y2);
	len = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
	dx = (x2-x1)/len;
	dy = (y2-y1)/len;
	x = x1 + 0.5*sign(dx);
	y = y1 + 0.5*sign(dy);
	//cleardevice();
	line(x0,0,x0,y0*2);
	line(0,y0,x0*2,y0);
	putpixel(x,y,RED);
	for(i = 1; i <= len; i+=1)
	{
		x = x + dx;
		y = y + dy;
		putpixel(x,y,(i+1)%16);
	}
	getch();
	closegraph();
}