#ifndef _Hand_Card_H
#define _Hand_Card_H

#include<vector>
#include"Card.h"
class Hand_Card{
public:
    //构造函数
    Hand_Card();
    //向手牌中放入一张新牌
    void push(Card new_card);
    //扔掉第rank张手牌，并返回该牌
    const Card &discard(int rank);
    //替换掉第rank张手牌为rep_card
    void replace(int rank,Card rep_card);
private:
    std::vector<Card> C;
    Card temp_card;
    int card_num;
    int max;
};
#endif