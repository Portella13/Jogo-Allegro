#include "Enemy.h"
#include "Constants.h"
#include <cmath>
#include <allegro5/allegro_primitives.h>

Enemy :: Enemy(int star_) : star(star_) {
    init();
}

void Enemy :: init(){
    switch(star) {
case 1:
    color = al_map_rgb_f(1, 0, 0);
    speed = 4;
    lives = 1;
    break;
case 2:
    color = al_map_rgb_f(0, 1, 0);
    speed = 6;
    lives = 2;
    break;
case 3:
    color = al_map_rgb_f(0, 0, 1);
    spped = 6;
    lives = 3;
    break;
case 4:
    color = al_map_rgb_f(1, 0, 1);
    speed = 6;
    lives = 5;
    break;
case 5:
    color = al_map_rgb_f(0, 1, 1);
    spped = 8;
    lives = 6;
    break;
    }
    radius = 10;
    x = GAME_WIDTH - radius;
    y = GAME_HEIGHT / 2;
    angle = (90 + rand() % 181);
    dx = -(abs(cos(toRadians(angle)) * speed));
    dy = sin(toRadians(angle)) * speed;
    isOnScreen = false;
}

void Enemy::update(){
    x += dx;
    y += dy;

    if (x < GAME_WIDTH) isOnScreen = true;

    //Bounds checking
    if (isOnScreen){
        if (x < radius) dx = -dx;
        if (y < radius) dy = -dy;
        if (x + radius > GAME_WIDTH) dx = -dx;
        if (y + radius > GAME_WIDTH) dy = -dy;
    }
}

void Enemy:: render(){
    al_draw_filled_circle(x, y, radius, color);
    
}

void Enemy::dispose(){}
