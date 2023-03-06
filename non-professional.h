#pragma once
#include "Employee.h"
class nonprofessional : public employee{
	float perHour;
	float hoursWorked;
	float hourstodate;
	;

	nonprofessional(float hr, float wrkd);
	void addWeek(int hours);
	




};