#include "employee.h"
#include <iostream>

void Employee::setName(const std::string& n) { name = n; }
std::string Employee::getName() const { return name; }

void Employee::setBaseSalary(float s) { baseSalary = s; }
float Employee::getBaseSalary() const { return baseSalary; }

void Employee::setId(int i) { id = i; }
int Employee::getId() const { return id; }

void Employee::displayInfo() {
    std::cout << "ID: " << id << "\n";
    std::cout << "Nome: " << name << "\n";
    std::cout << "Salario base: " << baseSalary << "\n";
}