#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( hello() == "Hello World!" );
}

TEST_CASE("Returns 0 for same string") {
    REQUIRE( strcmp_case_insensitive("hello world", "hello world") == 0 );
    REQUIRE( strcmp_case_insensitive("cheeseburgers", "cheeseburgers") == 0 );
}

TEST_CASE("It doesnt return 0 for same string") {
    REQUIRE( strcmp_case_insensitive("cheeseburgers", "hamburgers") == -5 );
    REQUIRE( strcmp_case_insensitive("hamburgers", "cheeseburgers") == 5 );
}

TEST_CASE("Returns 0 for same string except different case 1") {
    REQUIRE( strcmp_case_insensitive("hello world", "HELLO WORLD") == 0 );
}

TEST_CASE("Returns 0 for same string except different case 2") {
    REQUIRE( strcmp_case_insensitive("HELLO WORLD", "hello world") == 0 );
}

TEST_CASE("Returns positve and negative equally") {
    REQUIRE( strcmp_case_insensitive("hello!", "hi!") == -4 );
    REQUIRE( strcmp_case_insensitive("hi!", "hello!") == 4 );
}

