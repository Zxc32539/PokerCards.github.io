#include "Game.h"
#include "Card.h"
#include "Deck.h"
#include "Pile.h"
#include <iostream>
#include <string>
using namespace std;
void showInstructions() {
    cout << "�i�Ϋ��O�p�U�G\n";
    cout << "  draw            -> �q�P���@�i�P\n";
    cout << "  move X Y        -> �N�� X �諸�̤W���@�i�P���ʨ�� Y ��\n";
    cout << "  show            -> ��ܷ�e����\n";
    cout << "  exit            -> ���}�C��\n";
}
void runGame() {
    Game game;
    game.deal();
    string command;
    showInstructions();
    while (true) {
        cout << "\n�п�J���O: ";
        cin >> command;
        if (command == "draw") {
            game.drawFromStock();
        }
        else if (command == "move") {
            int from, to;
            cin >> from >> to;
            if (from >= 1 && from <= 7 && to >= 1 && to <= 7) {
                auto& tableau = game.getTableau();
                game.moveCard(tableau[from - 1], tableau[to - 1]);
            }
            else {
                cout << "�L�İ��|�s���A�п�J 1 �� 7 ��������ơC\n";
            }
        }
        else if (command == "show") {
            game.display();
        }
        else if (command == "exit") {
            cout << "�C�������A�P�¹C���I\n";
            break;
        }
        else {
            cout << "�L�ī��O�A�Э��s��J�C\n";
            showInstructions();
        }
    }
}
int main() {
    runGame();
    return 0;
}