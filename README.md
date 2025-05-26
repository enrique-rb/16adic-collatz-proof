# 16-adic Proof of the Collatz Conjecture  
**Enrique A. Ramirez Bochard**  

## Contents  
- **Preprint**: [`ramirez-bochard_collatz_proof_16adic.pdf`](docs/ramirez-bochard_collatz_proof_16adic_2024-05-26.pdf)  
- **Key Lemmas**: [`collatz_key_lemmas_excerpt.pdf`](docs/collatz_key_lemmas_excerpt.pdf)  
- **Verification Code**: [`collatz_16adic_verification.cpp`](code/collatz_16adic_verification.cpp)  

## Abstract  
We prove the Collatz Conjecture via **uniform 16-adic descent** and **prime decay**, eliminating infinite cycles.  

## How to Verify  
1. Compile the C++ code with:  
   ```bash
   g++ -std=c++17 -O3 code/collatz_16adic_verification.cpp -o collatz_verify
   ```  
2. Run:  
   ```bash
   ./collatz_verify
   ```  
