/*

AUTHORS: liad ben moshe


*/
#include <iostream>
#include <complex>
#include <exception>
#include "solver.hpp"

using namespace std;
namespace solver {



	double solve(const RealVariable& r1) {
		if (r1.a == 0) {
			
			return ((-1)*r1.c / r1.b);
		}
		else {
			double discriminant = r1.b * r1.b - (4 * r1.a * r1.c);
			if (discriminant > 0) {
				double x1 = (-r1.b + sqrt(discriminant)) / (2 * r1.a);
				cout<<"  also: "<<(-r1.b - sqrt(discriminant)) / (2 * r1.a)<<"  and : ";
				return x1;
				
			}

			else if (discriminant == 0) {
				
				double x1 = (-r1.b + sqrt(discriminant)) / (2 * r1.a);
				return x1;
			}

			else {
				throw runtime_error("no solution in Rationales");
			}
		}
			
	}
	complex<double> solve(const ComplexVariable& c1) {
		complex<double>c2=0.0;
		complex<double>c3=-1.0;

		if (c1.a ==0.0) {
			

			return (c3 * c1.c / c1.b);
		}
		else {
			complex<double> discriminant = c1.b * c1.b - (4. * c1.a * c1.c);

			complex<double> x1 = (-c1.b + sqrt(discriminant)) / (2. * c1.a);
			cout << "  also: " << (-c1.b - sqrt(discriminant)) / (2. * c1.a) << "  and : ";
			return x1;
		}

			

			
	}



	const RealVariable operator*(double other, const RealVariable& real) {//(         *          )
		RealVariable r1;
		if (real.a != 0)
		{
			r1.a = real.a * other;
		}
		if (real.b != 0) {
			r1.b = real.b * other;
		}
		else
			r1.b = other;
		if (real.c != 0) {
			r1.c = real.c * other;
		}
		return r1;
	
	}
	const RealVariable RealVariable::operator*(double other) const {
		RealVariable r1;
		if (this->a != 0) {
			r1.a = this->a * other;
		}
		if (this->b != 0) {
			r1.b = this->b * other;
		}
		else
			r1.b = other;
		if (this->c != 0) {
			r1.c = this->c * other;
		}
		return r1;


	}
	const RealVariable operator*(const RealVariable& real, const RealVariable& real2) {
		RealVariable r1;
		r1.a = real.b * real2.b;
		r1.b = (real.b * real2.c) + (real.c * real2.b);
		r1.c = real.c * real2.c;
		return r1;

	}

	const RealVariable operator-(double other, const RealVariable& real) {// (         -          )
		RealVariable r1;
		r1.a = (-1)*real.a;
		r1.b = (-1)*real.b;
		r1.c = other - real.c;
		return r1;

	}
	const RealVariable RealVariable::operator-(double other) const {
		RealVariable r1;
		r1.a = this->a;
		r1.b = this->b;
		r1.c = this->c - other;
		return r1;
	}
	const RealVariable operator-(const RealVariable& real, const RealVariable& real2) {
		RealVariable r1;
		r1.a = real.a - real2.a;
		r1.b = real.b - real2.b;
		r1.c = real.c - real2.c;
		return r1;
	}


	const RealVariable operator+(double other, const RealVariable& real) {// (       +       )
		RealVariable r1;
		r1.a = real.a;
		r1.b = real.b;
		r1.c = other + real.c;
		return r1;
	}
	const RealVariable RealVariable::operator+(double other) const {
		RealVariable r1;
		r1.a = this->a;
		r1.b = this->b;
		r1.c = this->c + other;
		return r1;
	}
	const RealVariable operator+(const RealVariable& real, const RealVariable& real2) {
		RealVariable r1;
		r1.a = real.a + real2.a;
		r1.b = real.b + real2.b;
		r1.c = real.c + real2.c;
		return r1;
	}

	const RealVariable operator/(double other, const RealVariable& real) {// (      /      )
		


	}
	const RealVariable RealVariable::operator/(double other) const {
		RealVariable r1;
		r1.a = this->a / other;
		r1.b = this->b / other;
		r1.c = this->c / other;
		return r1;
	}
	const RealVariable operator/(const RealVariable& real, const RealVariable& real2) {
		return RealVariable(4.4);
	}

