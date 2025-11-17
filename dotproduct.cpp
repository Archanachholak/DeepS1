#include <iostream>
#include <vector>
using namespace std;
int dotProduct(const vector<int>& vecA, const vector<int>& vecB) {
    if (vecA.size() != vecB.size()) {
        // Handle error: Vectors must be of the same size
        return -1; // Or throw an exception
    }

    int product = 0;
    for (size_t i = 0; i < vecA.size(); ++i) {
        product += vecA[i] * vecB[i];
    }
    return product;
}

int main() {
    vector<int> vectorA = {1, 3, -5};
    vector<int> vectorB = {4, -2, -1};

    int result= dotProduct(vectorA, vectorB);
    cout << "Dot product is : " << result<< endl; // Output: Dot product: 3
    return 0; 
}
