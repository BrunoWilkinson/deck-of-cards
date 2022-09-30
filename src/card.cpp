#include <iostream>
#include <string>
#include "card.h"

const std::string ace_str = "Ace";
const std::string jack_str = "Jack";
const std::string queen_str = "Queen";
const std::string king_str = "King";

const std::string spades_str = "Spades";
const std::string heart_str = "Hearts";
const std::string diamonds_str = "Diamonds";
const std::string clubs_str = "Clubs";

Card::~Card()
{
    suit = Suit::SPADES;
    rank = Rank::ACE;
}

void Card::set_suit(Suit new_suit)
{
    suit = new_suit;
}

void Card::set_rank(Rank new_rank)
{
    rank = new_rank;
}

void Card::print() 
{
    switch(rank)
    {
        case ACE:
            std::cout << ace_str << " of ";
            break;
        case JACK:
            std::cout << jack_str << " of ";
            break;
        case QUEEN:
            std::cout << queen_str << " of ";
            break;
        case KING:
            std::cout << king_str << " of ";
            break;
        default:
            std::cout << (int)rank << " of ";
            break;
    }
    switch (suit)
    {
        case SPADES:
            std::cout << spades_str << std::endl;
            break;
        case HEARTS:
            std::cout << heart_str << std::endl;
            break;
        case DIAMONDS:
            std::cout << diamonds_str << std::endl;
        case CLUBS:
            std::cout << clubs_str << std::endl;
            break;
    }
}
