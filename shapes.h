#ifndef SHAPES
#define SHAPES
#include <math.h>
void drawEllipse(int rx, int ry, int xc, int yc) {
	float a = rx;
	float b = ry;
	float x = 0;
	float y = ry;
	float d2;
	float d1 = b - (a*a*ry) + (a*a*0.25);

	while (2 * b*b*x < 2 * a*a*y)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x + xc, y + yc);
		glVertex2f(x + xc, -y + yc);
		glVertex2f(-x + xc, -y + yc);
		glVertex2f(-x + xc, y + yc);
		glEnd();

		if (d1 < 0)
		{
			x = x + 1;
			d1 = d1 + (2 * b*b*x) + (b*b);
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d1 = d1 + (2 * b*b*x) - (2 * a*a*y) + (b*b);
		}
	}//end while

	d2 = b*b*((x + 0.5)*(x + 0.5)) + (a*a*((y - 1)*(y - 1))) - (a*a*b*b);
	while (y > 0 || y < 0)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x + xc, y + yc);
		glVertex2f(x + xc, -y + yc);
		glVertex2f(-x + xc, -y + yc);
		glVertex2f(-x + xc, y + yc);
		glEnd();

		if (d2 > 0)
		{
			y = y - 1;
			d2 = d2 - (2 * a*a*y) + (a*a);
		}
		else
		{
			x = x + 1; y = y - 1;
			d2 = d2 + (2 * b*b*x) - (2 * a*a*y) + (a*a);
		}
	}
}

void drawCircle(int r, int  xc, int yc) {
	int x = 0, y = r;
	int d;
	d = 1 - r;

	while (x < y)
	{
		glBegin(GL_POLYGON);
		glVertex2i(y + xc, x + yc);
		glVertex2i(x + xc, y + yc);
		glVertex2i(x + xc, -y + yc);
		glVertex2i(y + xc, -x + yc);
		glVertex2i(-y + xc, -x + yc);
		glVertex2i(-x + xc, -y + yc);
		glVertex2i(-x + xc, y + yc);
		glVertex2i(-y + xc, x + yc);
		glEnd();

		if (d < 0)
		{
			x = x + 1;
			d = d + 2 * x + 1;
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d = d + ((2 * x) + 1) - (2 * y);
		}
	}//end while
}//end drawCircle

void drawCircleWire(int rx,int ry){
	glBegin(GL_POINTS);
	float x, y, i;
	for ( i = 0; i < (2 * 3.142); i += 0.01)
	{
		x = (30) * cos(i);
		y = (30) * sin(i);
		glVertex2i(x, y);
	}

	glEnd();

}

#endif // SHAPES
