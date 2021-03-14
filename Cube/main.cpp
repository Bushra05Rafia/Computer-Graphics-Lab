#include<windows.h>
#include<GL/glut.h>
float angle=0.0; //globally defined
void spin(void)
{
    angle =angle +0.01;
    glutPostRedisplay();
}

void display(void)
{
    glColor3f(0,1,0);
    glClear(GL_COLOR_BUFFER_BIT); //Clearing previous display
    //glRotatef(angle,1,1,1); //45 degree angle rotate with respect to x,y,z
    glLoadIdentity();// identity matrix loaded
    gluLookAt(0,0,4,0,0,0,0,1,0); //up direction w.r.t y axis
    glRotatef(angle,1,0,0); // rotate with only x
    glRotatef(angle,0,1,0);// rotate with only y
    glRotatef(angle,0,0,1);// rotate with only z
    glutWireCube(1);// Built in function for drawing cube with size 4 in all sides
    //glutWireSphere(1,20,10); //Spare; radius=1, slice=20, stack-10
    //glutSolidCube(1);
    //glutWireCone(1,2,20,10); // Cone; base=1, height=2, slice=20, stack-10
    //glutWireTorus(0.5,1,20,40); // 3D donut; Inner Radius= 0.5, Outer Radius=1; Sides=20 , rings=40
    //glutWireTeapot(1); // teapot 3d model
    glFlush();
}

void reshape(int w, int h) // width and height pass as parameter
{
    glViewport(0,0,w,h); //x,y,w,h
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,w/h,1,100);//fovy,w/h,near,far
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
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
