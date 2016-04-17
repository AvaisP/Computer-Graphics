#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

/*void bfill(int x, int y, int f, int b)
{
	if(getpixel(x,y) != f && getpixel(x,y) != b)
	{
		putpixel(x,y,f);
		bfill(x+1,y,f,b);
		bfill(x,y+1,f,b);
		bfill(x-1,y,f,b);
		bfill(x,y-1,f,b);
	}
} */

void main()
{
	int x[4];
	int y[4];
	int gd = DETECT, gm,i;
	float t,px1,py1,px2,py2;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	//printf("Enter control points\n");
	/*for(i = 0; i <= 3; i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}*/
	for(t = 0; t <= 1; t += 0.001)
	{
		//cleardevice();
		px1 = pow((1-t),3)*300 + 3*pow((1-t),2)*t*150 + 3*(1-t)*t*t*250 + t*t*t*400;
		py1= pow((1-t),3)*200 + 3*pow((1-t),2)*t*275 + 3*(1-t)*t*t*350 + t*t*t*350;
		px2 = pow((1-t),3)*300 + 3*pow((1-t),2)*t*250 + 3*(1-t)*t*t*350 + t*t*t*400;
		py2 = pow((1-t),3)*200 + 3*pow((1-t),2)*t*275 + 3*(1-t)*t*t*350 + t*t*t*350;
		putpixel(px1,py1,WHITE);
		putpixel(px2,py2,WHITE);
		delay(1);
	}
	//bfill(250,300,RED,WHITE);
	getch();
	closegraph();
}