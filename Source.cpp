#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int
main()
{
    char tekrar;

    srand(time(0));
    int choose1;
    

    do {
    cout << "Hello! Rock,Paper, Scissors Game!" << endl;
    cout << "1. rock" << endl;
    cout << "2. papers" << endl;
    cout << "3. scissors" << endl;
    cout << "Make a decision (1-3)\n";

    cin >> choose1;
    cout << "Your decision is " << choose1 << endl;

    int choose2 = rand() % 3 + 1;

    cout << "Computer decision is " << choose2 << endl;

    if (choose1 == choose2) {
        cout << "Draw!\n";
    }
    else if ((choose1 == 1 && choose2 == 3) || (choose1 == 2 && choose2 == 1) || (choose1 == 3 && choose2 == 2))
    {
        cout << "congratulations you won\n";
    }
    else {
        cout << "Unfortunately you lost\n";
    }

    cout << "Type 'h' to play again\n";
        cin >> tekrar;
    }

    while (tekrar == 'H' || tekrar == 'h');

    return 0;
}
