// 1. "Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee* other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee."

#include<iostream>
using namespace std;

class Employee {
// private:
public:
    int id;
    float salary;

    Employee(int id, float salary) {
        this->id = id;
        this->salary = salary;
    }

    void compareSalary(const Employee &obj) {
        if(this->salary == obj.salary) {
            cout << "\nSalaries are equal" << endl;
        } else {
            cout << "\nSalaries are not equal" << endl;
            this->salary = obj.salary;
        }
    }

    void compareSalary(Employee *obj) {
        if(this->salary == obj->salary) {
            cout << "\nSalaries are equal" << endl;
        } else {
            cout << "\nSalaries are not equal" << endl;
            obj->salary = this->salary;
        }
    }
};

int main() {
    Employee e1(1, 1000);
    Employee e2(2, 2000);

    cout << e1.salary << " ";
    cout << e2.salary;

    // e1.compareSalary(e2);
    e1.compareSalary(&e2);

    cout << e1.salary << " ";
    cout << e2.salary;

    return 0;
}