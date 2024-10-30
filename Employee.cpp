#include "Employee.h"
#include <vector>
#include <iostream>
using namespace std;

Employee::Employee(const string& name, const std::string& department, Employee* manager)
    : name(name), department(department), manager(manager) {}
string Employee::getName() const { return name; }
string Employee::getDepartment() const { return department; }
Employee* Employee::getManager() const { return manager; }


void Employee::addEmployeeToDepartment(Employee* employee) {
    employeesInDepartment.push_back(employee);
}


void Employee::setManager(Employee* manager) { this->manager = manager; }



string Employee::toString() const {
    if (manager == nullptr) {
        return name + " работает в отделе " + department;
    } else if (this == manager) {
        return name + " начальник отдела " + department;
    } else {
        return name + " работает в отделе " + department + ", начальник которого " + manager->getName();
    }
}

void Employee::print() const {
    std::cout << toString() << std::endl;
}

