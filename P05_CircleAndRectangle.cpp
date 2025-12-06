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
      Clear(olc::BLACK);
      DrawRect(50, 50, 100, 100, olc::YELLOW);
      DrawLine(100, 100, 5, 100, olc::GREEN);
      DrawLine(100, 100, 195, 100, olc::GREEN );
       DrawLine(100, 5, 100, 200, olc::GREEN);
      DrawString(200, 100, "X", olc::RED, 0.5f);
      DrawString(95, 4, "y", olc::RED, 0.5f);
      DrawCircle(100, 100, 50, olc::BLUE);

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

