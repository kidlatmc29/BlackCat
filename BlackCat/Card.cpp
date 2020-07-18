// Card.cpp 

#include "Card.h"

 Card::Card(rank r, suit s, bool ifu): m_Rank(r), m_Suit(s), m_IsFaceUp(ifu) {}

int Card::getValue() const
{
 int value = 0;
 if(m_IsFaceUp) {
     value = m_Rank; 
     if(value > HIGHEST_RANK)
     {
         value = HIGHEST_RANK;
     }
 }
}