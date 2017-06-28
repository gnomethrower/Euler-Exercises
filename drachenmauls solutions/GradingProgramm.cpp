#include <iostream>

using namespace std;




int main(){
    int points=-1;
    cout << "Please enter the score on your test." << endl;
    while(points<0 || points>100){
        cin >> points;
        if(points<0 || points>100)
            cout << "Invalid input, please enter a score 0-100" << endl;
    }
    if(points==100)
        cout << "Congratulations, you have a perfect score!" << endl;
    else if(points>89)
        cout << "Congratulations, you scored an A!" << endl;
    else if(points<90 && points>79)
        cout << "Congratulations, you scored a B!" << endl;
    else if(points<80 && points>69)
        cout << "You scored a C!" << endl;
    else if(points<70 && points>59)
        cout << "You scored a D!" << endl;
    else if(points<60)
        cout << "You didn't pass, scored F" << endl;


    return 0;

}
