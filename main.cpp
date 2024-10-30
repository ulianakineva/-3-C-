
#include <iostream>
#include <iomanip>
#include <limits>
#include "Time.h"
#include "House.h"
#include "Employee.h"
#include "Gun.h"
#include <map>
#include <vector>

using namespace std;

int get_integer(const std::string& message) {
    int number;
    while (!(cin >> number)) {
        cout << message << endl;
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    }
    return number;
}


int main() {
    system("chcp 65001");
    cout << "Лабораторная номер 3" << endl;
    cout << "Вариант 6" << endl;

    int count;
    vector<Employee*> employees;

    cout << "Введите номер задания от 1 до 6. Введите 0, чтобы закончить." << endl;
    cin >> count;
    while (count != 0) {
        switch (count) {
            case 1: {
                cout << "Демонстрация работы класса Time:" << endl;

                Time time1(10);
                cout << "10 секунд:" << endl;
                time1.print();

                Time time2(10000);
                cout << "10000 секунд:" << endl;
                time2.print();

                Time time3(100000);
                cout << "100000 секунд:" << endl;
                time3.print();

                cout << "Введите количество секунд: ";
                int seconds = get_integer("Некорректный ввод. Попробуйте снова.");

                Time time(seconds);

                cout << "Введенное время: " << endl;
                time.print();
                break;
            }
            case 2: {
                cout << "Демонстрация работы класса House:" << endl;

                cout << "Описание дома: " << endl;


                House house1(1);
                house1.print();

                House house2(5);
                house2.print();

                House house3(23);
                house3.print();


                cout << "Введите количество этажей: ";
                int floors = get_integer("Некорректный ввод. Попробуйте снова.");
                House house(floors);
                house.print();
                break;
            }
            case 3: {
                string departmentName = "IT";

                Employee* boss = new Employee("Козлов", departmentName);
                boss->setManager(boss);


                Employee* employee1 = new Employee("Петров", departmentName, boss);
                Employee* employee2 = new Employee("Сидоров", departmentName, boss);


                boss->print();
                employee1->print();
                employee2->print();


                delete boss;
                delete employee1;
                delete employee2;


                break;
            }
            case 4: {
                string departmentName = "IT";

                Employee* boss = new Employee("Козлов", departmentName);
                boss->setManager(boss);

                Employee* employee1 = new Employee("Петров", departmentName, boss);
                Employee* employee2 = new Employee("Сидоров", departmentName, boss);

                boss->addEmployeeToDepartment(boss);
                boss->addEmployeeToDepartment(employee1);
                boss->addEmployeeToDepartment(employee2);

                boss->print();
                cout << "Сотрудники отдела " << departmentName << ":" << endl;
                for (auto employee : boss->getEmployeesInDepartment()) {
                    employee->print();
                }

                delete boss;
                delete employee1;
                delete employee2;

            }



            break;
            case 5: {
                cout << "Демонстрация работы класса House:" << endl;

                House house1(2);
                // house1.floors = 10;
                // Эта строчка будет вызывать ошибку, так как этажи это приватный атрибут и не может быть изменён вне класса
                house1.print();

                House house2(35);
                house2.print();

                House house3(91);
                house3.print();

                break;
            }
            case 6: {
                Gun gun(3);
                gun.print();

                for (int i = 0; i < 5; i++) {
                    gun.shoot();
                }

                gun.print();

            }
        default:
            cout << "Такого задания не задавали";
        break;
    }
    cout << "Введите номер задания от 1 до 6. Введите 0, чтобы закончить."<< endl;
    cin >> count;
}
return 0;
}





