#include <stdio.h>

extern void initBackground();
extern void updateBackground();
extern void renderBackground();
extern void disposeBackground();

extern void initPlayer();
extern void updatePlayer();
extern void renderPlayer();
extern void handleInputPlayer();
extern void disposePlayer();
//#include "Constants.h"

void initGame()
{
    initBackground("image.jpg");
    initPlayer();
};

void updateGame()
{
    updatePlayer();
};

void renderGame()
{
    renderPlayer();
};

void handleInputGame()
{
    handleInputPlayer();
};

void disposeGame()
{
    disposeBackground();
    //disposePlayer();
};
