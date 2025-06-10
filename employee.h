#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    float baseSalary;

private:
    int id;

public:
    void setName(const std::string& n);
    std::string getName() const;

    void setBaseSalary(float s);
    float getBaseSalary() const;

    void setId(int i);
    int getId() const;

    virtual void displayInfo();
    virtual float calculateFinalSalary() = 0;

    virtual ~Employee() {}
};

#endif
