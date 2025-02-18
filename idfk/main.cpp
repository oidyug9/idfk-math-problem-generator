// import iostream and time
#include <iostream>
#include <ctime>

// so i dont have to type std:: everytime
using namespace std;

// varibles
int Score;
int incorrect;
int correct;

double FinnalResult;
double UserInput;

// main script
int main() {

    int I = 10;
    while (I>0) {
        srand(time(0)); // seed

        I--;

        // set random ints
        int RandInt1 = rand() % 101;
        int RandInt2 = rand() % 101;
        int Equation = rand() % 4;
        char Symbol;

        while (RandInt2>RandInt1 & (Equation==3 | Equation==1)) {
            RandInt2 = rand() % 101;
        }

        // checks type Equation and sets Symbol
        if (Equation==0) {
            FinnalResult = RandInt1 + RandInt2;
            Symbol = '+';
        }else if (Equation==1) {
            FinnalResult = RandInt1 - RandInt2;
            Symbol = '-';
        }else if (Equation==2) {
            FinnalResult = RandInt1 * RandInt2;
            Symbol = '*';
        }else if (Equation==3) {
            FinnalResult = RandInt1 / RandInt2;
            Symbol = '/';
        }

        
        // print equation 
        cout <<RandInt1<<Symbol<<RandInt2<< "\n";
        cout << "> ";

        //ask for number
        cin >> UserInput;
        // check if answer is correct
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            FinnalResult*69;
        }

        // compares The correct answer with answer
        if (FinnalResult == UserInput) {
            Score++;
            correct++;
            cout << "Correct!!\n \n";
        }
        else {
            incorrect++;
            cout << "Wrong!!\n \n";
        }
    }

    // stats
    cout << "     FINNAL SCORE:\n";
    cout << "Correct answers: " << correct << "\n";
    cout << "incorrect answers: " << incorrect << "\n";
    cout << "percentage of correct answers:" << correct*10 <<"%\n";
}
