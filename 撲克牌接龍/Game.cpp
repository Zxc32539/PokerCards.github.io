#include"Game.h"
Game::Game():tableau(7) {
	foundation["Hearts"] = Pile();
	foundation["Diamonds"] = Pile();
	foundation["Clubs"] = Pile();
	foundation["Spades"] = Pile();
}
void Game::deal(){
	for (int i = 0; i < 7;i++) {
		for (int j = i; j < 7;j++) {
			tableau[j].addCard(deck.draw());
		}
    }
    while (!deck.empty()) {
		stock.addCard(deck.draw());
	}
}
void Game::drawFromStock() {
	if (stock.empty()) {
		cout << "No more cards in stock!" << endl;
		return;
	}
	waste.addCard(stock.removeCard());
}
void Game::moveCard(Pile& fromPile, Pile& toPile) {
	if (fromPile.empty()) {
		cout<< "No cards to move!" << endl;
		return;
	}
	Card movingcard = fromPile.removeCard();
	toPile.addCard(movingcard);
}
void Game::display() {
	cout << "\n--- Tableau ---" << endl;
	for (size_t i = 0; i < tableau.size();i++) {
		cout << "Pile" << i + 1 << ":";
		tableau[i].display();
	}
	cout << "\n--- Foundation ---" << endl;
	for (const auto& pair:foundation) {
		cout << pair.first << ":";
		pair.second.display();
	}
	cout << "\n--- Waste ---" << endl;
	waste.display();
	cout << "\n--- Stock ---" << endl;
	cout << stock.size() << "cards remaining\n" << endl;
}
vector<Pile>& Game::getTableau() {
	return tableau;
}
map<string, Pile>& Game::getFoundation() {
	return foundation;
}
Pile& Game::getStock() {
	return stock;
}
Pile& Game::getWaste() {
	return waste;

}