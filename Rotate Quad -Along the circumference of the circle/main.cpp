#include<windows.h>
#include<GL/glut.h>
float xa=0.2,ya=0.2,xb=-0.2,yb=0.2,xc=-0.2,yc=-0.2,xd=0.2,yd=-0.2;
float ty=0.6,t=45;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    /* Translate */
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa,ya+ty);
    glColor3f(0,1,0);
    glVertex2f(xb,yb+ty);
    glColor3f(0,0,1);
    glVertex2f(xc,yc+ty);
    glColor3f(1,0.5,0.5);
    glVertex2f(xd,yd+ty);

    glEnd();
    glFlush();
}

void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
    /*Clockwise Rotate */
    case 'm':
        glRotatef(-t,0,0,1);
        glutPostRedisplay();
        break;
    /*Anti-Clockwise */
    case 'n':
        glRotatef(t,0,0,1);
        glutPostRedisplay();
        break;
    }
}
int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(500,100);
    glutCreateWindow("Rotate Qurd Alone With The Circumference Of The Circle");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
