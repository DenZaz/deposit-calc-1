#include "deposit.h"
#include "ctest.h"

CTEST(validationSuite, validationDays) {
	ASSERT_EQUAL(1, verifyDays(-1000000));
	ASSERT_EQUAL(1, verifyDays(-1));
	
	ASSERT_EQUAL(0, verifyDays(0));
	ASSERT_EQUAL(0, verifyDays(100));
	ASSERT_EQUAL(0, verifyDays(365));
	
	ASSERT_EQUAL(2, verifyDays(366));
	ASSERT_EQUAL(2, verifyDays(1000000));
}

CTEST(validationSuite, validationDeposit) {
	ASSERT_FALSE(verifyDeposit(0));
	ASSERT_FALSE(verifyDeposit(9999));
	
	ASSERT_TRUE(verifyDeposit(10000));
	ASSERT_TRUE(verifyDeposit(99999999));
}
