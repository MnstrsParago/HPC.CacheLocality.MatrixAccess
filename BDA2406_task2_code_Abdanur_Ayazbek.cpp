#include <iostream>
#include <vector>
#include <chrono>

int main() {
    const int N = 4000;
    std::vector<int> A(N * N, 1);
    long long sum = 0;

    // ========== Experiment A: Row-wise ==========
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            sum += A[i * N + j];

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;

    std::cout << "Row-wise sum = " << sum << std::endl;
    std::cout << "Row-wise time = " << elapsed.count() << " seconds\n";

    // ========== Experiment B: Column-wise ==========
    sum = 0;
    start = std::chrono::high_resolution_clock::now();

    for (int j = 0; j < N; ++j)
        for (int i = 0; i < N; ++i)
            sum += A[i * N + j];

    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;

    std::cout << "Column-wise sum = " << sum << std::endl;
    std::cout << "Column-wise time = " << elapsed.count() << " seconds\n";

    return 0;
}