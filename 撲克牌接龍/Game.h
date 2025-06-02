#include<iostream>
#include<string>
#include<vector>
#ifndef Game_h
#define Game_h
#include<algorithm>
#include<random>
#include<map>
#include"Card.h"
#include"Deck.h"
#include"Pile.h"
class Game {
private:
	Deck deck;
	vector<Pile>tableau;
	map<string,Pile>foundation;
	Pile stock;
	Pile waste;
public:
	Game();
	void deal();
	void drawFromStock();
	void moveCard(Pile& , Pile& );
	void display();
	vector<Pile>& getTableau();
	map<string, Pile>& getFoundation();
	Pile& getStock();
	Pile& getWaste();
};
#endif