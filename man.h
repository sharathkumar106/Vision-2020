#ifndef MAN
#define MAN

void man(int pos)
{
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(540-400+pos,495-50,0);
	glutSolidTorus(1,10,100,90);
	glPopMatrix();
	glColor3ub(255,191,128);
    glPushMatrix();
	glTranslatef(540-400+pos,495-50,0);
	glutSolidTorus(7,7,100,90);
	glPopMatrix();
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
 		glVertex2i(540-400+pos,495-50);
 		glVertex2i(540-400+pos,490-50); //nose
  		glVertex2i(531-400+pos,500-50);
 		glVertex2i(537-400+pos,500-50);//eyebrow
  		glVertex2i(543-400+pos,500-50);
 		glVertex2i(549-400+pos,500-50);//eyebrow
 	glEnd();
//ear right
	glBegin(GL_POLYGON);
	glColor3ub(255,191,128);
	glVertex2i(540-14-400+pos,494+1-50);
	glVertex2i(540-14-400+pos,490+1-50);
	glVertex2i(538-14-400+pos,489+1-50);
	glVertex2i(538-14-400+pos,495+1-50);
	glEnd();
	//ear left
	glBegin(GL_POLYGON);
	glColor3ub(255,191,128);
	glVertex2i(554-400+pos,495-50);
	glVertex2i(556-400+pos,496-50);
	glVertex2i(556-400+pos,491-50);
	glVertex2i(554-400+pos,490-50);
	glEnd();
//hair
	glBegin(GL_POLYGON);
	  glColor3ub(0,0,0);
	  glVertex2i(527-400+pos,503-50);
	  glVertex2i(553-400+pos,503-50);
	  glVertex2i(547-400+pos,509-50);
	  glVertex2i(533-400+pos,509-50);
	glEnd();


	// eyes
 	glBegin(GL_POLYGON);
 		glVertex2i(533-400+pos,498-50);
 		glVertex2i(535-400+pos,498-50);
 		glVertex2i(535-400+pos,496-50);
 		glVertex2i(533-400+pos,496-50);
glEnd();
glBegin(GL_POLYGON);
 		glVertex2i(545-400+pos,498-50);
 		glVertex2i(547-400+pos,498-50);
 		glVertex2i(547-400+pos,496-50);
 		glVertex2i(545-400+pos,496-50);
glEnd();
 	// mouth
glBegin(GL_POLYGON);
 		glVertex2i(535-400+pos,487-50);
 		glVertex2i(540-400+pos,485-50);
 		glVertex2i(545-400+pos,487-50);
 		glVertex2i(540-400+pos,487-50);
glEnd();
//beard
glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(538-400+pos,480-50);
	glVertex2i(542-400+pos,480-50);
	glVertex2i(542-400+pos,484-50);
	glVertex2i(538-400+pos,484-50);
glEnd();
//shirt
 	glBegin(GL_POLYGON);
 		glColor3ub(55,50,70);
	    glVertex2i(529-400+pos,480-50);
 		glVertex2i(551-400+pos,480-50);
 		glVertex2i(566-400+pos,469-50);
 		glVertex2i(561-400+pos,461-50);
 		glVertex2i(556-400+pos,465-50);
        glVertex2i(556-400+pos,445-50);
 		glVertex2i(524-400+pos,445-50);
 		glVertex2i(524-400+pos,465-50);
 		glVertex2i(519-400+pos,460-50);
 		glVertex2i(514-400+pos,469-50);
glEnd();
//hands
 	glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-400+pos,468-50);
 		glVertex2i(575-400+pos,453-50);
 		glVertex2i(567-400+pos,454-50);
 		glVertex2i(562-400+pos,462-50);
 	glEnd();
  	glBegin(GL_POLYGON);
		glVertex2i(575-400+pos,453-50);
 		glVertex2i(556-400+pos,438-50);
 		glVertex2i(556-400+pos,445-50);
 		glVertex2i(567-400+pos,454-50);
 	glEnd();
glBegin(GL_POLYGON);
	 	glVertex2i(515-400+pos,468-50);
 		glVertex2i(505-400+pos,453-50);
 		glVertex2i(513-400+pos,454-50);
 		glVertex2i(518-400+pos,462-50);
 	glEnd();
  	glBegin(GL_POLYGON);
		glVertex2i(505-400+pos,453-50);
   		glVertex2i(524-400+pos,438-50);
   		glVertex2i(524-400+pos,445-50);
   		glVertex2i(513-400+pos,454-50);
  	glEnd();
// belt
 	glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-400+pos,445-50);
 		glVertex2i(524-400+pos,445-50);
 		glVertex2i(524-400+pos,440-50);
		glVertex2i(524-400+pos,440-50);

 		glVertex2i(556-400+pos,440-50);
glEnd();
// collar
 	glBegin(GL_POLYGON);
		glColor3ub(200,140,110-50);
 		glVertex2i(529-400+pos,480-50);
 		glVertex2i(551-400+pos,480-50);
 		glVertex2i(546-400+pos,470-50);
 		glVertex2i(534-400+pos,470-50);
glEnd();

 	glBegin(GL_TRIANGLES);
		glColor3ub(20,140,110);
 		glVertex2i(540-400+pos,477-50);
  		glVertex2i(545-400+pos,470-50);
 		glVertex2i(535-400+pos,470-50);
glEnd();

// buttons
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(540-400+pos,465-50,0);
	glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(540-400+pos,458-50,0);
	glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(540-400+pos,451-50,0);
	glutSolidTorus(1,1,100,90);
	glPopMatrix();

	/// pant
glBegin(GL_POLYGON);
		glColor3ub(80,80,230);
glVertex2i(555-400+pos,440-50);
glVertex2i(525-400+pos,440-50);
glVertex2i(520-400+pos,405-50);
glVertex2i(530-400+pos,405-50);
glVertex2i(533-400+pos,438-50);
glVertex2i(550-400+pos,405-50);
glVertex2i(560-400+pos,405-50);
	glEnd();
		//shoe left
	glBegin(GL_POLYGON);
	glColor3ub(100,10,10);
	glVertex2i(530-400+pos,405-50);
	glVertex2i(530-400+pos,396-50);
	glVertex2i(512-400+pos,396-50);
	glVertex2i(520-400+pos,405-50);

	glEnd();
	//shoe right
	glBegin(GL_POLYGON);
	glColor3ub(100,10,10);
	glVertex2i(550-400+pos,405-50);
	glVertex2i(550-400+pos,396-50);
	glVertex2i(568-400+pos,396-50);
	glVertex2i(560-400+pos,405-50);
	glEnd();

	glutPostRedisplay();
}
#endif // MAN
