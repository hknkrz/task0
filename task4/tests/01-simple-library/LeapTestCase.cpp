//
// Created by akhtyamovpavel on 5/1/20.
//

#include "LeapTestCase.h"

#include <Functions.h>


TEST(LeapTestCase, LeapTests) {
    ASSERT_ANY_THROW(IsLeap(-12));
    EXPECT_TRUE(IsLeap(400));
    EXPECT_FALSE(IsLeap(100));
    EXPECT_TRUE(IsLeap(40));
    EXPECT_FALSE(IsLeap(13));
}



TEST(LeapTestCase, GetMonthDaysTests) {
    EXPECT_EQ(29,GetMonthDays(400,2));
    EXPECT_EQ(28,GetMonthDays(1,2));
    EXPECT_EQ(30,GetMonthDays(400,4));
    EXPECT_EQ(30,GetMonthDays(400,11));
    EXPECT_EQ(31,GetMonthDays(400,5));
    ASSERT_ANY_THROW(GetMonthDays(400, 13));
    ASSERT_ANY_THROW(GetMonthDays(400, -4));
}





