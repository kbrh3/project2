#include "Professional.h"
using namespace std;

professional::professional(float sal) {
	salary = sal;
	weekspay = sal / 52.1428571;
	daysVacation = 14;
	healthBenefits = salary/10;
}