#include "Department.h"

Department::Department()
{
}

Department::~Department()
{
}

void Department::SetDepartmentName(std::string name)
{
	_DepartmentName = name;
}

std::string Department::GetDepartmentName()
{
	return _DepartmentName;
}
