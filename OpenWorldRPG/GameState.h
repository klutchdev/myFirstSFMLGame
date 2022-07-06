#pragma once

#include "State.h"
#include "Player.h"

class State;

class GameState : public State
{
private:
    sf::RenderTexture renderTexture;
    sf::Shader core_shader;

    Player *player;

    void initKeybinds();
    void initTextures();
    void initPlayers();

public:
    GameState(sf::RenderWindow *window, std::map<std::string, int> *supportedKeys, std::stack<State *> *states);
    virtual ~GameState();

    void updateInput(const float &dt);
    void update(const float &dt);

    void render(sf::RenderTarget *target = NULL);
};