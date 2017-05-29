#ifndef FSM_HPP
#define FSM_HPP

#include "Game.hpp"

class State {
 public:
  virtual void start() = 0;
  virtual void execute(Game& game, const sf::Color col, int id) = 0;
  virtual void exit() = 0;

 private:
};

class CollectFoodState : public State {
 public:
  virtual void start();
  virtual void execute(Game& game, const sf::Color col, int id);
  virtual void exit();

 protected:
  int mTransported = 0;
  Ressource mTransportedRessource = Ressource::Food;
};

class CollectWoodState : public State {
 public:
  virtual void start();
  virtual void execute(Game& game, const sf::Color col, int id);
  virtual void exit();

 protected:
  int mTransported = 0;
  Ressource mTransportedRessource = Ressource::Wood;
};

class CollectGoldState : public State {
 public:
  virtual void start();
  virtual void execute(Game& game, const sf::Color col, int id);
  virtual void exit();

 protected:
  int mTransported = 0;
  Ressource mTransportedRessource = Ressource::Gold;
};

#endif