#include "Constants.h"
//#include "Background.h"
#include "Player.h"
#include "Enemy.h"

#include <vector>

class Game{
  publick:
    game();
    void init();
    void update();
    void render();
    void handleInput();
    void dispose();
  
  private:
    Background* background;
  Player player;
  
  std::vector<Enemy*> enemies;
};
    
