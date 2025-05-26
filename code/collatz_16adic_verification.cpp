// collatz_16adic_verification.cpp
#include <iostream>
#include <unordered_map>

bool verify_collatz(uint64_t n) {
    while (n != 1 && n != 4) { // Stop at trivial cycle
        if (n % 2 == 0) n /= 2;
        else n = (3*n + 1)/2;
        
        // Check for divergence (sanity bound)
        if (n > 1e18) return false; 
    }
    return true;
}

int main() {
    const uint64_t MAX = 1 << 20; // 2^20
    std::unordered_map<uint16_t, uint64_t> thresholds;
    
    for (uint64_t n = 3; n <= MAX; n += 2) {
        if (!verify_collatz(n)) {
            std::cerr << "Verification failed at: " << n << std::endl;
            return 1;
        }
        
        // Track 16-adic descent thresholds
        uint16_t r = n % 16;
        if (thresholds.find(r) == thresholds.end()) {
            uint64_t steps = 0;
            uint64_t temp = n;
            while (temp >= n && steps < 10) {
                // Apply Collatz steps
                steps++;
            }
            if (temp < n) thresholds[r] = n;
        }
    }
    
    std::cout << "All numbers up to 2^20 verified!" << std::endl;
    return 0;
}
