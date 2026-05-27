#include "gmock/gmock.h"
#include "Cal.cpp"

#한글 테스트

TEST(CalTest, MinusTest) {
	Cal* cal = new Cal();

	EXPECT_EQ(2, cal->calMinus(4, 2));
}

int main(){
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}