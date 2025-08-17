#include <iostream>
#include <vector>


using namespace std;

int Factorielle(int n){
    if (n<0) return 0;
    if (n==0 || n==1) return 1;
    return n*Factorielle(n-1);
};

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

int main()
 {  
    int n=3;
    vector<int> A={1,2,3};
    Heap(3,A);
    for( vector<int> perm:Permutations){
        for(int p:perm){
            cout<<p<<" ";
        };
        cout<<endl;
    }
 }
