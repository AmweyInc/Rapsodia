#pragma once
#include "Header.h"

class Task
{
public:
	Task() {
		TaskID = 0;
		TaskText = "Empty";
	};
	std::string TaskText;
	std::uint16_t TaskID;
};