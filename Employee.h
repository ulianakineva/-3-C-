#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Employee {


public:

    Employee(const std::string& name, const std::string& department, Employee* manager = nullptr);

    std::string getName() const;
    std::string getDepartment() const;
    Employee* getManager() const;
    const std::vector<Employee*>& getEmployeesInDepartment() const { return employeesInDepartment; }

    void addEmployeeToDepartment(Employee* employee);


    void setManager(Employee* manager);

    std::string toString() const;


    void print() const;

private:
    string name;
    string department;
    Employee* manager;
    vector<Employee*> employeesInDepartment;

};



#endif // EMPLOYEE_H
