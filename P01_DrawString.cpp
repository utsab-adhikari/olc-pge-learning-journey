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
      DrawString(5, 5, "Utsab Adhikari",  olc::RED);	
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

