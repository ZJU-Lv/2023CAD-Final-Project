#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Controller {
public:
    static bool Initialize();
    static void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mode);
    static void Movement(float deltaTime);

private:
    static bool keys[1024];

public:
    static float yAngle, zAngle;
};