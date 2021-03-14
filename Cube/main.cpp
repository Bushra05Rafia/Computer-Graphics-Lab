#include<windows.h>
#include<GL/glut.h>
float angle=0.0; //globally defined
void spin(void)
{
    angle =angle +0.001;
    glutPostRedisplay();
}

void display(void)
{
    /* glColor3f(0,1,0);
    glLoadIdentity();
    gluLookAt(0,0,4,0,0,0,0,1,0); */
    // glutWireCube(1.0);// Built in function for drawing cube with size in 4 size
    //glutWireSphere(1,20,10); //
    // glutWireCone(1,2,20,10);//
    //glutWireTorus(0.5,1,20,40);//
    glClear(GL_COLOR_BUFFER_BIT); //Clearing previous display
    //glRotatef(angle,1,1,1); //45 degree angle rotate with respect to x,y,z
    glRotatef(angle,1,0,0); // rotate with only x
    glRotatef(angle,0,1,0);// rotate with only y
    glRotatef(angle,0,0,1);// rotate with only z
    glutWireCube(0.5);
    //glutSolidCube(1);
    glFlush();
}

void reshape(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,w/h,1,100);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(500,100);
    glutCreateWindow("Rotate Qurd Alone With The Circumference Of The Circle");
    glutIdleFunc(spin);
    //glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
