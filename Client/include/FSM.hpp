#ifndef FSM_HPP
#define FSM_HPP

#include <memory>
#include <vector>
#include "State.hpp"

class FSM {
 public:
  void execute(Game& game, const sf::Color& col, int id) {
    mState->execute(game, col, id);
  }

  void changeState(std::shared_ptr<State> newSate);

 private:
  std::shared_ptr<State> mState;
};

#endif
