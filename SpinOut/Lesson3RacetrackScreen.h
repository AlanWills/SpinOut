#pragma once

#include "RacetrackScreen.h"

class Lesson3RacetrackScreen : public RacetrackScreen
{
  REGISTER_RACETRACK(Lesson3RacetrackScreen, "Lesson3RacetrackScreen.xml");

public:
  Lesson3RacetrackScreen(ScreenManager* screenManager, const std::string& dataAsset);
  ~Lesson3RacetrackScreen();
};