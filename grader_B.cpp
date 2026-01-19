#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

int main() {
    srand(time(0));
    int n = 50;
    vector<int> arr(n);
    ofstream infile("input_B.txt");
    infile << n << endl;
    for(int i=0; i<n; i++) {
        arr[i] = (rand() % 2000) - 1000;
        infile << arr[i] << (i == n-1 ? "" : " ");
    }
    infile.close();

    vector<int> expected = arr;
    sort(expected.begin(), expected.end());

    // EXECUTE STUDENT_B
    int ret = system("./student_B < input_B.txt > output_B.txt");
    if (ret != 0) return 1;

    ifstream outfile("output_B.txt");
    vector<string> lines;
    string line;
    while(getline(outfile, line)) if(!line.empty()) lines.push_back(line);

    if (lines.empty()) return 1;

    stringstream ss(lines[0]);
    int val;
    vector<int> student_arr;
    while (ss >> val) student_arr.push_back(val);

    bool sorted_ok = (student_arr == expected);
    bool timing_ok = false;
    
    // Check for timing keywords in remaining lines
    string full_text = "";
    for(auto s : lines) full_text += s;
    if (full_text.find("BubbleSort:") != string::npos && 
        full_text.find("MergeSort:") != string::npos && 
        full_text.find("QuickSort:") != string::npos) timing_ok = true;

    if (sorted_ok && timing_ok) {
        cout << "Problem B: PASSED" << endl;
        return 0;
    } else {
        cout << "Problem B: FAILED (Sorted: " << sorted_ok << ", Timing: " << timing_ok << ")" << endl;
        return 1;
    }
}
