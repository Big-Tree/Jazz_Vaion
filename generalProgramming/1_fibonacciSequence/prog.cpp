#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double prev1 = 1;
	double prev2 = 1;
	double sum = 0;
	int count = 0;
	double tmp;
	while (count < 100){
		tmp = prev1 + prev2;
		if (fmod(tmp,2) == 0){ // is even?
			sum = sum + tmp;
			count++;
		}
		prev2 = prev1;
		prev1 = tmp;
	}
	cout << "Total = " << sum << endl;
}
