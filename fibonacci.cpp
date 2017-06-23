#include <iostream>
using namespace std;


int main(){
	int fib1,fib2,fibneu;
		for(fib1=0,fib2=1,fibneu=0;fibneu<4000000;){
		fibneu=fib1+fib2;
		fib1=fib2;
		fib2=fibneu;
		cout << fibneu << endl;
	}

	return 0;
}
