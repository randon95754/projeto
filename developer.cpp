#include "developer.h"
#include <iostream>

void Developer::setProjectCount(int p) { projectCount = p; }
int Developer::getProjectCount() const { return projectCount; }

float Developer::calculateFinalSalary() {
    return baseSalary + (500 * projectCount);
}

void Developer::displayInfo() {
    std::cout << "ID: " << getId() << "\n";
    std::cout << "Nome: " << name << "\n";
    std::cout << "Tipo: Desenvolvedor\n";
    std::cout << "Projetos: " << projectCount << "\n";
    std::cout << "Salario base: " << baseSalary << "\n";
    std::cout << "Salario final: " << calculateFinalSalary() << "\n\n";
}
