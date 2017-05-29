#include "FSM.hpp"

void FSM::changeState(std::shared_ptr<State> newSate){
	mState->exit();
	mState = newSate;
	mState->start();
}