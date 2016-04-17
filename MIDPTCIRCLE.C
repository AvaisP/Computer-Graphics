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
	d = 1.5 - r;
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
			d = d + 2*x +1;
		}
		else
		{
			d += 2*(x-y) + 1;
			y -= 1;
		}
		x += 1;
		//delay(1000);

	}while(x <= y);
	getch();
	closegraph();
}

