#include <catch2/catch_test_macros.hpp>
#include "cal.cpp"

// 测试用例
TEST_CASE("MyTest1", "[Cal]") {
    std::vector<float> input = {0.2};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 10);
}
TEST_CASE("MyTest2", "[Cal]") {
    std::vector<float> input = {1};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 50);
}
TEST_CASE("MyTest3", "[Cal]") {
    std::vector<float> input = {2};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 100);
}
TEST_CASE("MyTest4", "[Cal]") {
    std::vector<float> input = {3};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 150);
}
TEST_CASE("MyTest5", "[Cal]") {
    std::vector<float> input = {4};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 250);
}
TEST_CASE("MyTest6", "[Cal]") {
    std::vector<float> input = {5};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 400);
}
TEST_CASE("MyTest7", "[Cal]") {
    std::vector<float> input = {6};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 600);
}
TEST_CASE("MyTest8", "[Cal]") {
    std::vector<float> input = {7};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 600);
}
TEST_CASE("MyTest9", "[Cal]") {
    std::vector<float> input = {0,2,3,4,5,6};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == 1400);
}
TEST_CASE("MyTest10", "[Cal]") {
    std::vector<float> input = {0,0.33,1};
    Cal cal(input);
    cal.calReward();
    REQUIRE(cal.totalReward == -33.5);
}
