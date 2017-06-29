#include <iostream>

using namespace std;

int main(){
    int input;
    cout << "Please choose your beverage:" << endl;
    cout << "1 Tea" << endl;
    cout << "2 Coffee" << endl;
    cout << "3 Water" << endl;
    cout << "4 MtnDw" << endl;
    cout << "5 Yellow Snow" << endl;
    cin >> input;
    
    if(input==1)
        cout << "You have chosen Tea" << endl;
    else if(input==2)
        cout << "You have chosen Coffee" << endl;
    else if(input==3)
        cout << "You have chosen Water" << endl;
    else if(input==4)
        cout << "You have chosen MtnDw" << endl;
    else if(input==5)
        cout << "Why would you do this?" << endl;
    else
        cout << "Invalid choice, here is your money back" << endl;



    return 0;

}
