#ifndef HIGHWAY
#define HIGHWAY

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

#endif // HIGHWAY
