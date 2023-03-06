#pragma once
class employee {
protected:
	float weekspay;
	int daysVacation;
	float  healthBenefits;
public:
	//employee();
	//employee(float pay, int days);
	virtual float getWeeksPay() { return weekspay; }
	virtual int getDaysVacay() { return daysVacation; }
	virtual float getHealthBenefits() { return healthBenefits; }



};