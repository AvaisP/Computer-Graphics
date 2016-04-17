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
	/*for(i = 0; i <= 3; i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}*/
	for(i = 0; i <= 300; i+= 10)
	{
	cleardevice();
	for(t = 0; t <= 1; t += 0.001)
	{
		px = pow((1-t),3)*300 + 3*pow((1-t),2)*t*350 + 3*(1-t)*t*t*450 + t*t*t*550;
		py = pow((1-t),3)*200 + 3*pow((1-t),2)*t*100 + 3*(1-t)*t*t*200 + t*t*t*250;
		putpixel(px-i,py,WHITE);
		//printf("%f %f",px,py);
	}
	//
	circle(320-i,200,3);
	for(t = 0; t <= 1; t += 0.001)
	{
		px = pow((1-t),3)*300 + 3*pow((1-t),2)*t*350 + 3*(1-t)*t*t*450 + t*t*t*550;
		py = pow((1-t),3)*200 + 3*pow((1-t),2)*t*300 + 3*(1-t)*t*t*200 + t*t*t*150;
		putpixel(px-i,py,WHITE);
	}
	delay(10);
	}
	getch();
	closegraph();
}