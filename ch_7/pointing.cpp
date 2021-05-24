#include<iostream>
#include<string>

using namespace std;

int main() {
    int* pAPointer;
    int* pScore = 0;

    int score = 0;
    pScore = &score;

    cout << "Assigning &score to pScore\n";
    cout << "&score is: " << &score << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to score\n";
    score += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &newScore to pScore\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "newScore is: " << newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &str to pStr\n";
    string str = "score";
    string* pStr = &str;
    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << *pStr << "\n";
    cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
    cout << "pStr->size() is: " << pStr->size() << "\n";
    cout << "str.size() is: " << str.size() << "\n";

    // Constant Pointer
    int score2 = 100;
    int* const pScore2 = &score2;
    *pScore = 500;

    // Pointer to a Constant
    const int* pNumber;
    int lives = 3;
    pNumber = &lives;
    // *pNumber -= 1; // this is illegal. you cannot change the value that a pointer to a constant points to.
    // however, you can change the pointer so that it points to another value.
    const int MAX_LIVES = 5;
    pNumber = &MAX_LIVES;

    // Constant Pointer to a Constant (combines above two types of pointers.)
    // This pointer cannot be changes to point to another value, and cannot be used to change the value it points to.
    int BONUS = 100;
    const int* const pBONUS = &BONUS;
    // pBONUS = &MAX_LIVES; // illegal, you cannot change pBONUS to point to another value.
    // *pBONUS = MAX_LIVES; // also illegal, you cannot change the value that pBONUS points to.

    

    return 0;

}
