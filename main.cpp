#include <iostream>

using namespace std;

int calculateProfit(int deposit, int days) {
	float percent;
	if(deposit < 100000) {
		if(days <= 30) 
			percent = -0.1f;
		else if(days <= 120)
			percent = 0.02f;
		else if(days <= 240)
			percent = 0.06f;
		else
			percent = 0.12f;
	}
	else {
		if(days <= 30) 
			percent = -0.1f;
		else if(days <= 120)
			percent = 0.03f;
		else if(days <= 240)
			percent = 0.08f;
		else
			percent = 0.15f;
	}
	
	return (days / 365.0) * deposit * percent;
}

int verifyDays(int days) {
	if(days < 0) return 1;
	if(days > 365) return 2;
	return 0;
}

int verifyDeposit(int deposit) {
	return deposit >= 10000;
}

int main() {
	int deposit, days, profit;
	
	cout << "Введите размер вклада (минимум 10000): ";
	cin >> deposit;
	if(!verifyDeposit(deposit)) {		
		cout << "Размер вклада не должен быть меньше 10000" << endl;
		return 1;
	}
	
	cout << "Введите срок вклада (не более 365 дней): ";
	cin >> days;	
	
	switch(verifyDays(days)) {
	case 1:
		cout << "Срок не может быть отрицательным" << endl; 
		return 1;
	case 2:
		cout << "Срок должен быть не более 365 дней" << endl;
		return 1;
	}
	
	profit =  calculateProfit(deposit, days);
	cout << (profit < 0 ? "Штраф: " : "Доход: ") << profit << ". Сумма вклада: " << profit + deposit << endl;

	return 0;
}
