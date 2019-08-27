#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>
#include "main.h"

#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 144

int main(int argc, char **argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_RGBA );
    glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);

    if(glutCreateWindow("GB Emu") < 1)
        exit(1);
    glutDisplayFunc(display);
    glutMainLoop();



}

void display(){

    //todo make


}