/**
*Astro643
*04.08.24
*NatureT.h
*v0.1.1
**/

//pragma once
#pragma once

//headers
#include <string>

//enum
enum class NatureT{HARDY, LONELY, ADAMANT, NAUGHTY, BRAVE, BOLD, DOCILE, IMPISH, LAX, RELAXED, MODEST, MILD, BASHFUL, RASH, QUIET, CALM, GENTLE, CAREFUL, QUIRKY, SASSY, TIMID, HASTY, JOLLY, NAIVE, SERIOUS, NA};

//functions
NatureT string_to_NatureT(std::string n);
std::string NatureT_to_string(NatureT n);