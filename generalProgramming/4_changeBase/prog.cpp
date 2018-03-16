#include <iostream>
#include <cmath>

using namespace std;

// Changes the base of a single digit
char digit(double input, double base){
	// Apply offset from ascii table
	if (input <= 9){
		return ((char)input) + 48;
	}
	else{
		return ((char)input) + (65 - 10);
	}
}

void baseConvert(double value, double base, double power = 0){
	// Find position of most significant digit
	if (value > base*pow(base, power)){
		baseConvert(value, base, ++power);
	}
	// Calculate single digit
	else{
		double remainder = fmod(value, pow(base, power));
		cout << digit((value - remainder) / pow(base, power), base);
		if (remainder != 0){
			baseConvert(remainder, base, --power); // Next digit
		}
	}
}

int main(){
	u_int32_t value = 0xffffffff;
	u_int32_t base = 36;

	cout << "Value = " << value << endl << "Base = " << base << endl << endl<< "Answer:" << endl;
	baseConvert(value, base);	
	cout << endl;

}
