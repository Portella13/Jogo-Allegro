#include "Game.h"

Game::Game(){}

void Game ::init(){
    background = new Background("res/stars.jpg");
    player.init();
    
    for(){
        
    }
}

void Game::update(){
    background->update();
    player.update();
    
    for (auto& enemy : enemies){
        enemy->update();
    }
}

void Game::handleInput(){
    player.handleInput();
}

void Game::render(){
    background->render();
    player.render();
    
    for (auto& enemy : enemies){
        enemy->render();
    }
}

void Game::dispose(){
    background->dispose();
    player.dispose();
    
    for (auto& enemy : enemies){
        enemy->dispose();
        delete enemy;
    }
    enemies.clear();
}
