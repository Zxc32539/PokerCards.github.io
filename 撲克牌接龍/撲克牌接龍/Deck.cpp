#include"Deck.h"
Deck::Deck() {
	vector<string>suits = { "Hearts","Diamonds","Clubs","Spades" };
	vector<string>ranks = {"A","2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	for (const string& suit:suits) {
		for (const string& rank : ranks) {
			cards.emplace_back(suit, rank);
		}
	}
	shuffle();
}
void Deck::shuffle() {
	random_device rd;
	mt19937 g(rd());
	std::shuffle(cards.begin(),cards.end(),g);
}
Card Deck::draw() {
	if (cards.empty()) {
		throw runtime_error("Deck is empty!");
	}
	Card c = cards.back();
	cards.pop_back();
	return c;
}
bool Deck::empty()const {
	return cards.empty();
}
int Deck::size()const {
	return cards.size();
}