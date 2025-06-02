#ifndef Card_h
#define Card_h
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<random>
#include<map>
using namespace std;
class Card {
public:
	string suit;
	string rank;
	Card(string,string);
	string toString()const;
	bool isRed()const;
};
#endif