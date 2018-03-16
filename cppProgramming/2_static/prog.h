#ifndef PROG_C
#define PROG_C

using namespace std;

class myClass{
	public:
		myClass();
		~myClass();
		static int nobjs();
	private:
	static int numObj;
};
int myClass::numObj = 0; // Instantiate static variable
#endif
