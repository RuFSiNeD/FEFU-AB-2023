#include "fstream"
#include "iostream"

using namespace std;

int main() {
    int n, sum = 0;
    ifstream input("input.txt");
    ofstream output("output.txt");
    input >> n;
    int a[n];
    char b[n];
    for(int i = 0; i < n; i++){
        input >> a[i];
    }
    for(int i = 0; i < n; i++){
        input >> b[i];
    }
    for(int i = 0; i < n; i++){
        if(b[i] == '+'){
            sum += a[i];
        }
    }
    output << sum;
    output.close();
    input.close();
    return 0;
}
