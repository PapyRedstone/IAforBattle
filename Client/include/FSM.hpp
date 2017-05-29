#ifndef FSM_HPP
#define FSM_HPP

#include <memory>
#include <vector>
#include "State.hpp"

class FSM {
 public:
  void execute(Entity& ent);
  void changeState(std::shared_ptr<State> newSate);
 private:
  std::shared_ptr<State> mState;
};

#endif
