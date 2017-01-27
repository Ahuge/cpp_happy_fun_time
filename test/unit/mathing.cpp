//
// Created by ahuge on 26/01/17.
//

#include "simple_math_lib.hpp"
#include "catch.hpp"

TEST_CASE("Int addition") {
    int a = 42;
    int b = 7;
    int result = simple_math::plus(a, b);
    REQUIRE(result == 49);
}

TEST_CASE("Float addition") {
    float a = 5.5;
    float b = 2.25;
    float result = simple_math::plus(a, b);
    REQUIRE(result == 7.75);
}


TEST_CASE("String addition") {
    std::string a = std::string {"My name is "};
    std::string b = std::string {"Alex"};
    auto result = simple_math::plus(a, b);
    REQUIRE(result == "My name is Alex");
}
