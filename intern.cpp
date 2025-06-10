#include "intern.h"
#include <iostream>

void Intern::setHoursWorked(int h) { hoursWorked = h; }
int Intern::getHoursWorked() const { return hoursWorked; }

float Intern::calculateFinalSalary() {
    return baseSalary * (hoursWorked / 160.0f);
}

void Intern::displayInfo() {
    std::cout << "ID: " << getId() << "\n";
    std::cout << "Nome: " << name << "\n";
    std::cout << "Tipo: Estagiario\n";
    std::cout << "Horas trabalhadas: " << hoursWorked << "\n";
    std::cout << "Salario base: " << baseSalary << "\n";
    std::cout << "Salario final: " << calculateFinalSalary() << "\n\n";
}