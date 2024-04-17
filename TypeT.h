/**
*Astro643
*04.08.24
*TypeT.h
*v0.1.1
**/

//pragma once
#pragma once

//headers
#include <string>

//enum
enum class TypeT{NORMAL, FIRE, WATER, GRASS, ELECTRIC, ICE, FIGHTING, POISON, GROUND, FLYING, PSYCHIC, BUG, ROCK, GHOST, DRAGON, DARK, STEEL, FAIRY, NA};

//functions
TypeT string_to_TypeT(std::string t);
std::string TypeT_to_string(TypeT t);