#ifndef DECK_H
#define DECK_H

#include <vector>

class Card;

class Deck {
public:
    Deck();
    Deck(const Deck& deck) : cards(deck.cards) {};
    ~Deck();
    std::vector<Card> get_cards() const { return cards; }
    void set_cards(std::vector<Card> new_cards);
    void shuffle_deck();
    const Card& deal_card();
    std::size_t remaining();
    int deck_size();
private:
    std::vector<Card> cards;
};

#endif // DECK_H