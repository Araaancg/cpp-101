#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

// Función para generar un vector de números enteros aleatorios
std::vector<int> generateRandomVector(int size) {
    std::vector<int> randomVector;

    // Inicializar la semilla para la generación de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < size; i++) {
        // Generar números enteros aleatorios en el rango [0, size - 1]
        int randomNumber = std::rand() % size;
        randomVector.push_back(randomNumber);
    }

    return randomVector;
}

int main() {
    int size;

    // Solicitar al usuario el tamaño del vector
    std::cout << "Input vector's size: ";
    std::cin >> size;

    // Generar el vector de números enteros aleatorios
    std::vector<int> randomVector = generateRandomVector(size);

    // Imprimir el vector generado
    std::cout << "Generated vector:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << randomVector[i] << " ";
    }

    return 0;
}

