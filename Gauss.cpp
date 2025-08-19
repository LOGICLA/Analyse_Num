#include <iostream>
#include <vector>


using namespace std;

// #Generate Permutations using Heap's Algorithm
vector<vector<int>> Permutations;

void swap(int& a,int& b){
    int c = a;
    a=b, b=c;
};

void Heap(int k, vector<int>& A){
    if (k==1) Permutations.push_back(A);
    else 
    for(int i=0; i<k ; i++){
        Heap(k-1,A);
        if(k%2==0) swap(A[i],A[k-1]);
        else swap(A[0],A[k-1]);
    };
};

// Caclulte Permutation's signature 
int signaturePermutation(const vector<int>& perm) {
    int n = perm.size();
    int inversions = 0;
    
    // Number of inversions
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (perm[i] > perm[j]) {
                inversions++;
            }
        }
    }
    
    return (inversions % 2 == 0) ? 1 : -1;
}


int main()
 {  
  
 }
