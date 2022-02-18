#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"

#include <cmath>

class Pow : public Base { 

 	private:
		Base* Left_op;
		Base* Right_op;
		double val;
	public:
		Pow(Base* left, Base* right) : Base() {
			Left_op = left;
			Right_op = right;
		}
		
		virtual double evaluate() { 
			val = pow(Left_op->evaluate(), Right_op->evaluate());
			return val;
		}
		virtual string stringify() {
			ostringstream out;
			out << "(" << Left_op->stringify() << "**" << Right_op->stringify() << ")";
			return out.str();
		}
	};
#endif
			
