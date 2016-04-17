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

void main()
{
	float x1,y1,x2,y2,x3,y3,xc,yc;
	int gd = DETECT,gm, r;
	int i,j,k;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	//printf("Enter co-rd and radius");
	//scanf("%f %f %d",&xc,&yc,&r);
	circle(xc,yc,r);
	xc = 320;
	yc = 240;
	//circle(x,y,10);
	//delay(10)
	// for more planets create array x[],y[],radius[]
	j = 0;
	k=0;
	for(i = 0; i<=360 ; i+=5, j = (j+15)%360, k = (k+30)%360)
	{
		cleardevice();
		x1 =xc + 50*cos(k*3.142/180);
		y1 =yc + 50*sin(k*3.142/180);
		x2 =xc + 75*cos(j*3.142/180);
		y2 =yc + 75*sin(j*3.142/180);
		x3 =xc + 100*cos(i*3.142/180);
		y3 =yc + 100*sin(i*3.142/180);
		circle(xc,yc,50);//Orbit of planet 1
		circle(xc,yc,75);//orbit of planet 2
		circle(xc,yc,100);
		circle(xc,yc,30); //SUN
		bfill(xc,yc,YELLOW,WHITE);
		circle(x1,y1,10);
		circle(x2,y2,10);
		circle(x3,y3,10);
		delay(100);
	}
	getch();
	closegraph();
}

