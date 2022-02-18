 #ifndef __ADD_TEST_HPP_
 #define __ADD_TEST_HPP_

 #include "gtest/gtest.h"
 #include "add.hpp" 
 #include "op.hpp" 
 #include "sub.hpp"

 TEST(AddTest, addPosNum) {
  Base* op1 = new Op(8);
  Base* op2 = new Op(4);
  Base* test = new Add(op1, op2);
  EXPECT_EQ(test->evaluate(), 12);
 }
 
 TEST(AddTest, addstring) {
    Base* op1 = new Op(4); 
    Base* op2 = new Op(6); 
    Base* test = new Add(op1,op2);
    EXPECT_TRUE(test->stringify() == "(4+6)"); 
 } 

 TEST(AddTest, addNegNumandDecimal) {
  Base* Op1 = new Op(-4.5); 
  Base* Op2 = new Op(-3); 
  Base* test = new Add(Op1, Op2); 
  EXPECT_DOUBLE_EQ(test->evaluate(), -4.5 + -3);
 } 
TEST(AddTest, addingbyzero) {
 Base* Op1 = new Op(4);
 Base* Op2 = new Op(0);
 Base* test = new Add(Op1, Op2);
 EXPECT_DOUBLE_EQ(test->evaluate(), 4);
}
TEST(AddTest, addandsub) {
 Base* Op1 = new Op(5);
 Base* Op2 = new Op(2);
 Base* sub1 = new Sub(Op1, Op2);
 Base* Op3 = new Op(4);
 Base* test = new Add(Op3, sub1);
 EXPECT_DOUBLE_EQ(test->evaluate(), 7);
}

#endif
