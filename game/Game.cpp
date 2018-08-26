#include <iostream>
#include "Game.h"
#include "gameoptions/GameOptions.h"
//#include "map/GameMap.h"

using namespace std;

void Game::version(void){

  cout <<"Version 0.0.1"<<endl;
}

int Game::run(void){

  GameOptions gameoptions = {};
  gameoptions.playerCounts = 2;

  GameMap gameMap = GameMap();
  gameMap.printMap(gameoptions);

  return 0;
}

void GameMap::printMap(GameOptions gameoptions){

  cout<<"********************"<<endl;
  cout<<"*P******************"<<endl;
  cout<<"******RRRRRR********"<<endl;
  cout<<"******R*  *R********"<<endl;
  cout<<"******R*  *R********"<<endl;
  cout<<"******RRRRRR********"<<endl;
  cout<<"********************"<<endl;
  cout<<"********************"<<endl;
}
