#pragma once

namespace units
{
template <typename T, typename ST> class unit
{
  private:
    T val_;

  public:
    explicit constexpr unit(T val) : val_(val)
    {
    }
    [[nodiscard]] constexpr T get() const
    {
        return val_;
    }
    [[nodiscard]] constexpr T get_milli() const
    {
        return val_ * static_cast<T>(1000);
    }

    constexpr T operator/(const unit &second) const
    {
        return val_ / second.get();
    }

    constexpr unit operator*(const T &second) const
    {
        return unit(val_ * second);
    }

    constexpr unit operator/(const T &second) const
    {
        return unit(val_ / second);
    }
};

using voltage = unit<float, struct the_voltage>;
using resistance = unit<float, struct the_resistance>;
using current = unit<float, struct the_current>;

// Ohm's law: dividing a voltage by a resistance yields a current.
constexpr current operator/(const voltage &v, const resistance &r)
{
    return current(v.get() / r.get());
}

constexpr voltage operator""_V(long double volts)
{
    return voltage(static_cast<float>(volts));
}

constexpr resistance operator""_Ohm(long double ohms)
{
    return resistance(static_cast<float>(ohms));
}
} // namespace units
