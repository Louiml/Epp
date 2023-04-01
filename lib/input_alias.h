#pragma once

#include <iostream>
#include <type_traits>

    class InputWrapper : public std::istream {
    public:
        InputWrapper(std::streambuf* sb) : std::istream(sb) {}
    };

    extern InputWrapper input;

template <typename T>
struct prohibit_cin {
    static_assert(!std::is_same<T, std::istream>::value, "Error: std::cin is not allowed. Use input instead.");
};

#define cin typename prohibit_cin<std::istream>::type
