#pragma once
#include "Header.h"
#include "PositionCoordination.h"
#include "Tasks.h"

class Player
{
private:
	Coordination coord;
	Task task;
public:
	std::tuple<uint16_t, std::string> GetPlayerTask();
	float GetStatePlayer();
	void DebugMode();
};

