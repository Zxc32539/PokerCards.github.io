#include"Card.h"
Card::Card(string suit, string rank):suit(suit),rank(rank) {}
string Card::toString()const {
	return rank+"of" + suit;
}
bool Card::isRed()const {
	return(suit == "Hearts" || suit == "Diamonds");
}