#include <gtest/gtest.h>
#include "main.h"
class Testing_class : public ::testing::Test {};

TEST(Testing_class,And){
	EXPECT_EQ(1, And(1,1));
}

TEST(Testing_class,production4){
	EXPECT_EQ(4, production(2,2));
}
