#pragma once

#include <array>
#include <cmath>
#include <type_traits>

template <typename T, std::size_t N> struct signal : public std::array<T, N>
{
    static_assert(std::is_floating_point_v<T>,
                  "signal requires a floating-point element type");

    constexpr signal() : std::array<T, N>{}
    {
    }

    constexpr signal(T begin, T end)
    {
        static_assert(N > 1, "N must be bigger than 1");
        const T step = (end - begin) / static_cast<T>(N - 1);

        for(std::size_t i = 0; i < N; i++)
        {
            this->at(i) = begin + static_cast<T>(i) * step;
        }
    }

    constexpr signal(const std::array<T, N> &x, auto fun)
    {
        for(std::size_t i = 0; i < N; i++)
        {
            this->at(i) = fun(x.at(i));
        }
    }

    constexpr signal(const signal &sig, auto fun)
    {
        for(std::size_t i = 0; i < N; i++)
        {
            this->at(i) = fun(sig.at(i));
        }
    }

    constexpr signal operator+(const T &t) const
    {
        return signal(*this, [&](T elem) { return elem + t; });
    };

    constexpr signal operator-(const T &t) const
    {
        return signal(*this, [&](T elem) { return elem - t; });
    };

    constexpr signal operator*(const T &t) const
    {
        return signal(*this, [&](T elem) { return elem * t; });
    };

    constexpr signal operator/(const T &t) const
    {
        return signal(*this, [&](T elem) { return elem / t; });
    };

    constexpr signal operator+(const signal &sig) const
    {
        signal ret;
        for(std::size_t i = 0; i < N; i++)
        {
            ret.at(i) = this->at(i) + sig.at(i);
        }
        return ret;
    };

    constexpr signal operator-(const signal &sig) const
    {
        signal ret;
        for(std::size_t i = 0; i < N; i++)
        {
            ret.at(i) = this->at(i) - sig.at(i);
        }
        return ret;
    };

    friend constexpr signal operator+(const T &t, const signal &sig)
    {
        return sig + t;
    }

    friend constexpr signal operator*(const T &t, const signal &sig)
    {
        return sig * t;
    }

    friend constexpr signal operator/(const T &t, const signal &sig)
    {
        signal ret;
        for(std::size_t i = 0; i < N; i++)
        {
            ret.at(i) = t / sig.at(i);
        }
        return ret;
    }
};
