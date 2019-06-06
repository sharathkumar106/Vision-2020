#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED
#include "technology.h"
void display_title();
void display_intro1();
void display_intro2();
void display_intro3();
void intro_roadways();
void display_road();
void intro_highways();
void display_highway();
void display_flyover();
void intro_farm();
void display_farm();
void intro_tech();
void display_tech();
void display_conclusion();
void display_ending();
void quit();


void animate_title(int);
void animate_intro1(int);
void animate_intro2(int);
void animate_intro3(int);
void animate_roadways(int);
void animate_man(int);
void animate_sun(int);
void animate_highways(int);
void animate_man2(int);
void animate_car(int);
void animate_plane(int value);
void animate_agri(int);
void animate_farmer(int);
void animate_intro_tech(int);
void animate_tech(int);
void animate_conclusion(int);
void animate_ending(int);
void terminate(int);
int done=1;

void animate_title(int value){

    glutDisplayFunc(display_title);
   glutTimerFunc(3000, animate_intro1, 0);
    glutPostRedisplay();
    //printf("animate_title\n");
}

void animate_intro1(int value){

    Sleep(1000);
    glutDisplayFunc(display_intro1);
    glutTimerFunc(2000, animate_intro2, 0);
    glutPostRedisplay();
    //printf("animate_intro1\n");
}

void animate_intro2(int value){

    Sleep(1000);
    glutDisplayFunc(display_intro2);
    glutTimerFunc(2000, animate_intro3, 0);
    glutPostRedisplay();
    //printf("animate_intro2\n");
}

void animate_intro3(int value){

    Sleep(1000);
    glutTimerFunc(2000, animate_roadways, 0);
    glutDisplayFunc(display_intro3);
    glutPostRedisplay();
    //printf("animate_intro3\n");
}

void animate_roadways(int value){
    Sleep(1000);
    page=1;
    glutDisplayFunc(intro_roadways);
    glutPostRedisplay();
    //printf("animate_roadways\n");
}


void animate_man(int value)
{
    glutDisplayFunc(display_road);
    if (posX<1){
        posX+=0.008;
        glutTimerFunc(40, animate_man, 0);
        glutTimerFunc(40, animate_sun, 0);
    }
    else if(posX<1.8){
            posX+=0.008;
        glutTimerFunc(40,animate_man,0);
    }
    else{
        page=2;
        glutDisplayFunc(intro_highways);
    }
    glutPostRedisplay();
    //printf("animate_man\n");
}

//int flag=0;
void animate_sun(int value){
    if(sunX<1&&sunY<0.25){
       sunX+=0.01;
       sunY+=0.002;
       //printf("%f   %f\n",sunX,sunY);
      //glutTimerFunc(250, animate_sun, 0);
    }
    //printf("Animate_SUN\n");
    glutPostRedisplay();
}

void animate_highways(int value){
    posX=0;
    glutDisplayFunc(display_highway);
    glutTimerFunc(50, animate_man2, 0);
    glutPostRedisplay();
}

void animate_man2(int value){
    if (posX<2){
        posX+=0.01;
        glutTimerFunc(20, animate_man2, 0);
    }
    else{
        glutDisplayFunc(display_flyover);
        glutTimerFunc(50, animate_car, 0);
        glutTimerFunc(50,animate_plane,0);
    }
    glutPostRedisplay();
    //printf("animate_man2\n");
}
void animate_plane(int value){

    planeX-=0.003;
    glutTimerFunc(25,animate_plane,0);
}

void animate_car(int value){

    if(carY<0.01*turn){
        carY+=0.01;
        glutTimerFunc(50, animate_car, 0);
    }
    else{
        carX+=0.01;
        carY+=0.01;
        turn+=1;
        if(theta<30){
            theta+=1;
        }
        else{
            carY+=0.015;
            carX+=0.003;
        }
        glutTimerFunc(50, animate_car, 0);
      //  //printf("Turn=%d\t Theta=%f\n",turn,theta);
    }
    if(turn>80&&done){
        done=0;
        glutDisplayFunc(intro_farm);
        page=3;
     //   glutTimerFunc(1000,animate_agri,0);
    }
    glutPostRedisplay();
    //printf("animate_car\n");
}

void animate_agri(int value){
    glutDisplayFunc(display_farm);
    glutTimerFunc(150, animate_farmer, 0);
    glutPostRedisplay();
}
void animate_farmer(int value){
   // glutDisplayFunc(display_farm);
    if(farmX<2.2&&farmY<1.7){
        farmX+=0.017;
        farmY+=0.01;
        if(farmY>=14*0.01)
            farmY+=0.01;
        if(farmY>40*0.01)
            farmY-=0.0072;
        glutTimerFunc(35, animate_farmer, 0);
    }
    else{
        page=4;
        //glutDisplayFunc(intro_tech);
    }
    //printf("%f\t%f\n",farmX,farmY);
    glutPostRedisplay();
    //printf("animate_farmer\n");
}

void animate_tech(int value){
    glutDisplayFunc(display_tech);
    if(sigX<70&&sigY<35){
        sigX+=10;
        sigY+=5;

        glutTimerFunc(250,animate_tech,0);
    }
    else if(sigX<70||sigY<35){
        sigX=0;
        sigY=0;
        glutTimerFunc(250,animate_tech,0);
    }
    else{
        glutTimerFunc(2000, animate_conclusion, 0);
    }
    glutPostRedisplay();
    //printf("animate_tech\n");
}

void animate_conclusion(int value){
    glutDisplayFunc(display_conclusion);
    glutTimerFunc(3500, animate_ending, 0);
    glutPostRedisplay();
    //printf("animate_conclusion\n");
}

void animate_ending(int value){
    glutDisplayFunc(display_ending);

    glutPostRedisplay();
    Sleep(2500);
    glutTimerFunc(1000,terminate,0);
    //printf("animate_tech\n");
}
void terminate(int value){
    printf("THANK YOU\n");
    quit();
}
#endif // ANIMATION_H_INCLUDED
