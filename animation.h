#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED

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
void animate_agri(int);
void animate_farmer(int);
void animate_intro_tech(int);
void animate_tech(int);
void animate_conclusion(int);
void animate_ending(int);
void exit(int);

int done=0;

void animate_title(int value){

    glutDisplayFunc(display_title);
    glutTimerFunc(1000, animate_intro1, 0);
    glutPostRedisplay();
    printf("animate_title\n");
}

void animate_intro1(int value){

    Sleep(2000);
    glutDisplayFunc(display_intro1);
    glutTimerFunc(1000, animate_intro2, 0);
    glutPostRedisplay();
    printf("animate_intro1\n");
}

void animate_intro2(int value){

    Sleep(2000);
    glutDisplayFunc(display_intro2);
    glutTimerFunc(1000, animate_intro3, 0);
    glutPostRedisplay();
    printf("animate_intro2\n");
}

void animate_intro3(int value){

    Sleep(3000);
    glutTimerFunc(3000, animate_roadways, 0);
    glutDisplayFunc(display_intro3);
    glutPostRedisplay();
    printf("animate_intro3\n");
}

void animate_roadways(int value){

    Sleep(3000);
    page=1;
    glutDisplayFunc(intro_roadways);
    glutPostRedisplay();
    printf("animate_roadways\n");
}


void animate_man(int value)
{
    glutDisplayFunc(display_road);
    if (posX<2){
        posX+=0.04;
        glutTimerFunc(200, animate_man, 0);
        glutTimerFunc(250, animate_sun, 0);
    }
    else{
        page=2;
        glutDisplayFunc(intro_highways);
    }
    glutPostRedisplay();
    printf("animate_man\n");
}

int flag=0;
void animate_sun(int value){
    if(sunX<2&&sunY<0.25&&!flag){
       sunX+=0.008;
       sunY+=0.002;
       glutTimerFunc(250, animate_sun, 0);
    }
    else if(sunX<2&&sunY>-0.3){
        flag=1;
        sunX+=0.008;
        sunY-=0.002;
        glutTimerFunc(450, animate_sun, 0);
    }
    else{
        printf("-------------------\n");
    }
    printf("Animate_SUN\n");
    glutPostRedisplay();
}

void animate_highways(int value){
    posX=0;
    glutDisplayFunc(display_highway);
    glutTimerFunc(1000, animate_man2, 0);
    glutPostRedisplay();
}

void animate_man2(int value){
    if (posX<2){
        posX+=0.03;
        glutTimerFunc(100, animate_man2, 0);
    }
    else{
        glutDisplayFunc(display_flyover);
        glutTimerFunc(100, animate_car, 0);
    }
    glutPostRedisplay();
    printf("animate_man2\n");
}

void animate_car(int value){
    if(carY<0.01*turn){
        carY+=0.01;
        glutTimerFunc(100, animate_car, 0);
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
        glutTimerFunc(100, animate_car, 0);
      //  printf("Turn=%d\t Theta=%f\n",turn,theta);
    }


    if(turn>80&&!done){
        done=1;
        glutDisplayFunc(intro_farm);
        page=3;
        //glutTimerFunc(100,animate_agri,0);
    }
    glutPostRedisplay();
    printf("animate_car\n");
}

void animate_agri(int value){
    glutDisplayFunc(display_farm);
    glutTimerFunc(1000, animate_farmer, 0);
    glutPostRedisplay();
}

void animate_farmer(int value){
   // glutDisplayFunc(display_farm);
    if(farmX<2.1&&farmY<1.57){
        farmX+=0.02;
        farmY+=0.01;
        if(farmY>15*0.01)
            farmY+=0.01;
        if(farmY>40*0.01)
            farmY-=0.005;
        glutTimerFunc(80, animate_farmer, 0);
    }
    else{
        page=4;
        glutDisplayFunc(intro_tech);
    }
   // printf("%f\t%f\n",farmX,farmY);
    glutPostRedisplay();
    printf("animate_farmer\n");
}

void animate_tech(int value){
    glutDisplayFunc(display_tech);
    Sleep(3000);
    glutTimerFunc(3500, animate_conclusion, 0);
    glutPostRedisplay();
    printf("animate_tech\n");
}

void animate_conclusion(int value){
    glutDisplayFunc(display_conclusion);
    glutTimerFunc(4500, animate_ending, 0);
    glutPostRedisplay();
    printf("animate_conclusion\n");
}

void animate_ending(int value){
    glutDisplayFunc(display_ending);
    glutTimerFunc(3500, exit, 0);
    glutPostRedisplay();
    printf("animate_tech\n");
}
void exit(int value){
    printf("THANK YOU\n");
    exit(0);
}
#endif // ANIMATION_H_INCLUDED
