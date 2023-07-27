#include "Player.h"
#include <iostream>

Player::Player(std::string player_name, double strength, double speed, double endurance, double health)
{
  this->player_name = player_name;
  this->strength = strength;
  this->speed = speed;
  this->endurance = endurance;
  this->health = health;
}

bool Player::attack_opp()
{
  std::cout << "Attacking Opponent..." << std::endl;
  this->_dd = 25.0;
  return this->isHitting = true;
}

double Player::player_power()
{
  double spow = this->strength + this->speed + this->endurance; // summed power
  this->power = spow / 10.0;

  return this->power;
}

std::string Player::launch_ability(std::string ability)
{
  this->isHitting = false;
  this->launchAbility = true;
  std::cout << "Launching Ability: " << ability << std::endl;
  return ability;
}


