#ifndef KEYBOARD_FUNC
#define KEYBOARD_FUNC

static float move_unit = 0.05f;

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

#endif // KEYBOARD_FUNC
