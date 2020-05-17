#pragma once
#include <iostream>
#include <string>


class Employee
{
public:
	Employee(int id, std::string name, std::string department);
	~Employee();
		
	// Employee ID Setter/Getter
	void SetEmployeeId(int id);
	int GetEmployeeId();

	// Employee Name Setter/Getter
	void SetEmployeeName(std::string name);
	std::string GetEmployeeName();

	// Employee Department Set/Get
	void SetEmployeeDepartment(std::string department);
	std::string GetEmployeeDepartment();

	void OutputEmployeeDetails();

private:
	int			_EmployeeId = 0;
	std::string	_EmployeeName;
	std::string _EmployeeDepartment;
};

//Employee::Employee()
//{
//	
//}
//
//Employee::~Employee()
//{
//}

