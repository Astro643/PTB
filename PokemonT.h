/**
*Astro643
*04.08.24
*PokemonT.h
*v0.2
**/

//pragma once
#pragma once

//headers
#include <string>
#include "TypeT.h"
#include "NatureT.h"

//class
class PokemonT{
	//private
	std::string name;
	TypeT typeOne;
	TypeT typeTwo;
	NatureT nature;
	int hp;
	int lvl;
	int atk;
	int def;
	int sAtk;
	int sDef;
	int spd;

	//public
	//default ctor
	PokemonT(void);

	//filled ctor
	PokemonT(std::string n, TypeT tO, TypeT tT, NatureT nat, int h, int l, int a, int d, int sA, int sD, int s);

	//setters
	void setName(std::string n);
	void setTypeOne(TypeT tO);
	void setTypeTwo(TypeT tT);
	void setTypes(TypeT tO, TypeT tT);
	void setTypeOne(std::string tO);
	void setTypeTwo(std::string tT);
	void setTypes(std::string tO, std::string tT);
	void setNature(NatureT n);
	void setNature(std::string n);
	void setHP(int h);
	void setLvl(int l);
	void setAtk(int a);
	void setDef(int d);
	void setSAtk(int sA);
	void setSDef(int sD);
	void setSpd(int s);

	//getters
	std::string getName(void);
	TypeT getTypeOne(void);
	TypeT getTypeTwo(void);
	NatureT getNature(void);
	int getHP(void);
	int getLvl(void);
	int getAtk(void);
	int getDef(void);
	int getSAtk(void);
	int getSDef(void);
	int getSpd(void);
};