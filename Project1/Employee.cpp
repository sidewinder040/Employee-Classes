#include "Employee.h"

Employee::Employee::Employee(int id, std::string name, std::string department)
{
	_EmployeeId = id;
	_EmployeeName = name;
	_EmployeeDepartment = department;
}

Employee::Employee::~Employee()
{
}

void Employee::Employee::SetEmployeeId(int id)
{
	_EmployeeId = id;
}

int Employee::Employee::GetEmployeeId()
{
	return _EmployeeId;
}

void Employee::Employee::SetEmployeeName(std::string name)
{
	_EmployeeName = name;
}

std::string Employee::Employee::GetEmployeeName()
{
	//return std::string();
	return _EmployeeName;
}

void Employee::Employee::SetEmployeeDepartment(std::string department)
{
	_EmployeeDepartment = department;
}

std::string Employee::Employee::GetEmployeeDepartment()
{
	return _EmployeeDepartment;
}

void Employee::Employee::OutputEmployeeDetails()
{
	// \e[1m for bold, \e[0m for non-bold 
	std::cout << "EMPLOYEES DETAILS\n";
	std::cout << "ID:\t\t" << _EmployeeId << std::endl;
	std::cout << "Name:\t\t" << _EmployeeName << std::endl;
	std::cout << "Department:\t" << _EmployeeDepartment << std::endl;
}
