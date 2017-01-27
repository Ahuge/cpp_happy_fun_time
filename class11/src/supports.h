//
// Created by ahuge on 27/01/17.
//


// Grabbed from
// http://stackoverflow.com/questions/17201329/c11-ways-of-finding-if-a-type-has-member-function-or-supports-operator
// I dont really understand how it works.
// It appears to attempt to declare the template as the function, if it exists, and the guy said something about it falling back.
namespace supports {
    template <typename X, typename Y>
    static auto divide(const X& x, const Y& y) -> decltype(x / y);
};

