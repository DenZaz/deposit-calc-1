
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
