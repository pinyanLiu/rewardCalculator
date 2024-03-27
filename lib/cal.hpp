#ifndef CAL_HPP
#define CAL_HPP

#include <vector>
class Cal{
private:
    std::vector<float> focusHourInWeek;
public:
    float totalReward;
    std::vector<float> rewardPerDay;
    
    void calReward();
    void showReward();
    Cal(std::vector<float> focusHourInWeek);
    ~Cal();

};


#endif