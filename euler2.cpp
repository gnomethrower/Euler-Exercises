#include <iostream>
using namespace std;

int main() {

int sum=0;
int f=1;
int x=0;
int y=1;


while(f<4000000){

f=x+y;
x=y;
y=f;

if(f%2==0){
	
sum=sum+f;
	
}
cout << sum;
	return 0;
}
}
