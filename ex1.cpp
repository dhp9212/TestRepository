#include<stdio.h>
#include<gl/glew.h>
#include<gl/glut.h>
#pragma comment(lib, "glew32.lib")

void myInit(void) {
	const char* strVersion = (char*)glGetString(GL_VERSION);
	printf("version = %s\n", strVersion);
	fflush(stdout);
}

void myDisplay(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(200, 200);
	glutCreateWindow("simple");
	glutDisplayFunc(myDisplay);
	glewInit();
	myInit();
	glutMainLoop();
	return 0;
}
