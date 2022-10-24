#include <functional>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int anyNumber = 123456789;
    
    function<void()> reverseByRecursiveLambda;
    
    reverseByRecursiveLambda = [&]() {
        if (anyNumber == 0)
            return;
        
        cout << anyNumber % 10 << " ";
        anyNumber /= 10;
        reverseByRecursiveLambda();
    };
    
    reverseByRecursiveLambda();
}
