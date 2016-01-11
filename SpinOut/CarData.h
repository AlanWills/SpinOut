#pragma once

#include "BaseData.h"
 
class CarData : public BaseData
{
public:
  CarData(const std::string& carDataAsset);
  ~CarData();

  const char* GetTextureAsset() const;
  const float GetTopSpeed() const;
  const float GetAcceleration() const;
  const float GetBraking() const;
  const float GetHandling() const;
};

