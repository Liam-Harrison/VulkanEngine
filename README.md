# VulkanEngine
 An experiment in building a modern game engine based on Vulkan.

## Requirements
- Visual Studio
- [Vulkan SDK](https://vulkan.lunarg.com/)
- [GLFW Precompiled Binaries](https://www.glfw.org/download.html)

## Setup
- `git clone https://github.com/Liam-Harrison/VulkanEngine.git`
- Open solution in Visual Studio
- View / Terminal (Developer PowerShell)
  - `vcpkg integrate install`
- Open Project Properties
  - C/C++
    - General
       - Change `additonal Include Directories` to point to your Vulkan SDK and GLFW include folders.
  - Linker
    - General
      - Change `Additonal Library Directories` to point to your Vulkan SDK and GLFW library folders.
