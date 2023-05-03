#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC++\BGI");
	for(int i=0;i<=450;i=i+10)
	{
		line(65+i,170,25+i,200);
		line(65+i,170,185+i,170);
		line(185+i,170,225+i,200);
		
		line(0+i,200,250+i,200);
		line(0+i,200,0+i,250);
		line(250+i,200,250+i,250);
		
		circle(50+i,250,15);
		circle(200+i,250,15);
		
		line(0+i,250,35+i,250);
		line(65+i,250,185+i,250);
		line(215+i,250,250+i,250);
		delay(100);
		cleardevice();
		}
		closegraph();
}
