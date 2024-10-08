// Actividad 10 - Suma Recursiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>

int sumaRecursiva(int n) {
    if (n <= 9)  // Caso base: si n es un solo dígito, devolverlo
        return n;
    else
        return sumaRecursiva(n / 10) + (n % 10);  // Sumar el último dígito y llamar recursivamente
}

int main() {
    int numero;
    std::cout << "Introduce un numero: ";
    std::cin >> numero;

    std::cout << "Suma recursiva de los digitos: " << sumaRecursiva(numero) << std::endl;
    return 0;
}

