#include "../include/function.h"
#include "catch.hpp"

SCENARIO("function: test", "[testing]") {
	int a = 5;
	REQUIRE(function(a) == -1);
	REQUIRE(function(2) == 1);
}
