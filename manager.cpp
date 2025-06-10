#include "manager.h"
#include <iostream>

void Manager::setMonthlyBonus(float b) { monthlyBonus = b; }
float Manager::getMonthlyBonus() const { return monthlyBonus; }

float Manager::calculateFinalSalary() {
    return baseSalary + monthlyBonus;
}

void Manager::displayInfo() {
    std::cout << "ID: " << getId() << "\n";
    std::cout << "Nome: " << name << "\n";
    std::cout << "Tipo: Gerente\n";
    std::cout << "Bonus: " << monthlyBonus << "\n";
    std::cout << "Salario base: " << baseSalary << "\n";
    std::cout << "Salario final: " << calculateFinalSalary() << "\n\n";
}