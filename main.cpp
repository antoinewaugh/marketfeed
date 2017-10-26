#include <iostream>
#include "OrderBook.h"

int main() {

    OrderBook book;
    book.add_bid(1, 1900.00, 2);
    book.add_bid(1, 1900.25, 102);
    book.add_ask(1, 1900.5, 901);
    book.add_ask(2, 1900.75, 24);
    book.update_ask(1, 1900.5, 903);
    std::cout << book << '\n';

}