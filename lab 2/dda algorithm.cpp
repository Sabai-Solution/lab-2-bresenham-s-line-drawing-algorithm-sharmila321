 #include<math.h>
#include<ctype.h>
//#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void draw(int x1,int y1,int x2, int y2);
main()
{
	int x1,y1,x2,y2;
//	int gdriver=DETECT ,gmode, gerror;
//	intgraph(&driver,gmode,"C\\tc\\bg:");
	printf("\n enter the points from starting point:");
	scanf("%d%d",&x1,&y1);
	printf("\n enter the points from ending points:");
	scanf("%d%d",&x2,&y2);
	draw(x1,y1,x2,y2);
	getch();	
}
void draw(int x1,int y1,int x2,	 int y2)
{
	float x,y,xinc,yinc,dx,dy;
	int k;
	int step;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	step=abs(dx);
	else 
	step=abs(dy);
	xinc=dx/step;
	yinc=dy/step;
	y=x1;
	y=y1;
	//putpixel(x,y,1);
	printf("x=%f y=%f",x,y);\
	
	for(k=1; k<=step; k++)
	{
		x=x+xinc;
		y=y+yinc;
		//putpixel(x,y,2);
		printf("x=%f y=%f",x,y);
		
	}
}
