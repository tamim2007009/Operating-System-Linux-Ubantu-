#include <iostream>
#include <thread>
#define thrd 5 // Number of threads
int totalsum = 0; // Global variable to store the total sum
using namespace std;

// Function to calculate the sum of numbers in a range
void calculateSum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i; // Add each number in the range
    }
    totalsum += sum; // Add partial sum to the total sum
}

int main() {
    const int start = 1;  // Start of the range
    const int end = 100;  // End of the range
    int range = (end - start + 1) / thrd; // Range for each thread

    thread threads[thrd]; // Array of threads

    // Launch threads using a loop
    for (int i = 0; i < thrd; i++) {
        int rangeStart = start + i * range; // Start of current range
        int rangeEnd = (i == thrd - 1) ? end : rangeStart + range - 1; // End of range
        threads[i] = thread(calculateSum, rangeStart, rangeEnd); // Create thread
    }

    // Wait for all threads to finish
    for (int i = 0; i < thrd; i++) {
        threads[i].join(); // Join thread to ensure it completes
    }

    // Print the total sum
    cout << "Total sum: " << totalsum << endl;

    return 0;
}