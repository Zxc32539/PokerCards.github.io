#ifndef Pile_h
#define Pile_h
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<random>
#include<map>
#include"Card.h"
class Pile {
private:
	vector<Card>cards;
public:
	void addCard(Card);
	Card removeCard();
	Card topCard()const;
	bool empty()const;
	void display()const;
	int size()const;
};
#endif