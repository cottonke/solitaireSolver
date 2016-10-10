#include <iostream>
#include <vector>
#include <memory>

#include "Card.h"
#include "Deck.h"

int main()
{
    std::cout << "Starting to solve some solitaire stuff!" << std::endl;

    std::vector<std::shared_ptr<Card>> cards;

    for(auto s = 0; s < 4; s++)
    {
        for(auto v = 0; v < 13; v++)
        {
            cards.push_back(std::make_shared<Card>(static_cast<Suit>(s), static_cast<Value>(v)));
        }
    }

    Deck deck(cards);

    deck.shuffle();
    deck.print();

    return 0;
}

