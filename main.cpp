#include <iostream>

using namespace std;

int verifyInput(int deposit, int days) {
	if(days < 0) return 1;
	if(days > 365) return 2;
	if(deposit < 10000) return 3;
	return 0;
}

int main() {
	int deposit, days;
	cout << "Введите размер вклада (минимум 10000): ";
	cin >> deposit;
	cout << "Введите срок вклада (не более 365 дней): ";
	cin >> days;
	
	int verifResult = verifyInput(deposit, days);
	switch(verifResult) {
	case 1:
		cout << "Срок не может быть отрицательным" << endl; 
		return 1;
	case 2:
		cout << "Срок должен быть не более 365 дней" << endl;
		return 2;
	case 3:
		cout << "Размер вклада не должен быть меньше 10000" << endl;
		return 3;
	}
	

	return 0;
}
