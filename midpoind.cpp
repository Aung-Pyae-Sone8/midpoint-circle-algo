#include<iostream>
#include<math.h>
#include "graphics.h"
using namespace std;

int main() {
    int cx,cy,r,d,x,y;
    cout<<"Enter the center of circle : "<<endl;
    cin>>cx>>cy;
    cout<<"Enter the radius of cirdle : "<<endl;
    cin>>r;
    initwindow(800,600," graphic program");
    d=3-2*r;
    x=0;
    y=r;
    while (x<=y)
    {
        putpixel(x+cx,y+cy,RED);
        putpixel(x+cx,-y+cy,RED);
        putpixel(-x+cx,-y+cy,RED);
        putpixel(-x+cx,y+cy,RED);
        putpixel(y+cx,x+cy,RED);
        putpixel(y+cx,-x+cy,RED);
        putpixel(-y+cx,-x+cy,RED);
        putpixel(-y+cx,x+cy,RED);
        if(d<=0){
            x=x+1;
            d=d+4*x+6;
        }
        else{
            x=x+1;
            y=y-1;
            d=d+4*(x-y)+10;
        }
    }
    getch();
    closegraph();
}