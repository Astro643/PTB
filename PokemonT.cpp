/**
*Astro643
*04.08.24
*PokemonT.cpp
*v0.2
**/

//headers
#include "PokemonT.h"

//namespace
using namespace std;

//functions
//default ctor
PokemonT::PokemonT(void){
	name = "";
	typeOne = TypeT::NA;
	typeTwo = TypeT::NA;
	nature = NatureT::NA;
	hp = 0;
	lvl = 0;
	atk = 0;
	def = 0;
	sAtk = 0;
	sDef = 0;
	spd = 0;
}
//filled ctor
PokemonT::PokemonT(string n, TypeT tO, TypeT tT, NatureT nat, int h, int l, int a, int d, int sA, int sD, int s){
	name = n;
	typeOne = tO;
	typeTwo = tT;
	nature = nat;
	hp = h;
	lvl = l;
	atk = a;
	def = d;
	sAtk = sA;
	sDef = sD;
	spd = s;
}

//setters
void PokemonT::setName(string n){
	name = n;
}

void PokemonT::setTypeOne(TypeT tO){
	typeOne = tO;
}

void PokemonT::setTypeTwo(TypeT tT){
	typeTwo = tT;
}

void PokemonT::setTypes(TypeT tO, TypeT tT){
	setTypeOne(tO);
	setTypeTwo(tT);
}

void PokemonT::setTypeOne(string tO){
	typeOne = string_to_TypeT(tO);
}

void PokemonT::setTypeTwo(string tT) {
	typeTwo = string_to_TypeT(tT);
}

void PokemonT::setTypes(string tO, string tT) {
	setTypeOne(tO);
	setTypeTwo(tT);
}

void PokemonT::setNature(NatureT n){
	nature = n;
}

void PokemonT::setNature(string n){
	nature = string_to_NatureT(n);
}

void PokemonT::setHP(int h){
	hp = h;
}

void PokemonT::setLvl(int l){
	lvl = l;
}

void PokemonT::setAtk(int a){
	atk = a;
}

void PokemonT::setDef(int d){
	def = d;
}

void PokemonT::setSAtk(int sA){
	sAtk = sA;
}

void PokemonT::setSDef(int sD){
	sDef = sD;
}

void PokemonT::setSpd(int s){
	spd = s;
}

//getters
string PokemonT::getName(void){
	return name;
}

TypeT PokemonT::getTypeOne(void){
	return typeOne;
}

TypeT PokemonT::getTypeTwo(void){
	return typeTwo;
}

NatureT PokemonT::getNature(void){
	return nature;
}

int PokemonT::getHP(void){
	return hp;
}

int PokemonT::getLvl(void){
	return lvl;
}

int PokemonT::getAtk(void){
	return atk;
}

int PokemonT::getDef(void){
	return def;
}

int PokemonT::getSAtk(void){
	return sAtk;
}

int PokemonT::getSDef(void){
	return sDef;
}

int PokemonT::getSpd(void){
	return spd;
}