	const RealVariable RealVariable::operator==(double other) const {// (         ==         )
		RealVariable r1;
		r1.a = this->a;
		r1.b = this->b;
		r1.c = this->c - other;
		return r1;

	}
	const RealVariable RealVariable::operator==(const RealVariable& real) const {
		RealVariable r1;
		r1.a = this->a-real.a;
		r1.b = this->b-real.b;
		r1.c = this->c-real.c;
		return r1;
	}
	const RealVariable operator==(double other, const RealVariable& real2) {
		RealVariable r1;
		r1.a = real2.a;
		r1.b = real2.b;
		r1.c = real2.c- other;
		return r1;
	}

	const RealVariable RealVariable::operator^(double other) const { //  (             ^             )
		if (other > 2 || other<0) {
			throw runtime_error("X^2 is the maximom");
		}
		RealVariable r1;
		r1.a = 1;
		r1.b = 0;
		r1.c = this->c;
		return r1;

	}


	///////////////////////ComplexVariable///////////////////////


	const ComplexVariable operator*(complex<double> other, const ComplexVariable& real) {//(         *          )
		ComplexVariable c1;
		
		c1.a = real.a * other;
		c1.b = real.b * other;
		c1.c = real.c * other;
		return c1;

		
	}
	const ComplexVariable ComplexVariable::operator*(complex<double> other) const {
		ComplexVariable c1;
		
		c1.a = this->a * other;
		c1.b = this->b * other;
		c1.c = this->c * other;
		return c1;
		

	}
	const ComplexVariable operator*(const ComplexVariable& real, const ComplexVariable& real2) {
		ComplexVariable c1;
		c1.a = real.b * real2.b;
		c1.b = (real.b * real2.c) + (real.c * real2.b);
		c1.c = real.c * real2.c;
		return c1;
	}


	const ComplexVariable operator+(complex<double> other, const ComplexVariable& real) {//(         +          )
		ComplexVariable c1;
		c1.a = real.a;
		c1.b = real.b;
		c1.c = other + real.c;
		return c1;
	}
	const ComplexVariable ComplexVariable::operator+(complex<double> other) const {
		ComplexVariable c1;
		c1.a = this->a;
		c1.b = this->b;
		c1.c = this->c + other;
		return c1;
	}
	const ComplexVariable operator+(const ComplexVariable& real, const ComplexVariable& real2) {
		ComplexVariable c1;
		c1.a = real.a + real2.a;
		c1.b = real.b + real2.b;
		c1.c = real.c + real2.c;
		return c1;
	}

	const ComplexVariable operator-(complex<double> other, const ComplexVariable& real) {//(         -          )
		ComplexVariable c1;
		complex<double>c2(-1, 0);
		c1.a = c2*real.a;
		c1.b = c2*real.b;
		c1.c = other - real.c;
		return c1;
	}
	const ComplexVariable ComplexVariable::operator-(complex<double> other) const {
		ComplexVariable c1;
		c1.a = this->a;
		c1.b = this->b;
		c1.c = this->c - other;
		return c1;
	}
	const ComplexVariable operator-(const ComplexVariable& real, const ComplexVariable& real2) {
		ComplexVariable c1;
		c1.a = real.a - real2.a;
		c1.b = real.b - real2.b;
		c1.c = real.c - real2.c;
		return c1;
	}

	const ComplexVariable operator/(complex<double> other, const ComplexVariable& real) {//(         /          )
		return ComplexVariable(2i);
	}
	const ComplexVariable ComplexVariable::operator/(complex<double> other) const {
		ComplexVariable c1;
		c1.a = this->a / other;
		c1.b = this->b / other;
		c1.c = this->c / other;
		return c1;
	}
	const ComplexVariable operator/(const ComplexVariable& real, const ComplexVariable& real2) {
		return ComplexVariable(2i);
	}


	const ComplexVariable operator==(complex<double> other, const ComplexVariable& real) {//(         ==          )
		ComplexVariable c1;
		c1.a = real.a;
		c1.b = real.b;
		c1.c = real.c - other;
		return c1;
	}
	const ComplexVariable ComplexVariable::operator==(complex<double> other) const {
		ComplexVariable c1;
		c1.a = this->a;
		c1.b = this->b;
		c1.c = this->c - other;
		return c1;
	}
	const ComplexVariable ComplexVariable::operator==(const ComplexVariable& real) const {
		ComplexVariable c1;
		c1.a = this->a - real.a;
		c1.b = this->b - real.b;
		c1.c = this->c - real.c;
		return c1;
	}

	const ComplexVariable ComplexVariable::operator^(double other) const { // (          ^          )
		if (other > 2.0 || other<0.0) {
			throw runtime_error("X^2 is the maximom");
		}
		ComplexVariable c1;
		c1.a = 1.0;
		c1.b = 0.0;
		c1.c = this->c;
		return c1;
	}




         }






