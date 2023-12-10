# CMakeList.txt: proyecto de CMake para test-1-cmake, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (test-1-cmake "test-1-cmake.cpp" "test-1-cmake.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test-1-cmake PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
