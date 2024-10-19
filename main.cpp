#define GLFW_INCLUDE_VULKAN // Get GLFW to handle vulkan
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "engine/VulkanEngine.h"

int main() {
    VulkanEngine engine;

    try {
        engine.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}