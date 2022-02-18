#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"  

 class Sub : public Base { 
	
	private: 
		Base* Left_op;
		Base* Right_op;
	public: 
		Sub(Base* left, Base* right) : Base() {
			Left_op = left; 
			Right_op = right; 
		} 
		
		virtual double evaluate() {
			return Left_op->evaluate() - Right_op->evaluate();
		}
		virtual string stringify() {
			ostringstream out;
			out << "(" << Left_op->stringify() << "-" << Right_op->stringify() << ")";
			return out.str();
		}
};
#endif
