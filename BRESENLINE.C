#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int sign(int x,int y)
{
	if(x < y)
		return -1;
	else if( x > y)
		return 1;
	return 0;
}


void main()
{
	int gd = DETECT, gm, i;
	float x1,x2,y1,y2,dx,dy,x,y,e, temp;
	int x0 = 320, y0 =240, s1, s2, ex = 0;
	initgraph(&gd,&gm,"");
	printf("Enter co-ord");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	x1 += x0;
	x2 += x0;
	y1 = y0 - y1;
	y2 = y0 - y2;
	//printf("%f %f %f %f",x1,y1,x2,y2);
	s1 = sign(x2,x1);
	s2 = sign(y2,y1);
	dx = abs(x2-x1);
	dy = abs(y2-y1);
	if (dy > dx)
	{
		ex = 1;
		temp = dx;
		dx = dy;
		dy = dx;
	}
	e = 2*dy - dx;
	i = 1;
	line(x0,0,x0,y0*2);
	line(0,y0,x0*2,y0);
	//line(x1,y1,x2,y2);
       //	putpixel(x1,y1,GREEN);
	putpixel(x2,y2,GREEN);
	x = x1;
	y = y1;
	putpixel(x,y,YELLOW);
	do
	{
		while(e>=0)
		{
			if(ex == 0)
			y += s2;
			else
			x += s1;
			e -= 2*dx;
		}
		if (ex == 0)
		x += s1;
		else
		y += s2;
		e += 2*dy;
		putpixel(x,y,RED);
		i += 1;
	}while(i <= dx);
	getch();
	closegraph();
}
