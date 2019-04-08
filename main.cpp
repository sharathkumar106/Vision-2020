#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>

/*External Files Include*/

#include "draw_scene_1.h"
#include "keyboard_func.h"

/* GLUT callback Handlers */


void init(){
	gluOrtho2D(0, 1440, 0, 740);
	glPointSize(5.0);
	glClearColor(1, 1, 1, 1);
}



static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    draw_scene_mudroad();

    glutSwapBuffers();
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
