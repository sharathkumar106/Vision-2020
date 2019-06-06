/*

Header file for Grid (1440 X 740) in Screen 1

*/

#ifndef GRID
#define GRID
#define HEIGHT 740
#define WIDTH 1440
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
    glColor4f (0,0,0,1);

    for (float i = 0; i < 1500; i += 20)
    {
        if ((int) i % 100 == 0) glLineWidth (1.5);
        else if ((int) i % 50 == 0) glLineWidth (1.0);
        else glLineWidth (0.5);
        drawline (0, i, (float) WIDTH, i);
    }

    for (float i = 0; i <1500; i += 20)
    {
        if ((int) i % 100 == 0) glLineWidth (1.5);
        else if ((int) i % 50 == 0) glLineWidth (1.0);
        else glLineWidth (0.5);
        drawline (i, 0, i, (float) HEIGHT);
    }
}

/*------------------------------GRID END----------------------------------*/


#endif // GRID
