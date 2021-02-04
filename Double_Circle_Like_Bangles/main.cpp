#include<windows.h>
#include<GL/glut.h>
#include<math.h>

float x,y, r=0.5, s=0.6;
void display(void)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    for(float theta=0; theta<360; theta+= 0.01)
    {
        x = s*cos(theta);
        y = s*sin(theta);
        glVertex2f(x,y);
    }
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    for(float theta=0; theta<360; theta+= 0.01)
    {
        x = r*cos(theta);
        y = r*sin(theta);
        glVertex2f(x,y);
    }
    glEnd();
    glFlush();

}

int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(500,100);
    glutCreateWindow("Circle");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
