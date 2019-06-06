#ifndef DRONE
#define DRONE
#include "shapes.h"
void drone(int dr){


    //Drone Motor
    glColor3f(1,1,0);
    drawEllipse(32.5,17.5,dr,500);
    glColor3f(1,0,1);
    drawEllipse(37.5,25,dr,500);

    //Left-Top Wings
    glColor3f(1,0,1);
    drawEllipse(17.5,10,dr-70,562.5);
    glColor3f(0,1,0.8);
    drawEllipse(20,12.5,dr-70,562.5);


    //Left-Bottom Wings
    glColor3f(1,0,1);
    drawEllipse(17.5,10,dr-70,425);
    glColor3f(0,1,0.8);
    drawEllipse(20,12.5,dr-70,425);


    //Left-Top Handle
    glColor3f(0.1,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(dr,500);
        glVertex2f(dr-62.5,562.5);
        glVertex2f(dr-75,562.5);
        glVertex2f(dr,487.5);
    glEnd();

    //Left-Bottom Handle
    glColor3f(0.1,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(dr,500);
        glVertex2f(dr-75,425);
        glVertex2f(dr-62.5,425);
        glVertex2f(dr,487.5);
    glEnd();

    //Camera Stand Left
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
        glVertex2f(dr-37.5,500);
        glVertex2f(dr-25,480);
        glVertex2f(dr,450);
        glVertex2f(dr,455);
        glVertex2f(dr-12.5,455);
        glVertex2f(dr-30,500);
    glEnd();

    //Camera Left
    glColor3f(0.1,0,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(dr-10,455);
        glVertex2f(dr-10,462.5);
        glVertex2f(dr,462.5);
        glVertex2f(dr,465);
    glEnd();




    //Right-Top Wings
    glColor3f(1,0,1);
    drawEllipse(17.5,10,dr+70,562.5);
    glColor3f(0,1,0.8);
    drawEllipse(20,12.5,dr+70,562.5);

    //Right-Bottom Wings
    glColor3f(1,0,1);
    drawEllipse(17.5,10,dr+70,425);
    glColor3f(0,1,0.8);
    drawEllipse(20,12.5,dr+70,425);


    //Right-Top Handle
    glColor3f(0.1,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(dr,500);
        glVertex2f(dr+62.5,562.5);
        glVertex2f(dr+75,562.5);
        glVertex2f(dr,487.5);
    glEnd();

    //Right-Bottom Handle
    glColor3f(0.1,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(dr,500);
        glVertex2f(dr+75,425);
        glVertex2f(dr+62.5,425);
        glVertex2f(dr,487.5);
    glEnd();


    //Camera Stand Right
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
        glVertex2f(dr+37.5,500);
        glVertex2f(dr+25,480);
        glVertex2f(dr,450);
        glVertex2f(dr,455);
        glVertex2f(dr+12.5,455);
        glVertex2f(dr+30,500);
    glEnd();

    //Camera Right
    glColor3f(0.1,0,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(dr+10,455);
        glVertex2f(dr+10,462.5);
        glVertex2f(dr,462.5);
        glVertex2f(dr,465);
    glEnd();







}

#endif // DRONE
