/*

Header file for Mud_Road in Screen 1

*/
#include<math.h>
#include "shapes.h"
#include "draw_scene_mudroad.h"
#ifndef MUD_ROAD
#define MUD_ROAD
float getSunX();
void sun(int pos){
    glColor3f(1,1,0);
    if(getSunX()>1.0){
        glColor4f(1,1,1,1);
	}
    drawEllipse(30,30,pos,620);
}


//Draw Mountains
void mountains(){
    glColor3f(0.0,0.5,0.3);
    if(getSunX()>1.0){
        glColor4f(0,0.3,0.3,1);
	}
	glBegin(GL_POLYGON);
        glVertex2d(0,400);
        glVertex2d(200,550);
        glVertex2d(450,415);
        glVertex2d(500,560);
        glVertex2d(900,425);
        glVertex2d(1200,570);
        glVertex2d(1440,420);
        glVertex2d(0,400);
	glEnd();
}

void road_display()
{
    //Straight Road
    glPushMatrix();
	glColor3f(0.0f, 0.8f, 0.0f);//Forest Green
	glBegin(GL_POLYGON);
			glVertex2i(0,300);
			glVertex2i(1440,260);
		    glVertex2i(1440,420);
		  	glVertex2i(0,400);
	glEnd();
    glPopMatrix();

     //Side Road
    glPushMatrix();
	glColor3f(0.0f, 0.8f, 0.0f);//Forest Green
	glBegin(GL_POLYGON);
			glVertex2i(1000,280);
			glVertex2i(1150,270);
		    glVertex2i(1280,0);
		  	glVertex2i(1090,0);
	glEnd();
    glPopMatrix();

    //Road Left Side
    glPushMatrix();
	glColor4f(0.0f, 1.0f, 1.0f, 1.0f); //Sky Blue
	if(getSunX()>1.0){
        glColor4f(0,0,1,1);
	}
	glBegin(GL_POLYGON);
			glVertex2i(0,400);
			glVertex2i(1440,420);
		    glVertex2i(1440,740);
		  	glVertex2i(0,740);
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
#endif // MUD_ROAD

