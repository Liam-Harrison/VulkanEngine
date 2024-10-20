#pragma once

#define GLFW_INCLUDE_VULKAN // Get GLFW to handle vulkan
#include <GLFW/glfw3.h>
#include <cstdint>
#include <optional>

struct QueueFamilyIndices
{
	std::optional<uint32_t> graphicsFamily;
	std::optional<uint32_t> presentFamily;

	bool isComplete()
	{
		return graphicsFamily.has_value() && presentFamily.has_value();
	}
};