/*

AUTHORS: liad ben moshe


*/
#include <iostream>
#include <complex>


using namespace std;


namespace solver {

	class RealVariable {

	public:

		double a=0;
		double b=1;
		double c=0;

	

		RealVariable() {
			this->a = 0;
			this->b = 1;
			this->c = 0;
		
		}
		~RealVariable() {

		}

		RealVariable(double a) {
			this->a = a;
			this->b = 0;
			this->c = 0;
		}

		RealVariable(double a, double b, double c) {
			this->a = a;
			this->b = b;
			this->c = c;
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

	public:

		complex<double> a=0.0;
		complex<double> b=1.0;
		complex<double> c=0.0;
		

	
		ComplexVariable() {

		}
		~ComplexVariable() {

		}
		ComplexVariable(complex<double> c) {
			this->c = c;
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

		const ComplexVariable operator^( double other) const;





	};

	complex<double> solve(const ComplexVariable& c1);
	double solve(const RealVariable& r1);
	

}



