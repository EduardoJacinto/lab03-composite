#ifndef __SUB_TEST_HPP_
#define __SUB_TEST_HPP_

#include "gtest/gtest.h"
#include "op.hpp"
#include "sub.hpp"

TEST(SubTest, SubPosNum) {
	Base* Op1 = new Op(8); 
	Base* Op2 = new Op(5.2);
	Base* test = new Sub(Op1, Op2); 
	EXPECT_DOUBLE_EQ(test->evaluate(), 8 - 5.2);
}

TEST(SubTest, SubNegNum) {
	Base* Op1 = new Op(10);
	Base* Op2 = new Op(-5);
	Base* test = new Sub(Op1, Op2);
	EXPECT_DOUBLE_EQ(test->evaluate(), 10 - -5);
}

TEST(SubTest, SubString) {
	Base* Op1 = new Op(8);
	Base* Op2 = new Op(2.2);
	Base* test = new Sub(Op1, Op2);
	EXPECT_TRUE(test->stringify() == "(8-2.2)");
}

TEST(SubTest, SubTwoNeg) {
	Base* Op1 = new Op(-10);
	Base* Op2 = new Op(-5);
	Base* test = new Sub(Op1, Op2);
	EXPECT_DOUBLE_EQ(test->evaluate(), -10 - -5);
}

#endif
