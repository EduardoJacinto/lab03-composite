 #ifndef __ADD_HPP__
 #define __ADD_HPP__

 #include "base.hpp"
 
 class Add : public Base {

	private:
		Base* Left_op;
		Base* Right_op;
	public:

		Add(Base* left,Base* right) : Base() {
			Left_op = left;
			Right_op = right;
		}
		virtual double evaluate() { 
			return Left_op->evaluate() + Right_op->evaluate();
		} 
		
		virtual std::string stringify() {
			return "(" + Left_op->stringify() + "+" + Right_op->stringify() + ")";
			}		
	};



#endif
