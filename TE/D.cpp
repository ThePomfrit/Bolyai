/*
Olvasd be az `inpD.txt` fileból a benne levő bináris számot egy int típusú változóba, 
és számítsd ki annak decimális értékét, majd az eredményt írd bele az `outD.txt` fileba.
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

    ifstream fin;
    fin.open("inpD.txt");

    if(!fin.is_open()) {
        cout << "Error opening infile" << endl;
        return 1;
    }

    int x;
    fin >> x;

    fin.close();

    vector<int> binary;


    while(x > 0) {
        binary.push_back(x % 2);
        x /= 2;
    }

    ofstream fout;
    fout.open("outD.txt");

    if(!fout.is_open()) {
        cout << "Error opening outfile" << endl;
        return 1;
    }

    for(int i = binary.size() - 1; i >= 0; i--) {
        fout << binary.at(i);
    }

    fout.close();

    return 0;    
}


/*
1031 /2 = 515 1
515 /2 = 257 1
257 /2 = 128 1
128 /2 = 64 0
64 /2 = 32 0
32 /2 = 16 0
16 /2 = 8 0
8 /2 = 4 0
4 /2 = 2 0
2 /2 = 1 0
1 /2 = 0 1

*/
/*
1042 /2 = 521 0
521 /2 = 260 1
260 /2 = 130 0
130 /2 = 65 0
65 /2 = 32 1
32 /2 = 16 0
16 /2 = 8 0
8 /2 = 4 0
4 /2 = 2 0
2 /2 = 1 0
1 /2 = 0 1


*/