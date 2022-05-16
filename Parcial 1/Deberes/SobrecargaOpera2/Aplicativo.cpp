#include <iostream>

#include "Vector.h"

using namespace std;

int main() {
	Vector v(5);
	int i;

	for(i=0;i<=7;++i){
		v[i] = i;
		cout << "Vector: [" << i << "] = " << v[i] << endl;
	}
}
