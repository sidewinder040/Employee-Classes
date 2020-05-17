#pragma once
#include <string>
class Department
{
public:
	Department();
	~Department();

	void SetDepartmentName(std::string name);
	std::string GetDepartmentName();

private:
	int _DepartmentId;
	std::string _DepartmentName;
};



