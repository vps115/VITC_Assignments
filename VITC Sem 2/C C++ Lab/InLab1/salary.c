#include <stdio.h>

int main() {
    // Declare variables
    float basic_salary, HRA, DA, net_salary;
    int employee_id;
    printf("\n");

    // Read employee id
    scanf("%d", &employee_id);
    // Read basic salary
    scanf("%f", &basic_salary);

    // Calculating HRA, DA and Net Salary
    HRA = 0.12 * basic_salary;
    DA = 0.18 * basic_salary;
    net_salary = basic_salary + HRA + DA;

    // Print Employee Id and Net Salary
    printf("\nEmployee ID: %d\n", employee_id);
    printf("Net Salary: %.2f\n\n", net_salary);

    return 0;
}