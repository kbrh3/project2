#include "non-professional.h"
using namespace std;

nonprofessional::nonprofessional(float hr, float wrkd) {

	perHour = hr;
	hoursWorked = wrkd;
	weekspay = perHour * wrkd;
	hourstodate = wrkd;
	healthBenefits = weekspay/15;
	//cumulative
	daysVacation = 0;
	//one day per 200 hours worked
	

}
void nonprofessional::addWeek(int hours) {
	hourstodate = hourstodate + hours;
	//if (hours to date) health benefits
	weekspay = hours * perHour;



}