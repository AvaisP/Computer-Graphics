#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int gd = DETECT, gm,i;
	float t,px,py;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	//printf("Enter control points\n");
	//clrscr();
	for(t = 0; t <= 1; t += 0.001)
	{
		px = pow((1-t),3)*200 + 3*pow((1-t),2)*t*300 + 3*(1-t)*t*t*300 + t*t*t*200;
		py = pow((1-t),3)*100 + 3*pow((1-t),2)*t*250 + 3*(1-t)*t*t*400 + t*t*t*500;
		putpixel(px,py,WHITE);
		//printf("%f %f",px,py);
	}
	for(t = 0; t <= 1; t += 0.001)
	{
		px = pow((1-t),3)*400 + 3*pow((1-t),2)*t*300 + 3*(1-t)*t*t*300 + t*t*t*400;
		py = pow((1-t),3)*100 + 3*pow((1-t),2)*t*250 + 3*(1-t)*t*t*400 + t*t*t*500;
		putpixel(px,py,WHITE);
	}
	for(t = 0; t <= 1; t += 0.001)
	{
		px = pow((1-t),3)*50 + 3*pow((1-t),2)*t*170 + 3*(1-t)*t*t*240 + t*t*t*300;
		py = pow((1-t),3)*75 + 3*pow((1-t),2)*t*40 + 3*(1-t)*t*t*75 + t*t*t*100;
		putpixel(px,py,GREEN);
		//printf("%f %f",px,py);
	}
	for(t = 0; t <= 1; t += 0.001)
	{
		px = pow((1-t),3)*300 + 3*pow((1-t),2)*t*360 + 3*(1-t)*t*t*430 + t*t*t*550;
		py = pow((1-t),3)*100 + 3*pow((1-t),2)*t*75 + 3*(1-t)*t*t*40 + t*t*t*75;
		putpixel(px,py,GREEN);
		//printf("%f %f",px,py);
	}
	//
	//circle(320-i,200,3);
	getch();
	closegraph();
}