#include "utils/RobotStartup.h"

void wom::RobotStartup::Start(std::function<int()> robotFunc) {
  robotFunc();
}