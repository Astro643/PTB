/**
*Astro643
*04.16.24
*NatureT.cpp
*v0.1
**/

//headers
#include "NatureT.h"

//namespace
using namespace std;

//functions
NatureT string_to_NatureT(string n){
	//variables
	NatureT nature;

	//code
	if(n == "HARDY"){
		nature = NatureT::HARDY;
	}else if(n == "LONELY"){
		nature = NatureT::LONELY;
	}else if(n == "ADAMANT"){
		nature = NatureT::ADAMANT;
	}else if(n == "NAUGHTY"){
		nature = NatureT::NAUGHTY;
	}else if(n == "BRAVE"){
		nature = NatureT::BRAVE;
	}else if(n == "BOLD"){
		nature = NatureT::BOLD;
	}else if(n == "DOCILE"){
		nature = NatureT::DOCILE;
	}else if(n == "IMPISH"){
		nature = NatureT::IMPISH;
	}else if(n == "LAX"){
		nature = NatureT::LAX;
	}else if(n == "RELAXED"){
		nature = NatureT::RELAXED;
	}else if(n == "MODEST"){
		nature = NatureT::MODEST;
	}else if(n == "MILD"){
		nature = NatureT::MILD;
	}else if(n == "BASHFUL"){
		nature = NatureT::BASHFUL;
	}else if(n == "RASH"){
		nature = NatureT::RASH;
	}else if(n == "QUIET"){
		nature = NatureT::QUIET;
	}else if(n == "CALM"){
		nature = NatureT::CALM;
	}else if(n == "GENTLE"){
		nature = NatureT::GENTLE;
	}else if(n == "CAREFUL"){
		nature = NatureT::CAREFUL;
	}else if(n == "QUIRKY"){
		nature = NatureT::QUIRKY;
	}else if(n == "SASSY"){
		nature = NatureT::SASSY;
	}else if(n == "TIMID"){
		nature = NatureT::TIMID;
	}else if(n == "HASTY"){
		nature = NatureT::HASTY;
	}else if(n == "JOLLY"){
		nature = NatureT::JOLLY;
	}else if(n == "NAIVE"){
		nature = NatureT::NAIVE;
	}else if(n == "SERIOUS"){
		nature = NatureT::SERIOUS;
	}else{
		nature = NatureT::NA;
	}

	//return
	return nature;
}

string NatureT_to_string(NatureT n){
	//variables
	string nature;

	//code
	switch(n){
		case NatureT::HARDY:
			nature = "HARDY";
			break;
		case NatureT::LONELY:
			nature = "LONELY";
			break;

		case NatureT::ADAMANT:
			nature = "ADAMANT";
			break;

		case NatureT::NAUGHTY:
			nature = "NAUGHTY";
			break;

		case NatureT::BRAVE:
			nature = "BRAVE";
			break;

		case NatureT::BOLD:
			nature = "BOLD";
			break;

		case NatureT::DOCILE:
			nature = "DOCILE";
			break;

		case NatureT::IMPISH:
			nature = "IMPISH";
			break;

		case NatureT::LAX:
			nature = "LAX";
			break;

		case NatureT::RELAXED:
			nature = "RELAXED";
			break;

		case NatureT::MODEST:
			nature = "MODEST";
			break;

		case NatureT::MILD:
			nature = "MILD";
			break;

		case NatureT::BASHFUL:
			nature = "BASHFUL";
			break;

		case NatureT::RASH:
			nature = "RASH";
			break;

		case NatureT::QUIET:
			nature = "QUIET";
			break;

		case NatureT::CALM:
			nature = "CALM";
			break;

		case NatureT::GENTLE:
			nature = "GENTLE";
			break;

		case NatureT::CAREFUL:
			nature = "CAREFUL";
			break;

		case NatureT::QUIRKY:
			nature = "QUIRKY";
			break;

		case NatureT::SASSY:
			nature = "SASSY";
			break;

		case NatureT::TIMID:
			nature = "TIMID";
			break;

		case NatureT::HASTY:
			nature = "HASTY";
			break;

		case NatureT::JOLLY:
			nature = "JOLLY";
			break;

		case NatureT::NAIVE:
			nature = "NAIVE";
			break;

		case NatureT::SERIOUS:
			nature = "SERIOUS";
			break;

		default:
			nature = "N/A";
	}

	//return
	return nature;
}