#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    clock_t start, end;

    cout << "This program adds numbers \n";
    int num1;
    int num2;
    // creates two integer variables
    cout << "Enter the first number: ";
    cin >> num1;
    // assigns the first input to num 1
    cout << "Enter the second number: ";
    cin >> num2;
    // assigns the second input to num 2
    start = clock();
    // start collects the clocks ticks at that point in the program
    cout << "The result is " << num1+num2 << "\n";
    // outputs the result
    end = clock();
    // end has the value of the clocks ticks at that point
    float time_taken = float(end - start) / float(CLOCKS_PER_SEC);
    // time_taken stores the difference between the end of the program and the start divided by 1,000,000 to convert to seconds
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec \n";
    
    return 0;
}
