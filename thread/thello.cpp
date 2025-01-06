#include <bits/stdc++.h>
#include <thread>

using namespace std;

void Hello(int thread_id) {
    cout << "Hello World from thread " << thread_id << endl; // Print thread ID
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    thread t[5];
    for (int i = 0; i < 5; i++) {
        t[i] = thread(Hello, i);  // Pass the thread index i
    }

    // Join all threads
    for (int i = 0; i < 5; i++) {
        t[i].join();  // Ensure each thread finishes execution
    }

    return 0;
}
