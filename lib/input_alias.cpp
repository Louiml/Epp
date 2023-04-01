#include "input_alias.h"

#undef cin

InputWrapper input(std::cin.rdbuf());

#define cin typename prohibit_cin<std::istream>::type
