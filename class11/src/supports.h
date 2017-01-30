//
// Created by ahuge on 27/01/17.
//

// Grabbed from Jean Guegant's blog.
namespace supports {
    template <class T> struct divide
    {
        template <typename C> static constexpr decltype(std::declval<C>() / std::declval<C>(), bool()) test(int)
        {
            return true;
        }
        template <typename C> static constexpr bool test(...)
        {
            return false;
        }

        static constexpr bool value = test<T>(int());
    };
};
