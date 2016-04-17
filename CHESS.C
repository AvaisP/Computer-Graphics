#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void bfill(int x, int y, int f, int b)
{
	if(getpixel(x,y) != f && getpixel(x,y) != b)
	{
		putpixel(x,y,f);
		bfill(x+1,y,f,b);
		bfill(x,y+1,f,b);
		bfill(x-1,y,f,b);
		bfill(x,y-1,f,b);
	}
}

int sign(int x,int y)
{
	if (x > y)
		return 1;
	else if(x < y)
		return -1;
	return 0;
}

draw_line(int x1, int y1, int x2, int y2)
{
	int dx,dy,ex=0,d,s1, s2, temp, x,y, i;
	x = x1;
	y = y1;
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
	d = 2*dy - dx;
	i = 1;
	do
	{
		while(d >= 0)
		{
			if(ex == 1)
			x = x+s1;
			else
			y=y+s2;
			d = d - 2*dx;
		}
		if (ex==1)
		y = y+s2;
		else
		x += s1;
		d += 2*dy;
		putpixel(x,y,WHITE);
		i += 1;
	}while(i<=dx+1);

}

void main()
{
	int gd = DETECT, gm, i, j;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(i = 30; i < 110; i+=10)
	{
		for(j = 30; j < 110; j+= 10)
		{
			draw_line(j,i,j+10,i);
			draw_line(j,i,j,i+10);
			draw_line(j+10,i+10,j+10,i);
			draw_line(j+10,i+10,j,i+10);
			//printf("J %d",j);
			if (((i+j-30)/10)%2 == 0)
				bfill(j+5,i+5,RED,WHITE);
			delay(10);
		}
		//printf("\n I %d",i);
	}
	getch();
	closegraph();
}