#include <iostream>
//CSC 134
//M3LAB2
//Nia Cabbell
//9/23/2024

using namespace std;

int main()
{
    int num_grade;

    cout << "Please enter a number grade (0-100)" << endl;
    cin >> num_grade;

    if (num_grade == 100) {
            cout << "Congratulations on the A+ !" << endl;
   }
    else if (num_grade >= 90) {
        cout << "You got an A" << endl;
   }
    else if (num_grade >= 80) {
        cout << "You got a B" << endl;
   }
    else if (num_grade >= 70) {
    cout << "You got a C" << endl;
   }
   else if (num_grade >= 60) {
    cout << "You got a D" << endl;
   }
   else {
    cout << "You got a F." <<endl;
   }

    return 0;
}
