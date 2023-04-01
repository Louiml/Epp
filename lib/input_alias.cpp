#include "input_alias.h"

// Temporarily undefine the cin macro
#undef cin

InputWrapper input(std::cin.rdbuf());

// Redefine the cin macro
#define cin typename prohibit_cin<std::istream>::type
