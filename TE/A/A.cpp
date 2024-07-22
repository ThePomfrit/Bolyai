#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    vector<int> v;

    //read the file
    ifstream fin;
    fin.open("inpA.txt");

    if(!fin.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }
    while(!fin.eof()) {
        int x;
        fin >> x;
        v.push_back(x);
    }
    fin.close();

    //flip the numbers
    for(int i = 0; i < v.size()/2; i++) {
        int temp = v.at(i);
        v.at(i) = v.at(v.size() - 1 - i);
        v.at(v.size() - 1 - i) = temp;
    }

    //write to file
    ofstream fout;
    fout.open("outA.txt");

    if(!fout.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }
    for(int i = 0; i < v.size(); i++) {
        fout << v.at(i) << " ";
    }
    fout.close();
}