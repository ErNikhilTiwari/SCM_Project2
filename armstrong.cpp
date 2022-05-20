#include<iostream>
//#include<math.h> // include math header file in program
using namespace std;

int main() {
    
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int orignaln = n; // stores the real instance of n
    int sum=0; // sum of cube of all individual digits will be stored in this
    while (n>0) 
    { 
        int lastdigit = n%10;
        sum += lastdigit*lastdigit*lastdigit; 
        n = n/10; 
    }

    // to check the number and print output acc to it
    if (sum==orignaln)
    {
        cout << "This is a Armstrong Number" << endl; 
    }
    else {
        cout << "Not a Armstrong Number" << endl;
    }

    // these are written for debugging purposes 
    // cout << orignaln << endl;
    // cout << sum << endl;  
    

    return 0;
}