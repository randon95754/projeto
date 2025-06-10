#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"

class Developer : public Employee {
private:
    int projectCount;

public:
    void setProjectCount(int p);
    int getProjectCount() const;

    float calculateFinalSalary() override;
    void displayInfo() override;
};

#endif
