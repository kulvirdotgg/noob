#include <chrono>
#include <iostream>
#include <string>
#include <vector>

void benchTrivial(int n, int len) {
    auto start = std::chrono::high_resolution_clock::now();

    std::string str;
    for (int i = 0; i < n; ++i) {
        int iters = len;
        while (iters--) {
            str += 'a';
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "+=   : " << duration.count() << " ms" << '\n';
}

void benchBetter(int n, int len) {
    auto start = std::chrono::high_resolution_clock::now();

    std::string str;
    for (int i = 0; i < n; ++i) {
        str += std::string(len, 'a');
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "better   : " << duration.count() << " ms" << '\n';
}

void benchAppend(int n, int len) {
    auto start = std::chrono::high_resolution_clock::now();

    std::string result;
    for (int i = 0; i < n; ++i) {
        result.append(len, 'a');
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "append: " << duration.count() << " ms" << std::endl;
}

int main() {
    std::vector<std::pair<int, int>> testCases = {
        {1000, 10}, {1000, 100}, {1000, 1000}, {10000, 10}};

    for (auto [n, len] : testCases) {
        std::cout << n << " | " << len << '\n';
        benchTrivial(n, len);
        benchBetter(n, len);
        benchAppend(n, len);
        std::cout << '\n';
    }
    return 0;
}
