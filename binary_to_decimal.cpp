#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int rem,a=0,p=1;
    while(n>0){
        rem=n%10;
        a+=rem*p;
        n=n/10;
        p*=2;
    }
    return a;
}

int main(){ 
    int bin_num;
    cout << "Enter the binary number:\n";
    cin >> bin_num;
    cout << "The decimal value of the binary number is: " << binaryToDecimal(bin_num);
    return 0;
}