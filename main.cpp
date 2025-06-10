#include "developer.h"
#include "manager.h"
#include "intern.h"
#include <iostream>
using namespace std;

int main() {
    Employee* employees[10];
    int total = 0;

    while (total < 3) {
        int type;
        cout << "Digite o tipo de funcionario (1=Desenvolvedor, 2=Gerente, 3=Estagiario): ";
        cin >> type;

        string name;
        int id;
        float baseSalary;

        cout << "Nome: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Salario base: ";
        cin >> baseSalary;

        if (type == 1) {
            int projects;
            cout << "Quantidade de projetos: ";
            cin >> projects;

            Developer* dev = new Developer();
            dev->setName(name);
            dev->setId(id);
            dev->setBaseSalary(baseSalary);
            dev->setProjectCount(projects);
            employees[total++] = dev;
        } else if (type == 2) {
            float bonus;
            cout << "Bonus mensal: ";
            cin >> bonus;

            Manager* mgr = new Manager();
            mgr->setName(name);
            mgr->setId(id);
            mgr->setBaseSalary(baseSalary);
            mgr->setMonthlyBonus(bonus);
            employees[total++] = mgr;
        } else if (type == 3) {
            int hours;
            cout << "Horas trabalhadas: ";
            cin >> hours;

            Intern* intern = new Intern();
            intern->setName(name);
            intern->setId(id);
            intern->setBaseSalary(baseSalary);
            intern->setHoursWorked(hours);
            employees[total++] = intern;
        } else {
            cout << "Tipo invalido." << endl;
        }
    }

    cout << "\n--- INFORMACOES DOS FUNCIONARIOS ---\n";
    for (int i = 0; i < total; i++) {
        employees[i]->displayInfo();
        delete employees[i];
    }

    return 0;
}
