#include "Game.h"
#include "Card.h"
#include "Deck.h"
#include "Pile.h"
#include <iostream>
#include <string>
using namespace std;
void showInstructions() {
    cout << "可用指令如下：\n";
    cout << "  draw            -> 從牌堆抽一張牌\n";
    cout << "  move X Y        -> 將第 X 堆的最上面一張牌移動到第 Y 堆\n";
    cout << "  show            -> 顯示當前場面\n";
    cout << "  exit            -> 離開遊戲\n";
}
void runGame() {
    Game game;
    game.deal();
    string command;
    showInstructions();
    while (true) {
        cout << "\n請輸入指令: ";
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
                cout << "無效堆疊編號，請輸入 1 到 7 之間的整數。\n";
            }
        }
        else if (command == "show") {
            game.display();
        }
        else if (command == "exit") {
            cout << "遊戲結束，感謝遊玩！\n";
            break;
        }
        else {
            cout << "無效指令，請重新輸入。\n";
            showInstructions();
        }
    }
}
int main() {
    runGame();
    return 0;
}