#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
/*External Files Include*/

#include "grid.h"
#include "mud_road.h"
#include "man.h"
#include "tree.h"

/* GLUT callback Handlers */

float posX = 0, posY = 0, posZ = 0;

void init(){
	gluOrtho2D(0, 1440, 0, 740);
	glPointSize(5.0);
	glClearColor(1, 1, 1, 1);
}

void move_man(){
    man(-150);
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    int i,temp1=50,temp2=5;
    //Animate Man on Key Press: l-LEFT || j-RIGHT || i-UP || k-DOWN
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();


    glPushMatrix();
        tree(770,-260);
        tree(200,-180);
        tree(500,-178);
        tree(1010,-320);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(posX,posY,posZ);
        move_man();
    glPopMatrix();

    glPushMatrix();
        tree(-50,25);
        tree(900,100);
    glPopMatrix();
        for(i=0;i<4;i++){
            glPushMatrix();
            tree(temp1,temp2);
            temp1=temp1+250;
            temp2=temp2+1.3;
            glPopMatrix();
        }

    glPushMatrix();
    glTranslatef(posX,posY+1.8f,posZ);
    sun();
    glPopMatrix();



    //Draw Road and Trees
    glPushMatrix();
    // drawgrid();
        pattern();
        road_display();

    glPopMatrix();

    glutSwapBuffers();
}
float move_unit = 0.05f;

static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
         case 'l':
            posX+=move_unit;;
            break;

        case 'j':
            posX-=move_unit;;
        break;

        case 'i':
            posY+=move_unit;;
            break;

        case 'k':
            posY-=move_unit;;
        break;

        default:
         break;

    }

    glutPostRedisplay();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1440,740);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("INDIA 2020: A Vision for the new Millenium");
    init();
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutMainLoop();

    return EXIT_SUCCESS;
}
