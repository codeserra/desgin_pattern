// Design the data structures for a generic deck of cards.
// Explain how you would sub-class it to implement particular card games
// and how you would subclass the data structures to implement blackjack.
// example taken from Gayle Laakmann and geeksforgeeks

#include <bits/stdc++.h>
using namespace std;

namespace Suit
{
    enum SuitType_ENM
    {
        SPADE,
        HEART,
        CLUB,
        DIAMOND
    };
}

class Card {
  private:
    Suit::SuitType_ENM suitType_e;
    int v;
  public:
  virtual Suit::SuitType_ENM  suit() const
  {
    return s;
  };
  
  virtual int val() const
  {
    return v;
  };
  
  Card (int val, SuitType_ENM suitType_e) : s(suit), v(val) {};
};

class BlackJackCard: public Card{
  public:
    virtual int val()
    {
      int v = Card::val();
      if (v<10)
        return v;
      return 10; 
    }
    BlackJackCard (int val, SuitType_ENM suitType_e) 
      : Card(val, suit){};
};

class player {
private:
  int id;
  int bet; 
  set<int> points;
  vector<BlackJackCard*> bjcs;
  
};
