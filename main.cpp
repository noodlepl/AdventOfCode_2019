#include <iostream>
#include <fstream>
#include <string>


int fuelNeededPartOne(int mass) {
  return mass / 3 - 2;
}

int fuelNeededPartTwo(int mass) {
  int fuel = std::max(0, mass / 3 - 2);

  if (fuel > 0) {
    fuel += fuelNeededPartTwo(fuel);
  }

  return fuel;
}

int main() {
  std::ifstream input;
  input.open("input");
  if (input.is_open()) {
    std::string line;
    int accum = 0;
    while (std::getline(input, line)) {
      const int lineAsNum = std::stoi(line);
      std::cout << "Read input: " << lineAsNum << std::endl;
      accum += fuelNeededPartTwo(lineAsNum);
      std::cout << "Accumulated fuel: " << accum << std::endl;
    }
  } else {
    std::cout << "Couldn't open file" << std::endl;
  }

  input.close();
  return 0;
}