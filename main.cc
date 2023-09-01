#include <iostream>

/**
 * @brief Muestra información sobre Encapsulación.
 */
void showEncapsulation() {
    std::cout << "=== Encapsulación ===\n";
    std::cout << "La encapsulación agrupa datos y métodos que operan sobre esos datos.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "class Circle { private: double radius; public: void setRadius(double r) { radius = r; } double getRadius() { return radius; } };\n\n";
}

/**
 * @brief Muestra información sobre Herencia.
 */
void showInheritance() {
    std::cout << "=== Herencia ===\n";
    std::cout << "Una clase puede heredar atributos y métodos de otra clase.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "class Animal { public: void speak() {} };\n";
    std::cout << "class Dog : public Animal { public: void speak() { std::cout << \"Woof\"; } };\n\n";
}

/**
 * @brief Muestra información sobre Polimorfismo.
 */
void showPolymorphism() {
    std::cout << "=== Polimorfismo ===\n";
    std::cout << "Objetos de diferentes clases pueden ser tratados como objetos de una clase común.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "Animal* animal = new Dog();\n";
    std::cout << "animal->speak(); // Output: Woof\n\n";
}

/**
 * @brief Muestra información sobre Abstracción.
 */
void showAbstraction() {
    std::cout << "=== Abstracción ===\n";
    std::cout << "Abstracción se refiere a ocultar los detalles de implementación y mostrar solo las características esenciales.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "class Shape { public: virtual void draw() = 0; };\n\n";
}

/**
 * @brief Muestra información sobre Asociación.
 */
void showAssociation() {
    std::cout << "=== Asociación ===\n";
    std::cout << "La asociación representa una relación entre dos o más objetos.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "class Engine { }; class Car { private: Engine engine; };\n\n";
}

/**
 * @brief Muestra información sobre Agregación.
 */
void showAggregation() {
    std::cout << "=== Agregación ===\n";
    std::cout << "Es una relación entre clases donde un objeto contiene a otros, pero no es responsable de su ciclo de vida.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "class Wheel { }; class Car { private: Wheel* wheel; };\n\n";
}

/**
 * @brief Muestra información sobre Composición.
 */
void showComposition() {
    std::cout << "=== Composición ===\n";
    std::cout << "Es una relación entre clases donde un objeto es responsable del ciclo de vida de los objetos contenidos.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "class Engine { }; class Car { private: Engine engine; };\n\n";
}

/**
 * @brief Muestra información sobre Herencia Múltiple.
 */
void showMultipleInheritance() {
    std::cout << "=== Herencia Múltiple ===\n";
    std::cout << "Una clase puede heredar de más de una clase.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "class A { }; class B { }; class C : public A, public B { };\n\n";
}

/**
 * @brief Muestra información sobre Templates.
 */
void showTemplates() {
    std::cout << "=== Templates ===\n";
    std::cout << "Permite a las clases y funciones operar con tipos genéricos.\n";
    std::cout << "Ejemplo:\n";
    std::cout << "template<typename T> T add(T a, T b) { return a + b; }\n\n";
}

int main() {
    int choice;

    do {
        std::cout << "Seleccione un concepto de POO para aprender más:\n";
        std::cout << "1. Encapsulación\n";
        std::cout << "2. Herencia\n";
        std::cout << "3. Polimorfismo\n";
        std::cout << "4. Abstracción\n";
        std::cout << "5. Asociación\n";
        std::cout << "6. Agregación\n";
        std::cout << "7. Composición\n";
        std::cout << "8. Herencia Múltiple\n";
        std::cout << "9. Templates\n";
        std::cout << "10. Salir\n";
        std::cout << "Opción: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                showEncapsulation();
                break;
            case 2:
                showInheritance();
                break;
            case 3:
                showPolymorphism();
                break;
            case 4:
                showAbstraction();
                break;
            case 5:
                showAssociation();
                break;
            case 6:
                showAggregation();
                break;
            case 7:
                showComposition();
                break;
            case 8:
                showMultipleInheritance();
                break;
            case 9:
                showTemplates();
                break;
            case 10:
                std::cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }

    } while (choice != 10);

    return 0;
}
