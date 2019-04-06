/*

Header file for Mud_Road in Screen 1

*/
#include<math.h>

#ifndef MUD_ROAD
#define MUD_ROAD
# define pi 3.142857

void sun(){
	glBegin(GL_POINTS);
	float x, y, i;
	for ( i = 0; i < (2 * pi); i += 0.001)
	{
		x = (30) * cos(i);
		y = (30) * sin(i);
		glVertex2i(x, y);
	}

	glEnd();

}

void pattern(){
    glColor3f(0.0,0.5,0.3);
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
