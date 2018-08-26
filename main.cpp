#include <iostream>
#include <stdio.h>
#include "game/Game.h"

int main(int argc, char* argv[])
{

  Game game;
  game.version();
  game.run();
  return 0;
}
