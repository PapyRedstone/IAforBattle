#include <SFML/Network.hpp>
#include <iostream>
#include "Game.hpp"

int main() {
  Game game("172.17.3.250", 53000, "Alex", sf::Color::Blue);
  std::cout << "t\n";
  auto map = game.getMap(sf::Color::Blue);
  for (auto& i : map) {
    for (auto& h : i) {
      std::cout << h;
    }
    std::cout << std::endl;
  }

  return 0;
}
