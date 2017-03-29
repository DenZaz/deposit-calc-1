#include <iostream>
#include "deposit.h"

using namespace std;

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
