#include "../include/function.h"
#include "catch.hpp"

SCENARIO("function: test", "[testing]") {
	int a = 5;
	REQUIRE(foo(a) == -1);
	REQUIRE(foo(2) == 1);
}
