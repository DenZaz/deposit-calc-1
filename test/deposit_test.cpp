#include "deposit.h"
#include "ctest.h"

CTEST(simpleSuite, simpleTest) {
	int res = verifyDays(100);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}

CTEST(depositSuite, profitTest) {
	int deposit;
	
	deposit = 99999;
	ASSERT_DBL_NEAR_TOL(-821, calculateProfit(deposit, 30), 1);
	ASSERT_DBL_NEAR_TOL(657, calculateProfit(deposit, 120), 1);
	ASSERT_DBL_NEAR_TOL(3945, calculateProfit(deposit, 240), 1);
	ASSERT_DBL_NEAR_TOL(9862, calculateProfit(deposit, 300), 1);
	
	deposit = 365000;
	ASSERT_DBL_NEAR_TOL(-3000, calculateProfit(deposit, 30), 1);
	ASSERT_DBL_NEAR_TOL(3600, calculateProfit(deposit, 120), 1);
	ASSERT_DBL_NEAR_TOL(19200, calculateProfit(deposit, 240), 1);
	ASSERT_DBL_NEAR_TOL(45000, calculateProfit(deposit, 300), 1);
}
