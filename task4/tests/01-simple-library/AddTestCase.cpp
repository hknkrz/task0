//
// Created by akhtyamovpavel on 5/1/20.
//

#include "AddTestCase.h"
#include "Functions.h"

TEST(AddTestCase, addTests) {
    EXPECT_EQ(2,Add(1,1));
    EXPECT_EQ(-2,Add(3,-5));

}