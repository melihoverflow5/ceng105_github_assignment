#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee{
private:
    string name;
    int employedYears;
    double salary, bonus;

    void calculateBonus() {
        if(employedYears <= 5)
            bonus = 0;
        else if(employedYears <= 10)
            bonus = salary * 0.05;
        else if(employedYears <= 15)
            bonus = salary * 0.1;
        else if(employedYears <= 20)
            bonus = salary * 0.15;
        else
            bonus = salary * 0.20;
    }
public:
    void setName(string newName) {
        name = newName;
    }
    void setYears(int year) {
        employedYears = year;
    }
    void setSalary(double newSalary) {
        salary = newSalary;
    }
    void print() {
        calculateBonus();
        cout << setprecision(0) << fixed;
        cout << setw(10) << name << setw(10) << employedYears << setw(10) << salary << setw(10) << bonus << endl;
    }
};


int main() {
    Employee employee1, employee2, employee3, employee4, employee5;
    Employee employees[5] = {employee1, employee2, employee3, employee4, employee5};
    string newName;
    int year, i;
    double newSalary;

    for (i = 0; i < 5; i++) {
        cout << "Enter employee name, employed years and salary:";
        cin >> newName >> year >> newSalary;
        employees[i].setName(newName);
        employees[i].setYears(year);
        employees[i].setSalary(newSalary);
    }
    cout << endl << setw(10) <<"Name" << setw(10) << "Years" << setw(10) << "Salary" << setw(10) << "Bonus" << endl;
    for (i = 0; i < 5; i++) {
        employees[i].print();
    }
    return 0;
}