#pragma once

#include <iostream>

class PrintStream {
public:
    template <typename T>
    PrintStream& operator<<(const T& value) {
        std::cout << value;
        return *this;
    }

    PrintStream& operator<<(std::ostream& (*manipulator)(std::ostream&)) {
        std::cout << manipulator;
        return *this;
    }
};

extern PrintStream print;

inline std::ostream& drop(std::ostream& os) {
    return os << std::endl;
}
