#pragma once

#define GLFW_INCLUDE_VULKAN // Get GLFW to handle vulkan
#include <GLFW/glfw3.h>
#include <vector>

#include "QueueFamilyIndices.h"

class VulkanEngine
{
public:
    void run();

private:
    void initWindow();
    void initVulkan();
    void initPhysicalDevice();
    void mainLoop();
    void cleanup();

    void createInstance();
    bool checkValidationLayerSupport();
    std::vector<const char*> getRequiredExtensions();

    void createSurface();
    void createLogicalDevice();

    void createDebugMessenger();
    void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);

    QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);
    int getDeviceScore(VkPhysicalDevice device);

private:
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;

    const std::vector<const char*> validationLayers =
    {
        "VK_LAYER_KHRONOS_validation"
    };

#ifdef NDEBUG
    const bool enableValidationLayers = false;
#else
    const bool enableValidationLayers = true;
#endif

    GLFWwindow* window;
    VkInstance instance;

    VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
    VkDevice device;
    VkQueue graphicsQueue;
    VkQueue presentQueue;
    VkSurfaceKHR surface;

    VkDebugUtilsMessengerEXT debugMessenger;
};