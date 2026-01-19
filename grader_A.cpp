#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

struct ExpectedResult { string O, Omega, Theta; };

ExpectedResult get_expected(int id) {
    if (id == 1) return {"YES", "NO", "NO"};
    if (id == 2) return {"YES", "YES", "YES"};
    if (id == 3) return {"NO", "YES", "NO"};
    if (id == 4) return {"YES", "YES", "YES"};
    if (id == 5) return {"YES", "YES", "YES"};
    if (id == 6) return {"YES", "YES", "YES"};
    if (id == 7) return {"YES", "YES", "YES"};
    if (id == 8) return {"NO", "YES", "NO"};
    if (id == 9) return {"NO", "YES", "NO"};
    if (id == 10) return {"NO", "YES", "NO"};
    // Hidden
    if (id == 11) return {"YES", "YES", "YES"};
    if (id == 12) return {"YES", "NO", "NO"};
    if (id == 13) return {"NO", "YES", "NO"};
    if (id == 14) return {"YES", "YES", "YES"};
    if (id == 15) return {"YES", "YES", "YES"};
    return {"NO", "NO", "NO"};
}

int main() {
    ofstream infile("input_A.txt");
    infile << "15" << endl;
    for(int i=1; i<=15; i++) infile << i << endl;
    infile.close();

    // EXECUTE STUDENT_A
    int ret = system("./student_A < input_A.txt > output_A.txt");
    if (ret != 0) return 1;

    ifstream outfile("output_A.txt");
    vector<string> lines;
    string line;
    while(getline(outfile, line)) if(!line.empty()) lines.push_back(line);

    if (lines.size() < 45) {
        cerr << "Error: Output too short." << endl;
        return 1;
    }

    int passed = 0;
    for (int i = 1; i <= 15; i++) {
        ExpectedResult exp = get_expected(i);
        int idx = (i - 1) * 3;
        if (lines[idx].find(exp.O) != string::npos && 
            lines[idx+1].find(exp.Omega) != string::npos && 
            lines[idx+2].find(exp.Theta) != string::npos) {
            passed++;
        }
    }

    if (passed == 15) {
        cout << "Problem A: PASSED (15/15 cases)" << endl;
        return 0;
    } else {
        cout << "Problem A: FAILED (" << passed << "/15 cases passed)" << endl;
        return 1;
    }
}
