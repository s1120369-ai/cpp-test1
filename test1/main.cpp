#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array of student scores
    int score[10] = {85, 90, 60, 92, 100, 76, 50, 89, 84, 40};
    
    // Array to store the count of students in each grade category
    int gradeCount[5] = {0}; // A, B, C, D, F
    
    // Loop through each score and classify them into grade categories
    for (int i = 0; i < 10; ++i) {
        if (score[i] >= 90) {
            gradeCount[0]++; // A
        } else if (score[i] >= 80) {
            gradeCount[1]++; // B
        } else if (score[i] >= 70) {
            gradeCount[2]++; // C
        } else if (score[i] >= 60) {
            gradeCount[3]++; // D
        } else {
            gradeCount[4]++; // F
        }
    }

    // Output the number of students in each grade category
    cout << "A等人數: " << gradeCount[0] << endl;
    cout << "B等人數: " << gradeCount[1] << endl;
    cout << "C等人數: " << gradeCount[2] << endl;
    cout << "D等人數: " << gradeCount[3] << endl;
    cout << "F等人數: " << gradeCount[4] << endl;

    return 0;
}
