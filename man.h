#ifndef MAN
#define MAN
#include "shapes.h"

void man(int pos){

	//Buttons
	glBegin(GL_POINTS);
		glVertex2f(pos+250,375);
		glVertex2f(pos+250,385);
		glVertex2f(pos+250,395);
		glVertex2f(pos+250,405);
	glEnd();

	//Eyes
	glBegin(GL_POINTS);
		glVertex2f(pos+250-3.3,422);
		glVertex2f(pos+250+3.3,422);
	glEnd();

	//Eyebrows
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(pos+250-6,423);
		glVertex2f(pos+250-5,424);

		glVertex2f(pos+250-5,424);
		glVertex2f(pos+250-4,425);

		glVertex2f(pos+250-4,425);
		glVertex2f(pos+250-3,425);

		glVertex2f(pos+250-3,425);
		glVertex2f(pos+250-2,424);

		glVertex2f(pos+250-2,424);
		glVertex2f(pos+250-1,423);

		glVertex2f(pos+250+1,423);
		glVertex2f(pos+250+2,424);

		glVertex2f(pos+250+2,424);
		glVertex2f(pos+250+3,425);

		glVertex2f(pos+250+3,425);
		glVertex2f(pos+250+4,425);

		glVertex2f(pos+250+4,425);
		glVertex2f(pos+250+5,424);

		glVertex2f(pos+250+5,424);
		glVertex2f(pos+250+6,423);
	glEnd();


	//Nose
	glLineWidth(0.1);
	glBegin(GL_LINES);
		glVertex2f(pos+250,419);
		glVertex2f(pos+250,416);
	glEnd();

	//Mouth
	glBegin(GL_LINE_LOOP);
		glVertex2f(pos+250-4,414);
		glVertex2f(pos+250-3,413.5);
		glVertex2f(pos+250-2,412.5);
		glVertex2f(pos+250-1,412.5);
		glVertex2f(pos+250,411.5);
		glVertex2f(pos+250+1,412.5);
		glVertex2f(pos+250+2,412.5);
		glVertex2f(pos+250+3,413.5);
		glVertex2f(pos+250+4,414);
	glEnd();

	//Ears
	glBegin(GL_POLYGON);
		glVertex2f(pos+250-10.5,422);
		glVertex2f(pos+250-11.5,420);
		glVertex2f(pos+250-11,417);
		glVertex2f(pos+250-10.2,415);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(pos+250+10.5,422);
		glVertex2f(pos+250+11.5,420);
		glVertex2f(pos+250+11,417);
		glVertex2f(pos+250+10.2,415);
	glEnd();

	//Head
	glColor3f(0.1,.9,.5);
	drawEllipse(10.5,10.5,pos+250,420);

	//Hair
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(pos+250-10,420);
		glVertex2f(pos+250-10,436);
		glVertex2f(pos+250-7,434);
		glVertex2f(pos+250-5,437);
		glVertex2f(pos+250-3,435);
		glVertex2f(pos+250-1,437);
		glColor3f(0,0.3,0.1);
		glVertex2f(pos+250,435);
		glVertex2f(pos+250+1,437);
		glVertex2f(pos+250+3,435);
		glVertex2f(pos+250+5,437);
		glVertex2f(pos+250+7,434);
		glVertex2f(pos+250+10,436);
		glVertex2f(pos+250+10,420);

	glEnd();

	//Belt
	glColor3f(0.2,0,0);
    glBegin(GL_POLYGON);
		glVertex2f(pos+250-14,370);
		glVertex2f(pos+250+14,370);
		glVertex2f(pos+250+13,367);
		glVertex2f(pos+250-13,367);
	glEnd();


	//Pants
	glColor3f(0,0,1);
    glBegin(GL_POLYGON);
		glVertex2f(pos+250-14,370);
		glVertex2f(pos+250-16,330);
		glVertex2f(pos+250-6,330);
		glVertex2f(pos+250,357);
		glVertex2f(pos+250,357);
		glVertex2f(pos+250+6,330);
		glVertex2f(pos+250+16,330);
		glVertex2f(pos+250+14,370);
		glVertex2f(pos+250-14,370);
	glEnd();


	//Left-Hand
	glColor3f(0.5,0,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(pos+250-12,400);
		glVertex2f(pos+250-30,375);
		glVertex2f(pos+250-30,365);
		glVertex2f(pos+250-14,390);
		glVertex2f(pos+250-12,400);
	glEnd();

	//Right-Hand
	glColor3f(0.5,0,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(pos+250+12,400);
		glVertex2f(pos+250+30,375);
		glVertex2f(pos+250+30,365);
		glVertex2f(pos+250+14,390);
		glVertex2f(pos+250+12,400);
	glEnd();

	//Body
	glColor3f(0.9,0.8,.1);
    drawEllipse(15,(410-350)/2,pos+250,380);

    //Feet(Left and Right)
    glColor3f(1,0,0);
	drawEllipse(6.5,4.5,pos+250-10,330-4.5);
	drawEllipse(6.5,4.5,pos+250+10,330-4.5);

	//Fist(LEFT and Right)
	glColor3f(1,0,0);
	drawEllipse(2.5,4,pos+250-30-3/2,(365+375)/2);
	drawEllipse(2.5,4,pos+250+30+5/2,(365+375)/2);

}

#endif // MAN
