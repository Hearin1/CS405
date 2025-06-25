// Project 2 Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "gtest/gtest.h"

// Declare the function under test
std::string get_user_data(const std::string& input);

TEST(SQLInjectionTest, InjectionShouldFail) {
    std::string input = "' OR '1'='1' --";
    std::string result = get_user_data(input);
    EXPECT_NE(result, "Injected data returned!");  // We expect a secure system to block this
}

TEST(SQLInjectionTest, ValidInputShouldPass) {
    std::string input = "john_doe";
    std::string result = get_user_data(input);
    EXPECT_EQ(result, "No match found.");
}
