//very simple opengl starter code, this opens a window
#include "glad.h"
#include <GLFW/glfw3.h>

//window size
#define WIDTH 640
#define HEIGHT 480

GLFWwindow* win;

int main() {
  //init glfw which handles the window
	glfwInit();
	win = glfwCreateWindow(640, 480, "", NULL, NULL);
  //make the context current so that opengl uses this
  glfwMakeContextCurrent(win);
  //use glad to load opengl via glfw to make sure we get the latest version
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	glfwSwapInterval(1);

	while(!glfwWindowShouldClose(win)) {
    //poll inputs
    glfwPollEvents();
    //clear the color of the screen
    glClear(GL_COLOR_BUFFER_BIT);

    //swapping buffers makes the render appear on the screen
		glfwSwapBuffers(win);
	}
  //cleanup
	glfwTerminate();
}
