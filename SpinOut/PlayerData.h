#pragma once

#include "BaseData.h"

#include <list>

class PlayerData : public BaseData
{
public:
  ~PlayerData();

  static PlayerData& GetInstance();

  PlayerData(PlayerData const&) = delete;
  void operator=(PlayerData const&) = delete;

  const std::list<std::string>& GetCarAssets() const { return m_carAssets; }
  void AddCarAsset(const std::string& carAsset) { m_carAssets.push_back(carAsset); }

  size_t GetCurrentLicenseLevel() const { return m_currentLicenseLevel; }

  /// \brief Sets the current license level of the player to the max of either the input or their current level
  void SetCurrentLicenseLevel(int currentLicenseLevel);

private:
  PlayerData();

  std::list<std::string> m_carAssets;
  size_t m_currentLicenseLevel;
};

