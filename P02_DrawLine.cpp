#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

  class Game : public olc::PixelGameEngine
  {
    public:
    Game()
    {
        sAppName = "Utsab's Space";
    }

    bool OnUserCreate() override
    {
        // Called once at the start, so create things here
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {
      Clear(olc::WHITE);
      DrawLine(100, 100, 5, 100, olc::GREEN);
      DrawLine(100, 100, 195, 100, olc::GREEN );

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

