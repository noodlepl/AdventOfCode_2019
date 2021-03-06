//
// Created by Adam Kępiński on 2020-01-05.
//

#ifndef ADVENTOFCODE_POINT_HPP
#define ADVENTOFCODE_POINT_HPP

#include <algorithm>

namespace aoc {
class Point {
public:
  constexpr Point(int x, int y) noexcept : x_(x), y_(y){}

  constexpr int x() const noexcept {return x_;}
  constexpr int y() const noexcept {return y_;}

  int manhattanDistance(const Point& other) {
    return std::abs(x_ - other.x_) + std::abs(y_ - other.y_);
  }

private:
  int x_;
  int y_;
};
}


#endif // ADVENTOFCODE_POINT_HPP
