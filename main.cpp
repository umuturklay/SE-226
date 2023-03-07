#include <iostream>
#include <string>

using namespace std;
int main() {
    string name1;
    int ID;



    cout << "What is your name?" << endl;
    cin >> name1;

    cout << "Hello "+name1 << endl;

    cout << "What is your student ID?" << endl;
    cin >> ID;
    cout << "Your ID is: " << ID << "." << endl;

    //QUESTION 2

    int var1,var2;

    cout<<"Please first enter var1 value than var2 value: " << endl;

    cin >> var1 >> var2;

    int sum= var1+var2;
    int diff= var1-var2;
    int prod= var1*var2;

    cout << "sum: " << sum << " diff: " << diff << " prod: " << prod << endl;



    //QUESTION 3

    string name2;
    int labGrade,midtermGrade,finalGrade;


    cout << "ENTER YOUR NAME: "<< endl;
    cin >> name2;

    cout << "Enter lab grade: "<<endl;
    cin >> labGrade;

    cout << "Enter midterm grade: "<< endl;
    cin >> midtermGrade;

    cout<< "Enter final grade: "<<endl;
    cin >> finalGrade;

    double lastGrade= ((labGrade*0.25)+(midtermGrade*0.35)+(finalGrade*0.40));

    cout << "Name: " << name2 <<endl;
    cout << "Lab: "<<labGrade<<endl;
    cout << "Midterm: "<<midtermGrade<<endl;
    cout << "Final: "<<finalGrade<<endl;
    cout << "Last score: "<<lastGrade;


    //QUESTION 4

    cout << "*\n**\n***\n**\n*";

























    return 0;
}
