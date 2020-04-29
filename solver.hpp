/*

AUTHORS: liad ben moshe


*/
#include <iostream>
#include <complex>


using namespace std;


namespace solver {

	class RealVariable {

		double num;

	public:

		RealVariable() {
		
		}
		~RealVariable() {

		}

		RealVariable(double d) {
			this->num = d;
		}

		

		const RealVariable operator*(double other) const;
		friend const RealVariable operator*(double other,const RealVariable& real);
		friend const RealVariable operator*(const RealVariable& real, const RealVariable& real2);

		const RealVariable operator/(double other) const;
		friend const RealVariable operator/(double other,const RealVariable& real);
		friend const RealVariable operator/(const RealVariable& real, const RealVariable& real2);

		const RealVariable operator+(double other) const;
		friend const RealVariable operator+(double other,const RealVariable& real);
		friend const RealVariable operator+(const RealVariable& real, const RealVariable& real2);

		const RealVariable operator-(double other) const;
		friend const RealVariable operator-(double other,const RealVariable& real);
		friend const RealVariable operator-(const RealVariable& real, const RealVariable& real2);

		const RealVariable operator==(double other) const;
		const RealVariable operator==(const RealVariable& real) const;
		friend const RealVariable operator==(double other, const RealVariable& real2);


		const RealVariable operator^(double other) const;
		




	};

	class ComplexVariable {

		complex<double> num;

	public:
		ComplexVariable() {

		}
		~ComplexVariable() {

		}
		ComplexVariable(complex<double> c) {
			this->num = c;
		}
		

		const ComplexVariable operator*( complex<double> other) const;
		friend const ComplexVariable operator*(complex<double> other, const ComplexVariable& real);
		friend const ComplexVariable operator*(const ComplexVariable& real, const ComplexVariable& real2);

		const ComplexVariable operator/(complex<double> other) const;
		friend const ComplexVariable operator/(complex<double> other, const ComplexVariable& real);
		friend const ComplexVariable operator/( const ComplexVariable& real, const ComplexVariable& real2);

		const ComplexVariable operator+(complex<double> other) const;
		friend const ComplexVariable operator+(complex<double> other, const ComplexVariable& real);
		friend const ComplexVariable operator+(const ComplexVariable& real, const ComplexVariable& real2);
		
			

		const ComplexVariable operator-(complex<double> other) const;
		friend const ComplexVariable operator-(complex<double> other, const ComplexVariable& real);
		friend const ComplexVariable operator-(const ComplexVariable& real, const ComplexVariable& real2);

		const ComplexVariable operator==(complex<double> other) const;
		const ComplexVariable operator==(const ComplexVariable& real) const;
		friend const ComplexVariable operator==(complex<double> other, const ComplexVariable& real2);

		const ComplexVariable operator^( const complex<double> other) const;





	};

	complex<double> solve(const ComplexVariable& c1);
	double solve(const RealVariable& r1);
	

}



