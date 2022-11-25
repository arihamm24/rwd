#include <iostream>

int main() {
int tbsp = 0;

  std::cout << "How many tablespoons are you using?" ;

  std::cin >> tbsp;

  double ml = 0.68 * tbsp;

  std::cout << "You will need about " << ml << " milliliters for your recipe";
}