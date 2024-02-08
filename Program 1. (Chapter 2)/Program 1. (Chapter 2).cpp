#include <iostream>
#include <iomanip>

// The inputs are the original price, mark up percentage, and sales tax
// The program calculates the final price using mathematical functions
// The output is the inputs and final price

int main()
{
    double original_price;
    std::cout << "What is the original price of the item?\n";
    std::cin >> original_price;

    double mark_up_percentage;
    std::cout << "What is the mark up percentage?\n";
    std::cin >> mark_up_percentage;

    double sales_tax;
    std::cout << "What is the sales tax percentage?\n";
    std::cin >> sales_tax;

    double selling_price = original_price + (original_price * (mark_up_percentage / 100));
    double final_price = selling_price + (selling_price * (sales_tax / 100));
    
    std::cout << "The original price of the item is $" << original_price << ".\n";
    std::cout << "The mark up percentage of the item is " << mark_up_percentage << "%.\n";
    std::cout << "The store's selling price of the item is $" << selling_price << "\n";
    std::cout << "The sales tax percentage of the item is " << sales_tax << "%.\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The final price is $" << final_price << ".";
}