#ifndef SIMPLE_MATH_LIBRARY_H
#define SIMPLE_MATH_LIBRARY_H

#include <exception>
#include <iostream>
#include "supports.h"


namespace simple_math {
/*
 * simple math is a library that contains template functions, allowing it to be used for many data types.
 */
    template <typename T>
    T plus (T const& l, T const& r) {
        return l + r;
    };

    template <typename T>
    T minus (T const& l, T const& r)  {
        return l - r;
    };

    template <typename T>
    T divide (T const& l, T const& r)  throw(T) {
        return supports::divide(l, r); // Attempt to use the "supports" namespace to fallback if it doesnt exist

    };

    template <typename T>
    T multiply (T const& l, T const& r)  {
        return l * r;
    };
}

#endif