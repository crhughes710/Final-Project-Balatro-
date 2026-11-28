#include "BalatroGame.h"
#include <iostream>
#include <memory>
#include "Player.h"
#include "RedDeckPlayer.h"
#include "GreenDeckPlayer.h"
#include "BlueDeckPlayer.h"


BalatroGame::BalatroGame() {
    chooseDeck();
}

void BalatroGame::displayRules() {
    
}

void BalatroGame::chooseDeck() {
    std::cout << "Please choose a deck.\n\n1.Red Deck: +1 Hand to play.\n2.Green Deck: Generates more money per round.\n3.Blue Deck: +1 Discards and +5 Starting Money." << std::endl;
    std::cout << "\n(Please input the decks number)\n";
    std::cin >> choice;
    if (choice == 1) {
        player = std::make_unique<RedDeckPlayer>();
    }
    if (choice == 2) {
        player = std::make_unique<GreenDeckPlayer>();
    }
    if (choice == 3) {
        player = std::make_unique<BlueDeckPlayer>();
    }
    std::cout << "\nYou have chosen the " << player->getName() << " Deck. Goodluck!" << std::endl; // This is an example of polymorphism
}

int roundStart(int ,int ,int) {

}