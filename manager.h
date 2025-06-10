#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    float monthlyBonus;

public:
    void setMonthlyBonus(float b);
    float getMonthlyBonus() const;

    float calculateFinalSalary() override;
    void displayInfo() override;
};

#endif
