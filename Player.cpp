#include "Player.h"

std::tuple<uint16_t,std::string> Player::GetPlayerTask()
{
    std::tuple<uint16_t, std::string> Tuple = std::make_tuple(task.TaskID, task.TaskText);
    for (size_t i = 0; i < std::tuple_size_v<std::tuple<uint16_t, std::string>> / 2; i++)
    {
        std::cout << "ID:" << std::get<0>(Tuple) << "  | Task: " << std::get<1>(Tuple);
    }
    return std::make_tuple(task.TaskID, task.TaskText);
}

float Player::GetStatePlayer()
{
    return coord.x, coord.y, coord.z;
}

void Player::DebugMode()
{
    
    
}
