#include <iostream>
#include "deck.h"
#include "card.h"

void deal_hand(Deck & deck, int num_cards) {
    while(num_cards--) {
        Card card = deck.deal_card();
        card.print();
    }
}

int main()
{
    Deck deck;
    std::cout << "there are " << deck.remaining() << " cards remaining" << std::endl;

    deal_hand(deck, 9);

    std::cout << "there are " << deck.remaining() << " cards remaining" << std::endl;
    return 0;
}