//
//  main.cpp
//  CurrencyConvertor
//
//  Created by Егор Парамонов on 19.05.2023.
//

#include <iostream>
#include "Currency.hpp"

int main(int argc, const char * argv[]) {
    Currency currency = Currency("USD", 9.11);
    
    currency.convert("BYN");
    
    currency.print();
    return 0;
}
