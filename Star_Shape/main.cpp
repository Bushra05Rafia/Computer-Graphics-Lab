#include<windows.h>
#include<GL/glut.h>

void display(void)
{
    glColor3f(0,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.3,0.4);
    glVertex2f(0,1);
    glVertex2f(0.3,0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.3,0.4);
    glVertex2f(1,0.4);
    glVertex2f(0.5,-0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.6,-0.8);
    glVertex2f(0,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0,-0.4);
    glVertex2f(-0.6,-0.8);
    glVertex2f(-0.5,-0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-1,0.4);
    glVertex2f(-0.3, 0.4);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.3,0.4);
    glVertex2f(0.3,0.4);
    glVertex2f(0.5,-0.1);
    glVertex2f(0,-0.4);
    glVertex2f(-0.5,-0.1);
    glEnd();

    glFlush();

}

int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(500,100);
    glutCreateWindow("Star");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
