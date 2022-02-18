#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"
#include "add.hpp"
#include "op.hpp"
#include <math.h>

TEST(PowTest, twoPosNum) { 
 Base* op1 = new Op(2);
 Base* op2 = new Op(3);
 Base* test = new Pow(op1,op2);
 EXPECT_DOUBLE_EQ(test->evaluate(), pow(2,3));
  }

TEST(PowTest, zeroBase) {
	Base* op1 = new Op(0); 
	Base* op2 = new Op(2);
	Base* test = new Pow(op1,op2);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(PowTest, PowString) {
	Base* op1 = new Op(4);
	Base* op2 = new Op(3);
	string res = "(4**3)";
	Base* test = new Pow(op1,op2);
	EXPECT_EQ(test->stringify(),res);
}

TEST(PowTest, AddandPow) {
	Base* op1 = new Op(5);
	Base* op2 = new Op(2);
	Base* test = new Pow(op1,op2);
	Base* op3 = new Op(4);
	Base* test2 = new Add(test,op3);
	EXPECT_EQ(test2->evaluate(),29);
}

TEST(PowTest, NegBase) { 
	Base* op1 = new Op(-2);
	Base* op2 = new Op(3);
	Base* test = new Pow(op1,op2);
	EXPECT_EQ(test->evaluate(), -8);
}

TEST(PowTest, decimalBase) {
	Base* op1 = new Op(1.5);
	Base* op2 = new Op(2);
	Base* test = new Pow(op1,op2);
	EXPECT_EQ(test->evaluate(),2.25);
}

#endif
