# 16-adic Proof of the Collatz Conjecture  
[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.15516923.svg)](https://doi.org/10.5281/zenodo.15516923)  

**Enrique A. Ramirez Bochard**  

## Abstract  
We prove the Collatz Conjecture via **uniform 16-adic descent** and **prime decay**, eliminating infinite cycles. 
The proof is self-contained, requiring only modular arithmetic and combinatorial reasoning. 

## Repository Contents
- **Preprint**: [`ramirez-bochard_collatz_proof_16adic.pdf`](docs/ramirez-bochard_collatz_proof_16adic_2025_05_26.pdf)  
- **Key Lemmas**: [`collatz_key_lemmas_excerpt.pdf`](docs/collatz_key_lemmas_excerpt.pdf)  
- **Verification Code**: [`collatz_16adic_verification.cpp`](code/collatz_16adic_verification.cpp)  

## How to Verify  
1. Compile the C++ code with:  
   ```bash
   g++ -std=c++17 -O3 code/collatz_16adic_verification.cpp -o collatz_verify
   ```  
2. Run:  
   ```bash
   ./collatz_verify
   ```  
