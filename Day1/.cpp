#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
  
    // Declare second integer, double, and String variables.
    int integer;
    double decimal;
    string word;
    
    // Read and save an integer, double, and String to your variables.
    cin >> integer;
    cin >> decimal;
    getline (cin,word);
    getline (cin,word);
    // Print the sum of both integer variables on a new line.
    cout << int(integer+i) << endl;
    // Print the sum of the double variables on a new line.
    cout.precision(1);
    cout << fixed << decimal + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + word ;

    return 0;
