// write a program which takes a number and tells if its present in fibonacci series or not

#include <iostream>
using namespace std;

class Fibonacci {
private:
    int a = 0, b = 1;

public:
    string is_fibonacci(int n) {
        while (b < n) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b == n ? "Yes" : "No";
    }
};

int main() {

    Fibonacci fib;
    cout<<"Enter a number to see if it's present in fibonaci series "<<endl;
    int n;
    cin>>n;
    cout<<fib.is_fibonacci(n);
//     for(int i=0;i<10;i++){
//         cout<< "for "<< i<<" "<<fib.is_fibonacci(i)<<endl;
//     }


    return 0;
}
