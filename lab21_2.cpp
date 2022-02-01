#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
	double a,b,c,d;
	a = R1->x + R1->w;
	b = R2->x;
	c = R2->y - R2->h;
	d = R1->y;
	if(a-b < 0 or d-c < 0) return 0;

	double x,y;
	if(a - b >= R2->w) x = R2->w;
	else x = a -b;
	if(d - c >= R2->h) y = R2->h;
	else y = d-c;
	return x*y;
}