#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	int gd = DETECT, gm;
	int x , y, d, r, c ,cy;
	initgraph(&gd,&gm,"");
	printf("Enter radius");
	scanf("%d", &r);
	d = 3 - 2*r;
	x = 0;
	y = r;
	printf("Enter cx,cy");
	scanf("%d %d", &c, &cy);
	do
	{
		putpixel(c+x,cy+y,WHITE);
		putpixel(c+y,cy+x,WHITE);
		putpixel(c-x,cy+y,WHITE);
		putpixel(c-x,cy-y,WHITE);
		putpixel(c+x,cy-y,WHITE);
		putpixel(c+y,cy-x,WHITE);
		putpixel(c-y,cy+x,WHITE);
		putpixel(c-y,cy-x,WHITE);
		if(d <= 0)
		{
			d = d + 4*x +6;
		}
		else
		{
			d += 4*(x-y) + 10;
			y -= 1;
		}
		x += 1;
		delay(1000);

	}while(x <= y);
	getch();
	closegraph();
}

