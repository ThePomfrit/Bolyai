#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Student {
    string name;
    string JMBG;
    vector<int> grades;
};

double averageGrade(vector<int> grades) {
    int sum = 0;
    for(int i = 0; i < grades.size(); i++) {
        sum += grades.at(i);
    }
    return (double)sum / grades.size();
}

string getBirthday(string JMBG) {
    string day = JMBG.substr(0, 2);
    string month = JMBG.substr(2, 2);
    string year = JMBG.substr(4, 3);
    return "1" + year + ". " + month + ". " + day + ".";
}

string getGender(string JMBG) {
    if(JMBG.at(9) == '5') {
        return "lány";
    }
    return "fiú";
}

string getTown(string JMBG) {
    return JMBG.substr(7, 2);
}

string formSentence(Student s) {
    string str = s.name;
    str += " " + getBirthday(s.JMBG)  + "-án/én született ";
    str += getGender(s.JMBG) + ". A ";
    str += getTown(s.JMBG) + "-es kódú városban született, és az átlaga ";
    str += to_string(averageGrade(s.grades)) + ".";

    return str;
}


int main() {

    vector<Student> students;

    ifstream fin;
    fin.open("inpB.txt");

    if(!fin.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    string row;
    //Kovács János; 1506990710011; 4 4 4 5 2 4;
    while(getline(fin, row)) {
        Student s;

        s.name = row.substr(0, row.find(";"));
        row = row.substr(row.find(";") + 2);

        s.JMBG = row.substr(0, row.find(";"));
        row = row.substr(row.find(";") + 2);

        while(row.find(" ") != string::npos) {
            s.grades.push_back(stoi(row.substr(0, row.find(" "))));
            row = row.substr(row.find(" ") + 1);
        }

        students.push_back(s); 
    }

    fin.close();

    for(int i = 0; i < students.size(); i++) {
        cout << formSentence(students.at(i)) << endl;
    }


}