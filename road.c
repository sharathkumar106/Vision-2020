#include<stdio.h> 
#include<GL/glut.h> 
#include <stdlib.h>
#include<math.h>
#define OFFSET 200
#define HEIGHT 650
#define WIDTH 1000
void tree(int ,int );
void man(int);
void drawline (float x1, float y1, float x2, float y2);
void drawgrid();
void road_display();

float x = 0;
float y = 0;
void init(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 1000, 10.0, 650,-2000,1500);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1, 1, 1, 1);


	
}


void display(){
	int i;
	glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	drawgrid();
	road_display();
	tree(0,5);
	tree(200,8);
	tree(300,9);
	tree(400,11);
	tree(600,15);
	man(250);
	glPushMatrix();
    
    glutSwapBuffers();
    
    	glFlush();
    	
}


void road_display()
{
/************** left part of road  *********/
	
	glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
	glBegin(GL_POLYGON);
			glVertex2i(0,400);
			glVertex2i(1000,420);
		    glVertex2i(1000,265);
		  	glVertex2i(0,280);
	glEnd();
	
	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
			glVertex2i(0,400);
			glVertex2i(1000,420);
		    glVertex2i(1000,650);
		  	glVertex2i(0,650);
	glEnd();
	
	glColor3f(0.1f, 1.0f, 0.0f);//Bronze
	glBegin(GL_POLYGON);
			glVertex2i(0,280);
			glVertex2i(1000,265);
		    glVertex2i(1000,0);
		  	glVertex2i(0,0);
	glEnd();

	
}

/*---------------------------TRIANGULAR TREE--------------------------*/
void tree(int pos,int loc){
	int i=0,x=0,y=0;
	//Tree-Leaves
	glColor3f(0.0,1,0.1);
	for(i=0;i<3;i++){
		glBegin(GL_TRIANGLES);
			glVertex2f(200+x+pos,450+loc+y);
			glVertex2f(300-x+pos,450+loc+y);
			glVertex2f(250+pos,500+loc+y);
		glEnd();
		x+=10;
		y+=25;
	}
	
	//Tree-Trunk
	glColor3b(95,6,5);
	glBegin(GL_POLYGON);
		glVertex2f(245+pos,450+loc);
		glVertex2f(255+pos,450+loc);
		glVertex2f(260+pos,400+loc);
		glVertex2f(240+pos,400+loc);
	glEnd();
}
/*---------------------------TRIANGULAR TREE END------------------------*/

void main(int argc,char **argv)
{
        glutInit(&argc, argv);
	   	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH );
	   	glutInitWindowSize(1000,650);
	   	glutInitWindowPosition(0,0);
	   	glutCreateWindow("Road");
	   	init();
	   	glutDisplayFunc(display);
      	glutMainLoop();
}


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












/*------------------------------GRID BEGIN----------------------------------*/

void drawline (float x1, float y1, float x2, float y2)
{
    glBegin (GL_LINES);
    glVertex2f (x1, y1);
    glVertex2f (x2, y2);
    glEnd();
}

void drawgrid()
{
  //  glClearColor (1.0, 1.0, 1.0, 1.0);
    glColor3ub (240, 57, 53);

    for (float i = 0; i < 1000; i += 10)
    {
        if ((int) i % 100 == 0) glLineWidth (3.0);
        else if ((int) i % 50 == 0) glLineWidth (2.0);
        else glLineWidth (1.0);
        drawline (0, i, (float) WIDTH, i);
    }

    for (float i = 0; i <1000; i += 10)
    {
        if ((int) i % 100 == 0) glLineWidth (3.0);
        else if ((int) i % 50 == 0) glLineWidth (2.0);
        else glLineWidth (1.0);
        drawline (i, 0, i, (float) HEIGHT);
    }
}

/*------------------------------GRID END----------------------------------*/
