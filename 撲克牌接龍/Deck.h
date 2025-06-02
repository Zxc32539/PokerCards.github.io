#ifndef Deck_h
#define Deck_h
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<random>
#include<map>
#include"Card.h"
class Deck {
private:
	vector<Card>cards;
public:
	Deck();
	void shuffle();
	Card draw();
	bool empty()const;
	int size()const;
};
#endif