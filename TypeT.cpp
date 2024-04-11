/**
*Astro643
*04.10.24
*TypeT.h
*v0.1
**/

//headers
#include "TypeT.h"

//namespace
using namespace std;

//functions
TypeT string_to_TypeT(string t){
	//variables
	TypeT type = TypeT::NA;
	string uc = "";

	//code
	for (int x = 0; x < t.length(); x++){
		uc += toupper(t[x]);
	}

	if(uc == "NORMAL"){
		type = TypeT::NORMAL;
	}else if(uc == "FIRE"){
		type = TypeT::FIRE;
	}else if(uc == "WATER"){
		type = TypeT::WATER;
	}else if(uc == "GRASS"){
		type = TypeT::GRASS;
	}else if(uc == "ELECTRIC"){
		type = TypeT::ELECTRIC;
	}else if(uc == "ICE"){
		type = TypeT::ICE;
	}else if(uc == "FIGHTING"){
		type = TypeT::FIGHTING;
	}else if(uc == "POISON"){
		type = TypeT::POISON;
	}else if(uc == "GROUND"){
		type = TypeT::GROUND;
	}else if(uc == "FLYING"){
		type = TypeT::FLYING;
	}else if(uc == "PSYCHIC"){
		type = TypeT::PSYCHIC;
	}else if(uc == "BUG"){
		type = TypeT::BUG;
	}else if(uc == "ROCK"){
		type = TypeT::ROCK;
	}else if(uc == "GHOST"){
		type = TypeT::GHOST;
	}else if(uc == "DRAGON"){
		type = TypeT::DRAGON;
	}else if(uc == "DARK"){
		type = TypeT::DARK;
	}else if(uc == "STEEL"){
		type = TypeT::STEEL;
	}else if(uc == "FAIRY"){
		type = TypeT::FAIRY;
	}

	//return
	return type;
}

string TypeT_to_string(TypeT t){
	//variables
	string type = "";

	//code
	switch(t){
		case TypeT::NORMAL:
			type = "NORMAL";
			break;
		case TypeT::FIRE:
			type = "FIRE";
			break;
		case TypeT::WATER:
			type = "WATER";
			break;
		case TypeT::GRASS:
			type = "GRASS";
			break;
		case TypeT::ELECTRIC:
			type = "ELECTRIC";
			break;
		case TypeT::ICE:
			type = "ICE";
			break;
		case TypeT::FIGHTING:
			type = "FIGHTING";
			break;
		case TypeT::POISON:
			type = "POISON";
			break;
		case TypeT::GROUND:
			type = "GROUND";
			break;
		case TypeT::FLYING:
			type = "FLYING";
			break;
		case TypeT::PSYCHIC:
			type = "PSYCHIC";
			break;
		case TypeT::BUG:
			type = "BUG";
			break;
		case TypeT::ROCK:
			type = "ROCK";
			break;
		case TypeT::GHOST:
			type = "GHOST";
			break;
		case TypeT::DRAGON:
			type = "DRAGON";
			break;
		case TypeT::DARK:
			type = "DARK";
			break;
		case TypeT::STEEL:
			type = "STEEL";
			break;
		case TypeT::FAIRY:
			type = "FAIRY";
			break;
		default:
			type = "NA";
	}

	//return
	return type;
}