/*

AUTHORS: liad ben moshe


*/
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
namespace solver {



	double solve(const RealVariable& r1) {
		return 4.0;
	}
	complex<double> solve(const ComplexVariable& c1) {
		return 2i;
	}



	const RealVariable operator*(double other, const RealVariable& real) {//(         *          )
		return RealVariable(4.4);
	}
	const RealVariable RealVariable::operator*(double other) const {
		return RealVariable(4.4);
	}
	const RealVariable operator*(const RealVariable& real, const RealVariable& real2) {
		return RealVariable(4.4);
	}

	const RealVariable operator-(double other, const RealVariable& real) {// (         -          )
		return RealVariable(4.4);
	}
	const RealVariable RealVariable::operator-(double other) const {
		return RealVariable(4.4);
	}
	const RealVariable operator-(const RealVariable& real, const RealVariable& real2) {
		return RealVariable(4.4);
	}


	const RealVariable operator+(double other, const RealVariable& real) {// (       +       )
		return RealVariable(4.4);
	}
	const RealVariable RealVariable::operator+(double other) const {
		return RealVariable(4.4);
	}
	const RealVariable operator+(const RealVariable& real, const RealVariable& real2) {
		return RealVariable(4.4);
	}

	const RealVariable operator/(double other, const RealVariable& real) {// (      /      )
		return RealVariable(4.4);
	}
	const RealVariable RealVariable::operator/(double other) const {
		return RealVariable(4.4);
	}
	const RealVariable operator/(const RealVariable& real, const RealVariable& real2) {
		return RealVariable(4.4);
	}

	const RealVariable RealVariable::operator==(double other) const {// (         ==         )
		return RealVariable(4.4);
	}
	const RealVariable RealVariable::operator==(const RealVariable& real) const {
		return RealVariable(4.4);
	}
	const RealVariable operator==(double other, const RealVariable& real2) {
		return RealVariable(4.4);
	}

	const RealVariable RealVariable::operator^(double other) const { //  (             ^             )
		return RealVariable(4.4);
	}


	///////////////////////ComplexVariable///////////////////////


	const ComplexVariable operator*(complex<double> other, const ComplexVariable& real) {//(         *          )
		return ComplexVariable(2i);
	}
	const ComplexVariable ComplexVariable::operator*(complex<double> other) const {
		return ComplexVariable(2i);
	}
	const ComplexVariable operator*(const ComplexVariable& real, const ComplexVariable& real2) {
		return ComplexVariable(2i);
	}


	const ComplexVariable operator+(complex<double> other, const ComplexVariable& real) {//(         +          )
		return ComplexVariable(2i);
	}
	const ComplexVariable ComplexVariable::operator+(complex<double> other) const {
		return ComplexVariable(2i);
	}
	const ComplexVariable operator+(const ComplexVariable& real, const ComplexVariable& real2) {
		return ComplexVariable(2i);
	}

	const ComplexVariable operator-(complex<double> other, const ComplexVariable& real) {//(         -          )
		return ComplexVariable(2i);
	}
	const ComplexVariable ComplexVariable::operator-(complex<double> other) const {
		return ComplexVariable(2i);
	}
	const ComplexVariable operator-(const ComplexVariable& real, const ComplexVariable& real2) {
		return ComplexVariable(2i);
	}

	const ComplexVariable operator/(complex<double> other, const ComplexVariable& real) {//(         /          )
		return ComplexVariable(2i);
	}
	const ComplexVariable ComplexVariable::operator/(complex<double> other) const {
		return ComplexVariable(2i);
	}
	const ComplexVariable operator/(const ComplexVariable& real, const ComplexVariable& real2) {
		return ComplexVariable(2i);
	}


	const ComplexVariable operator==(complex<double> other, const ComplexVariable& real) {//(         ==          )
		return ComplexVariable(2i);
	}
	const ComplexVariable ComplexVariable::operator==(complex<double> other) const {
		return ComplexVariable(2i);
	}
	const ComplexVariable ComplexVariable::operator==(const ComplexVariable& real) const {
		return ComplexVariable(2i);
	}

	const ComplexVariable ComplexVariable::operator^(complex<double> other) const { // (          ^          )
		return ComplexVariable(2i);
	}




         }






