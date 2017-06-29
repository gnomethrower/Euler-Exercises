#include <iostream>

using namespace std;


int main(){
    int i,input;
    for(i=0,input=-1;1;i++){
        cout << "Do not enter the number " << i << endl;
        cin >> input;
        if(i==input){
            cout << "You weren't supposed to enter " << i << endl;
            return 1;
        }
        else if(i==9){
            cout << "You are pretty patient arent you?" << endl;
            return 0;
        }
    }
}