#include <stdio.h>
#include <string.h>

// Structure definition for Employee
struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// Function to initialize the fields of Employee
void emp_init(struct Employee* e, const char* firstName, const char* lastName, double monthlySalary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = monthlySalary;
}

// Function to set the salary of an Employee
void set_salary(struct Employee* e, double sal) {
    e->monthlySalary = sal;
}

// Function to display the details of an Employee
void emp_display(struct Employee* e) {
    printf("Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: $%.2f\n", e->monthlySalary);
}

// Function to calculate yearly salary
double yearlySalary(struct Employee* e) {
    return e->monthlySalary * 12;
}

// Function to give a raise to an Employee
void giveRaise(struct Employee* e, double raisePercentage) {
    e->monthlySalary *= (1 + raisePercentage / 100);
}

int main() {
    // Creating employee objects
    struct Employee emp1, emp2;

    // Initializing employee details
    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Jane", "Smith", 6000.0);

    // Displaying yearly salary before raise
    printf("Yearly Salary before raise:\n");
    printf("Employee 1: $%.2f\n", yearlySalary(&emp1));
    printf("Employee 2: $%.2f\n", yearlySalary(&emp2));

    // Giving a 10% raise
    giveRaise(&emp1, 10.0);
    giveRaise(&emp2, 10.0);

    // Displaying yearly salary after raise
    printf("\nYearly Salary after 10%% raise:\n");
    printf("Employee 1: $%.2f\n", yearlySalary(&emp1));
    printf("Employee 2: $%.2f\n", yearlySalary(&emp2));

    return 0;
}
