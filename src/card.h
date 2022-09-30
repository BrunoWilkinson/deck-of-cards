#ifndef CARD_H
#define CARD_H

enum Suit {
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS
};

enum Rank {
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

class Card {
public:
    Card(Suit create_suit = Suit::SPADES, Rank create_rank = Rank::ACE) : suit(create_suit), rank(create_rank) {};
    Card(const Card& card) : suit(card.suit), rank(card.rank) {};
    ~Card();
    Suit get_suit() const { return suit; }
    Rank get_rank() const { return rank; }
    void set_suit(Suit new_suit);
    void set_rank(Rank new_rank);
    void print();
private:
    Suit suit;
    Rank rank;
};

#endif // CARD_H
