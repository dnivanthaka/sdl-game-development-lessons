#ifndef __GAME_OBJECT_H__
#define __GAME_OBJECT_H__

class GameObject
{
    public:
        void draw() { std::cout << "draw game object"; }
        void update() { std::cout << "update game object"; }
        void clean() { std::cout << "clean game object"; }
    protected:
        int m_x;
        int m_y;
};

#endif
