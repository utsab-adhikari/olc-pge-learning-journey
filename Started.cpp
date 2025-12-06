#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

  class Game : public olc::PixelGameEngine
  {
    public:
    Game()
    {
        sAppName = "Space Warrior";
    }

    bool OnUserCreate() override
    {
        // Called once at the start, so create things here
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {
      Clear(olc::BLACK);
      DrawCircle(100,100, 20, olc::RED);	
      return true;
    }
};

int main()
{
    Game game;
    if (game.Construct(256, 240, 4, 4))
        game.Start();

    return 0;
}

