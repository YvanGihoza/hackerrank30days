#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N > 0 && N < 101)
    {
        if(N % 2 != 0)
        {
            cout << "Weird" << endl;
        }
        else if(N % 2 == 0)
        {
            if(N >= 2 && N <= 5)
               cout << "Not Weird" << endl;
            else if (N >= 6 && N <= 20)
               cout << "Weird" << endl;
            else
               cout << "Not Weird" << endl;
        }
    }

    return 0;
}
