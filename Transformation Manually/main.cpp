#include<windows.h>
#include<GL/glut.h>
#include<math.h>

float xa=0.2,ya=0.2,xb=-0.2,yb=0.2,xc=-0.2,yc=-0.2,xd=0.2,yd=-0.2;
float t=-45;
float tx=0.5,ty=0.5;
void display(void)
{
    /* Tranlation
    */
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(0.2-0.3,0.2-0.5);
    glColor3f(0,1,0);
    glVertex2f(-0.2-0.3,0.2-0.5);
    glColor3f(0,0,1);
    glVertex2f(-0.2-0.3,-0.2-0.5);
    glColor3f(1,0.5,0.5);
    glVertex2f(0.2-0.3,-0.2-0.5);
    glEnd();


    /* rotation
    */
    float temp=xa;
    xa=xa*cos(t)-ya*sin(t);
    ya=temp*sin(t)+ya*cos(t);
    temp=xb;
    xb=xb*cos(t)-yb*sin(t);
    yb=temp*sin(t)+yb*cos(t);
    temp=xc;
    xc=xc*cos(t)-yc*sin(t);
    yc=temp*sin(t)+yc*cos(t);
    temp=xd;
    xd=xd*cos(t)-yd*sin(t);
    yd=temp*sin(t)+yd*cos(t);
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa,ya);
    glColor3f(0,1,0);
    glVertex2f(xb,yb);
    glColor3f(0,0,1);
    glVertex2f(xc,yc);
    glColor3f(1,0.5,0.5);
    glVertex2f(xd,yd);
    glEnd();


    /* Scalling
    */
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa*tx,ya*ty);
    glColor3f(0,1,0);
    glVertex2f(xb*tx,yb*ty);
    glColor3f(0,0,1);
    glVertex2f(xc*tx,yc*ty);
    glColor3f(1,0.5,0.5);
    glVertex2f(xd*tx,yd*ty);
    glEnd();


    glFlush();

}

int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(500,100);
    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
