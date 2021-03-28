#include <gtest/gtest.h>
#include "main.h"
class Testing_class : public ::testing::Test {};
TEST(Testing_class,And1){
	EXPECT_EQ(0,And(0,0));
}
TEST(Testing_class,And2){
	EXPECT_EQ(0,And(1,0));
}
TEST(Testing_class,And3){
	EXPECT_EQ(0, And(0,1));
}
TEST(Testing_class,And4){
	EXPECT_EQ(1, And(1,1));
}
TEST(Testing_class,And5){
	EXPECT_EQ(1, And(12,13));
}
TEST(Testing_class,production1){
	EXPECT_EQ(0, production(0,0));
}
TEST(Testing_class,production2){
	EXPECT_EQ(0, production(0,23));
}
TEST(Testing_class,production3){
	EXPECT_EQ(0, production(23,0));
}
TEST(Testing_class,production4){
	EXPECT_EQ(4, production(2,2));
}
