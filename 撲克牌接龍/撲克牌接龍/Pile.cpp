#include"Pile.h"
void Pile::addCard(Card card) {
	cards.push_back(card);
}
Card Pile::removeCard() {
	if (cards.empty()) {
		throw runtime_error("Pile is empty!");
	}
	Card c = cards.back();
	cards.pop_back();
	return c;
}
Card Pile::topCard()const {
	if (cards.empty()) {
		throw runtime_error("Pile is empty!");
	}
	return cards.back();
}
bool Pile::empty()const {
	return cards.empty();
}
void Pile::display()const {
	for (const Card& card:cards) {
		cout << "["<<card.toString()<<"]";
	}
	cout << endl;
}
int Pile::size()const {
	return cards.size();
}