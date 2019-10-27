#ifndef STUDENTRESOURCEMAPS_H
#define STUDENTRESOURCEMAPS_H

#include "core/basicresources.h"

namespace Student {

namespace ConstResourceMaps {

const Course::ResourceMap ROCK_BP = {
    {Course::MONEY, 2},
    {Course::FOOD, 0},
    {Course::WOOD, 0},
    {Course::STONE, 5},
    {Course::ORE, 3},
};

const Course::ResourceMap WATER_BP = {
    {Course::MONEY, 2},
    {Course::FOOD, 1},
    {Course::WOOD, 0},
    {Course::STONE, 0},
    {Course::ORE, 0},
};

const Course::ResourceMap SAND_BP = {
    {Course::MONEY, 1},
    {Course::FOOD, 0},
    {Course::WOOD, 0},
    {Course::STONE, 3},
    {Course::ORE, 5},
};

}

}

#endif // STUDENTRESOURCEMAPS_H