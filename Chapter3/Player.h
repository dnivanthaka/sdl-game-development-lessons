#ifndef __PLAYER_H__
#define __PLAYER_H__
class Player : public GameObject
{
    public:
        void draw()
        {
            GameObject::draw();
            std::cout << "Draw Player";
        }
        void update()
        {
            std::cout << "Update player";
            m_x = 10;
            m_y = 20;
        }
        void clean()
        {
            GameObject::clean();
            std::cout << "clean player";
        }
    private:
}; 
#endif
