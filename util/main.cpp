#include "cal.cpp"
#include <iostream>

using namespace std;
int main(){
    float input;
    vector<float> weeklyFocusHour;
    while( cin >> input){
        weeklyFocusHour.push_back(input);
    }
    Cal cal(weeklyFocusHour);
    cal.calReward();
    cal.showReward();

    return 0;


}