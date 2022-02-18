#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Op : public Base {
    private:
	double value;
    public:
        Op(double value) : Base() {
		this->value = value;
	}

        virtual double evaluate() {
		 return value;
	}
        virtual string stringify() { 
		ostringstream out;
		out << value;
		return out.str();
	}
};



#endif //__OP_HPP__
