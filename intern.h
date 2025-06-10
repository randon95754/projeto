#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"

class Intern : public Employee {
private:
    int hoursWorked;

public:
    void setHoursWorked(int h);
    int getHoursWorked() const;

    float calculateFinalSalary() override;
    void displayInfo() override;
};

#endif