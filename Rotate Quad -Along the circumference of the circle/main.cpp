#include<windows.h>
#include<GL/glut.h>
#include<math.h>
float xa=0.2,ya=0.2,xb=-0.2,yb=0.2,xc=-0.2,yc=-0.2,xd=0.2,yd=-0.2;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    for(float theta=0; theta<360; theta+= 0.01)
    {
        glColor3f(1,0,0);
        glVertex2f(xa+.5,ya+.5);
        glColor3f(0,1,0);
        glVertex2f(xb+.5,yb+.5);
        glColor3f(0,0,1);
        glVertex2f(xc+.5,yc+.5);
        glColor3f(1,0.5,0.5);
        glVertex2f(xd+.5,yd+.5);
    }
    glEnd();
    glFlush();
}

void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
    case 'w':
        glTranslatef(0,0.01,0);
        glutPostRedisplay();
        break;
    case 's':
        glTranslatef(0,-0.01,0);
        glutPostRedisplay();
        break;
    case 'a':
        glTranslatef(-0.01,0,0);
        glutPostRedisplay();
        break;
    case 'd':
        glTranslatef(0.01,0,0);
        glutPostRedisplay();
        break;

    case 'm':
        glRotatef(-45,0,0,1);
        glutPostRedisplay();
        break;
    case 'n':
        glRotatef(45,0,0,1);
        glutPostRedisplay();
        break;

    case 'i':
        glScalef(2,2,1);
        glutPostRedisplay();
        break;
    case 'o':
        glScalef(0.5,0.5,1);
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
    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
