#ifndef HIGHWAY
#define HIGHWAY
#include "shapes.h"
int i=-100,x=0;
void highway_display()
{
    //Divider
    glPushMatrix();
    glColor3f(1,1,0);
    glBegin(GL_LINES);
        while(i<1440){
            i+=100;
            glVertex2i(50+i,350-x);
            x+=2;
            glVertex2i(100+i,350-x);
        }
        i=-100;x=0;
    glEnd();
    glPopMatrix();

    //Left Divider
    glPushMatrix();
    glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2i(0,395);
        glVertex2i(1440,390);
    glEnd();
    glPopMatrix();


    //Right Divider
    glPushMatrix();
    glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2i(0,305);
        glVertex2i(1440,265);
    glEnd();
    glPopMatrix();


    //Straight Road
    glPushMatrix();
	glColor3f(0.2f, 0.0f, 0.2f);//Forest Green
	glBegin(GL_POLYGON);
			glVertex2i(0,300);
			glVertex2i(1440,260);
		    glVertex2i(1440,420);
		  	glVertex2i(0,400);
	glEnd();
    glPopMatrix();

    //Road Right Side
    glPushMatrix();
	glColor3f(0.1f, 1.0f, 0.0f);//Bronze
	glBegin(GL_POLYGON);
			glVertex2i(0,300);
			glVertex2i(1440,260);
		    glVertex2i(1440,0);
		  	glVertex2i(0,0);
	glEnd();
    glPopMatrix();

}
 void drawCar(){

        //Back Window
        glColor3f(0.1,0.2,0.2);
        glBegin(GL_POLYGON);
			glVertex2f(12.5,362.5);
			glVertex2f(37.5,362.5);
		    glVertex2f(37.5,382.5);
		  	glVertex2f(25,382.5);
		  	glVertex2f(12.5,362.5);
        glEnd();


        //Middle Window
        glColor3f(0.1,0.2,0.2);
        glBegin(GL_POLYGON);
			glVertex2f(42.5,362.5);
			glVertex2f(75,362.5);
		    glVertex2f(75,382.5);
		  	glVertex2f(42.5,382.5);
		  	glVertex2f(42.5,362.5);
        glEnd();

        //Front Window
        glColor3f(0.1,0.2,0.2);
        glBegin(GL_POLYGON);
			glVertex2f(77.5,362.5);
			glVertex2f(122.5,362.5);
		    glVertex2f(100,382.5);
		  	glVertex2f(77.5,382.5);
		  	glVertex2f(77.5,362.5);
        glEnd();

        //Headlight
        glColor3f(1,1,0.2);
        glBegin(GL_POLYGON);
			glVertex2f(175,360);
			glVertex2f(187,359);
		    glVertex2f(187.5,350);
		  	glVertex2f(177.5,350);
		  	glVertex2f(175,360);
        glEnd();

        //Back Light
        glColor3f(1,1,0.2);
        glBegin(GL_POLYGON);
			glVertex2f(0,337.5);
			glVertex2f(7.5,337.5);
		    glVertex2f(7.5,345);
		  	glVertex2f(0,345);
        glEnd();


        //Mirror
        glColor3f(0.3,0.1,0.2);
        glBegin(GL_POLYGON);
			glVertex2f(132.5,360);
			glVertex2f(132.5,356);
		    glVertex2f(127.5,356);
		  	glVertex2f(127.5,360);
        glEnd();

        //Handles
        glBegin(GL_LINES);
			glVertex2f(45,357.5);
			glVertex2f(52.5,357.5);
		    glVertex2f(80,357.5);
		  	glVertex2f(87.5,357.5);
        glEnd();

        //Back Wheels
        glColor3f(0.5,0.5,0.8);
        drawEllipse(8,8,35,330);
        glColor3f(0.2,0.2,0.2);
        drawEllipse(13.5,13.5,35,330);


        //Front Wheels
        glColor3f(0.5,0.5,0.8);
        drawEllipse(8,8,160,330);
        glColor3f(0.2,0.2,0.2);
        drawEllipse(13.5,13.5,160,330);


        glColor3f(1,0,0);
        //Car Body
        glBegin(GL_POLYGON);
			glVertex2f(0,325);
			glVertex2f(0,350);
		    glVertex2f(20,382.5);
		  	glVertex2f(15,387.5);
		  	glVertex2f(100,387.5);
			glVertex2f(137.5,362.5);
		    glVertex2f(175,360);
		  	glVertex2f(177.5,350);
		  	glVertex2f(187.5,350);
			glVertex2f(187.5,347.5);
		    glVertex2f(190,347.5);
		  	glVertex2f(190,332.5);
		  	glVertex2f(185,325);

            glVertex2f(177.5,325);
			glVertex2f(177.5,337.5);
		  	glVertex2f(172.5,347.5);
		  	glVertex2f(155,347.5);
		    glVertex2f(150,330);
			glVertex2f(55,330);
		  	glVertex2f(50,347.5);
		  	glVertex2f(30,347.5);
		    glVertex2f(25,337.5);
			glVertex2f(25,325);
		  	glVertex2f(0,325);
        glEnd();

    }

#endif // HIGHWAY
