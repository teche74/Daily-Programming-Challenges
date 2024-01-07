#include <iostream>
#include <vector>
#define ll long long


int main() {
    ll n;
    std::cin >> n;

    ll totalSum = (n * (n + 1)) / 2;

    if (totalSum % 2 == 0) {
        std::cout << "YES\n";

        ll targetSum = totalSum / 2;
        std::vector<ll> set1, set2;

        ll currentSum = 0;

        for (ll i = n; i >= 1; --i) {
            if (currentSum + i <= targetSum) {
                set1.push_back(i);
                currentSum += i;
            } else {
                set2.push_back(i);
            }
        }

        std::cout << set1.size() << '\n';
        for (ll element : set1) {
            std::cout << element << ' ';
        }
        std::cout << '\n';

        std::cout << set2.size() << '\n';
        for (ll element : set2) {
            std::cout << element << ' ';
        }
        std::cout << '\n';
    } else {
        std::cout << "NO\n";
    }

    return 0;
}