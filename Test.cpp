/*

AUTHORS: liad ben moshe


*/

using namespace solver;
using namespace std;

TEST_CASE("Complex") {


	ComplexVariable y;

	CHECK(solve(2 * y + 5i == 23) == (11.5, -2.5));
	CHECK(solve(y + 5i == 2 * y + 3i) == (0.0, 2.0));
	CHECK(solve(2 * y + 5i == 23) == (11.5, -2.5));
	CHECK(solve(4 * y + 3i == 6) == (1.5, -0.75));
	CHECK(solve(4 * y + 3i == 6 * y + 7) == (-3.5, 1.5));
	CHECK(solve(4*y + 3i == 6*y + 94) == (-47,1.5));
	CHECK(solve(4 * y + 8i == 4i + 12.0 + y * 2) == (6.0, -2.0));

}
TEST_CASE("Real") {

	RealVariable x;

	CHECK(solve(x + 2 == 8) == 3);
	CHECK(solve(x + 5 == 10) == 5);
	
	CHECK(solve(2*x+2 == 18) == 8);
	CHECK(solve(3*x+2+6 == 20) == 4);
	CHECK(solve(4*x == 20) == 5);
	CHECK(solve(5*x == 20) == 4);
	CHECK(solve(6*x -7 == 29) == 6);

	CHECK(solve(x + 2 == 8) == 3);
	CHECK(solve(x + 5 == 10) == 5);
	CHECK((solve((x ^ 2) + 2 == 18) == 4 || solve((x ^ 2) + 2 == 18)== -4));
	CHECK(solve(2 * x + 2 == 18) == 8);
	CHECK(solve(3 * x + 2 + 6 == 20) == 4);
	CHECK(solve(4 * x == 20) == 5);
	CHECK(solve(5 * x == 20) == 4);
	CHECK(solve(6 * x - 7 == 29) == 6);

	CHECK(solve(x + 2 == 8) == 3);
	CHECK(solve(x + 5 == 10) == 5);
	CHECK(solve(2 * x + 2 == 18) == 8);
	CHECK(solve(3 * x + 2 + 6 == 20) == 4);
	CHECK(solve(4 * x == 20) == 5);
	CHECK(solve(5 * x == 20) == 4);
	CHECK(solve(6 * x - 7 == 29) == 6);

	CHECK(solve(x + 2 == 8) == 3);
	CHECK(solve(x + 5 == 10) == 5);
	CHECK(solve(2 * x + 2 == 18) == 8);
	CHECK(solve(3 * x + 2 + 6 == 20) == 4);
	CHECK(solve(4 * x == 20) == 5);
	CHECK(solve(5 * x == 20) == 4);
	CHECK(solve(6 * x - 7 == 29) == 6);

	CHECK(solve(x + 2 == 8) == 3);
	CHECK(solve(x + 5 == 10) == 5);
	CHECK(solve(2 * x + 2 == 18) == 8);
	CHECK(solve(3 * x + 2 + 6 == 20) == 4);
	CHECK(solve(4 * x == 20) == 5);
	CHECK(solve(5 * x == 20) == 4);
	CHECK(solve(6 * x - 7 == 29) == 6);

	CHECK(solve(x + 2 == 8) == 3);
	CHECK(solve(x + 5 == 10) == 5);
	CHECK(solve(2 * x + 2 == 18) == 8);
	CHECK(solve(3 * x + 2 + 6 == 20) == 4);
	CHECK(solve(4 * x == 20) == 5);
	CHECK(solve(5 * x == 20) == 4);
	CHECK(solve(6 * x - 7 == 29) == 6);

	CHECK(solve(x + 2 == 8) == 3);
	CHECK(solve(x + 5 == 10) == 5);
	CHECK(solve(2 * x + 2 == 18) == 8);
	CHECK(solve(3 * x + 2 + 6 == 20) == 4);
	CHECK(solve(4 * x == 20) == 5);
	CHECK(solve(5 * x == 20) == 4);
	CHECK(solve(6 * x - 7 == 29) == 6);

	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2*x/2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);

	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);
	CHECK(solve(10 * x + 2 == 102) == 10);
	CHECK(solve(10 * x == 100) == 10);
	CHECK(solve(2 * x / 2 == 29) == 29);
	CHECK(solve(8 * x + 8 == 9) == 1);







}



