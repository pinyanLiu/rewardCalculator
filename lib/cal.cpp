#include "cal.hpp"
#include <iostream>
#include <numeric>

void Cal::calReward(){
    float reward = 0.0;
    for( auto focusHourPerDay : focusHourInWeek){
        if(focusHourPerDay < 0.033){
            reward = -100;
            this->rewardPerDay.push_back(reward);
        }
        else if (focusHourPerDay <= 3){
            reward = 50*focusHourPerDay;
            this->rewardPerDay.push_back(reward);
        }
        else if (focusHourPerDay <=4){
            reward = 150+100*(focusHourPerDay-3);
            this->rewardPerDay.push_back(reward);
        }
        else if (focusHourPerDay <= 5){
            reward = 250+150*(focusHourPerDay-4);
            this->rewardPerDay.push_back(reward);
        }
        else if (focusHourPerDay <= 6){
            reward = 400+200*(focusHourPerDay-5);
            this->rewardPerDay.push_back(reward);
        }
        else{
            reward = 600;
            this->rewardPerDay.push_back(reward);
        }
        this->totalReward += reward;
    }
}
void Cal::showReward(){
    for(auto reward:this->rewardPerDay){
        std::cout<<reward<<std::endl;
    }
    
    std::cout<<"total reward = "<<this->totalReward<<std::endl;
}

Cal::Cal(std::vector<float> focusHourInWeek){
    this->focusHourInWeek = focusHourInWeek;
    this->totalReward = 0;
}

Cal::~Cal(){

}