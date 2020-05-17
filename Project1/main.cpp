#include <iostream>
#include "Employee.h"

int main()
{
    std::cout << "Employees\n";
    std::cout << "---------\n\n";

    Employee emp(1, "Mark Crouch", "QC");
    emp.OutputEmployeeDetails();

    Employee emp2(2, "Roger Davis", "Finance");
    emp2.OutputEmployeeDetails();
    return 0;
}
