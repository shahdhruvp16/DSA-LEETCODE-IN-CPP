// Write a program that takes an input of age and prints if you are adult or not
#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult" << endl;
    }
    else
    {
        cout << "You are not an adult" << endl;
    }
    return 0;
}

/* if i take age = 18 --> You are an adult
if i take age = 17 --> You are not an adult
*/

/*Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise.*/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 50)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 35)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;

}

/* if i take marks = 91 --> Grade A
if i take marks = 75 --> Grade B
if i take marks = 51 --> Grade C
if i take marks = 36 --> Grade D
if i take marks = 34 --> Fail
*/