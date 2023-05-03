#include <stdio.h>
#include <graphics.h>
#include<conio.h>
main() 
{
    // initialize graphics
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC++\DISK\TURBOC#\BIN");

    // set color and thickness
    setcolor(YELLOW);
    setlinestyle(SOLID_LINE, 1, THICK_WIDTH);

    // draw a circle
    circle(250, 250, 150);

    // set fill color and fill the circle
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(250, 250, YELLOW);

    // set text properties
    settextstyle(BOLD_FONT, HORIZ_DIR, 4);

    // write text inside the circle
    outtextxy(175, 225, "CIRCULAR LOGO");

    // pause to display the image
    getch();

    // close graphics window
    closegraph();


}

