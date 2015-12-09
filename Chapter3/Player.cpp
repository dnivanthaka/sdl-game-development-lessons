#include "Player.h"

void Player::load(int x, int y, int width, int height, string textureID)
{
    GameObject::load(x, y, widht, height, textureID);
}

void Player::draw(SDL_Renderer* pRenderer)
{
    GameObject::draw(pRenderer);
}

void Player::update()
{
    m_x =- 1;
}
