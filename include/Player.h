#pragma once
#include <iostream>

class Player {
  public: 
    double health;
    std::string player_name;
    double strength;
    double endurance;
    double speed;
    std::string abilities[5];
    
    bool attack_opp();
    double player_power();
    std::string launch_ability(std::string ability);
    Player(std::string player_name, double strength, double speed, double endurance, double health);

  private:
    double power;
    bool isHitting = false;
    bool launchAbility = false;
    int _dd;
};


