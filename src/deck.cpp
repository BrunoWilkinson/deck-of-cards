#include <algorithm>
#include <random>
#include "deck.h"
#include "card.h"

const short int deck_size_num = 52;
const short int num_of_suits = deck_size_num / 13;
const short int cards_per_suit = deck_size_num / num_of_suits;

std::vector<Card> create_suit(Suit suit)
{
    std::vector<Card> output;
    for (int i = 1; i < cards_per_suit; ++i)
    {
        Card card { suit, (Rank)i };
        output.push_back(card);
    }
    return output;
}

Deck::Deck()
{
    for (int i = 0; i < num_of_suits; ++i)
    {
        switch (i)
        {
            case SPADES: {
                std::vector<Card> suit_of_card = create_suit(SPADES);
                cards.insert(cards.end(), suit_of_card.begin(), suit_of_card.end());
                break;
            }
            case HEARTS: {
                std::vector<Card> suit_of_card = create_suit(HEARTS);
                cards.insert(cards.end(), suit_of_card.begin(), suit_of_card.end());
                break;
            }
            case DIAMONDS: {
                std::vector<Card> suit_of_card = create_suit(DIAMONDS);
                cards.insert(cards.end(), suit_of_card.begin(), suit_of_card.end());
                break;
            }
            case CLUBS: {
                std::vector<Card> suit_of_card = create_suit(CLUBS);
                cards.insert(cards.end(), suit_of_card.begin(), suit_of_card.end());
                break;
            }
        }
    }
}

Deck::~Deck()
{
    cards.clear();
}

void Deck::shuffle_deck()
{
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(cards), std::end(cards), rng);
}

void Deck::set_cards(std::vector<Card> new_cards)
{
    cards = new_cards;
}

const Card& Deck::deal_card()
{
    return cards.at(0);
}

std::size_t Deck::remaining()
{
    return cards.size();
}

int Deck::deck_size()
{
    return deck_size_num;
}