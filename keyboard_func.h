#ifndef KEYBOARD_FUNC
#define KEYBOARD_FUNC
static float move_unit = 0.05f,drone_move=0.07;
int turn=1;
static int page=0;
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
void animate_plane(int value);
void animate_agri(int);
void animate_farmer(int);
void animate_intro_tech(int);
void animate_tech(int);
void animate_conclusion(int);
void animate_ending(int);
void exit(int);

static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
         case 'z':
            posX+=move_unit;;
            break;

        case 'x':
            posX-=move_unit;;
        break;

        case 't':
            glutDisplayFunc(display_title);
        break;

        case 's':
            posX = 0;
            posY = 0;
            posZ = 0;
            glutDisplayFunc(display_highway);
        break;

        case 'a':
            posX = 0;
            posY = 0;
            posZ = 0;
            sunX=0;
            sunY=0;
            glutDisplayFunc(display_road);
        break;

        case 'w':
            farmX = 0;
            farmY = 0;
            posZ = 0;
            glutDisplayFunc(display_farm);
        break;

        case 'f':
            posX = 0;
            posY = 0;
            posZ = 0;
            carX = 0;
            carY = 0;
            carZ = 0;
            turn=1;
            theta=0;
            glutDisplayFunc(display_flyover);
        break;


        case 'v':
            /*
            farmX+=0.02;
            farmY+=0.01;
            if(farmY>15*0.01)
                farmY+=0.01;
            if(farmY>40*0.01)
                farmY-=0.005;
                */

            if(farmX<2.2&&farmY<1.7){
            farmX+=0.017;
            farmY+=0.01;
            if(farmY>=14*0.01)
                farmY+=0.01;
            if(farmY>40*0.01)
                farmY-=0.0072;
            printf("%f\t%f\n",farmX,farmY);
            }
            break;


        case 'b':
            if(carY<0.01*turn)
                carY+=0.01;
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
             //   printf("Turn=%d\t Theta=%f\n",turn,theta);
            }
            break;

        case 'N':
        case 'n':
            if(page==1){
                glutTimerFunc(100, animate_man, 0);
                glutPostRedisplay();
            }
            if(page==2){
                glutTimerFunc(100, animate_highways, 0);
                glutPostRedisplay();
            }
            if(page==3){
               glutTimerFunc(100, animate_agri, 0);
                glutPostRedisplay();
            }
            if(page==4){
                glutTimerFunc(100, animate_tech, 0);
                glutPostRedisplay();
            }
        default:
        break;

        case 'p':
            if(page==4){
                glutDisplayFunc(intro_tech);

            }
            break;

        case 'l':
            droneX+=drone_move;
            break;

        case 'j':
            droneX-=drone_move;
        break;

        case 'i':
            droneY+=drone_move;
            break;

        case 'k':
            droneY-=drone_move;
        break;

    }

    glutPostRedisplay();
}

#endif // KEYBOARD_FUNC
