#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    auto res = vec |
               std::views::filter([](int n) {
                   return n % 2 == 0;
               }) |
               std::views::transform([](int n) {
                   return n * 2;
               });

    for (auto n : res) {
        std::cout << n << ' ';
    }

    return 0;
}
