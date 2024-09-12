#pragma once
#include<stdio.h>
#include<glew.h>
#include<glfw3.h>

class Window
{
public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);
	int Initialise();
	GLfloat getBufferWidth() { return bufferWidth; }
	GLfloat getBufferHeight() { return bufferHeight; }
	bool getShouldClose() {
		return  glfwWindowShouldClose(mainWindow);}
	bool* getsKeys() { return keys; }
	GLfloat getXChange();
	GLfloat getYChange();
	void swapBuffers() { return glfwSwapBuffers(mainWindow); }
	GLfloat getrotay() { return rotay; }
	GLfloat getrotax() { return rotax; }
	GLfloat getrotaz() { return rotaz; }
	GLfloat getarticulacion1() { return articulacion1; }
	GLfloat getarticulacion2() { return articulacion2; }
	GLfloat getarticulacion3() { return articulacion3; }
	GLfloat getarticulacion4() { return articulacion4; }
	GLfloat getarticulacion5() { return articulacion5; }
	GLfloat getarticulacion6() { return articulacion6; }
	GLfloat getarticulacion7() { return articulacion7; }
	GLfloat getarticulacion8() { return articulacion8; }
	GLfloat getarticulacion_IzqAd() { return articulacionizqde; }
	GLfloat getarticulacion_DerAd() { return articulacionderde; }
	GLfloat getarticulacion_IzqAt() { return articulacionizqAtras; }
	GLfloat getarticulacion_DerAt() { return articulacionderAtras; }
	GLfloat getarticulacion_cuello() { return articulacioncuel; }
	GLfloat getarticulacion_muslo_IzqAd() { return articulacionmusizqde; }
	GLfloat getarticulacion_muslo_DerAd() { return articulacionmusderde; }
	GLfloat getarticulacion_muslo_IzqAt() { return articulacionmusizqAtras; }
	GLfloat getarticulacion_muslo_DerAt() { return articulacionmusdeAtras; }
	GLfloat getarticulacion_pata_IzqAd() { return articulacionpatitaizqdel; }
	GLfloat getarticulacion_pata_DerAd() { return articulacionpatitaderde; }
	GLfloat getarticulacion_pata_IzqAt() { return articulacionpatitaizqAtras; }
	GLfloat getarticulacion_pata_DerAt() { return articulacionpatitaderAtras; }
	GLfloat getarticulacion_colaCerca() { return articulacioncolaC; }
	GLfloat getarticulacion_colaLejos() { return articulacioncolaL; }

	~Window();
private: 
	GLFWwindow *mainWindow;
	GLint width, height;
	GLfloat rotax,rotay,rotaz, articulacion1, articulacion2, articulacion3, articulacion4, articulacion5, articulacion6, articulacion7, articulacion8, articulacionizqde, articulacionderde, articulacionizqAtras, articulacionderAtras, articulacioncuel, articulacioncolaC, articulacioncolaL, articulacionmusderde, articulacionmusdeAtras, articulacionmusizqde, articulacionmusizqAtras, articulacionpatitaderde, articulacionpatitaderAtras, articulacionpatitaizqAtras, articulacionpatitaizqdel;
	bool keys[1024];
	GLint bufferWidth, bufferHeight;
	GLfloat lastX;
	GLfloat lastY;
	GLfloat xChange;
	GLfloat yChange;
	bool mouseFirstMoved;
	void createCallbacks();
	static void ManejaTeclado(GLFWwindow* window, int key, int code, int action, int mode);
	static void ManejaMouse(GLFWwindow* window, double xPos, double yPos);
};

