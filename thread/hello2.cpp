#include <bits/stdc++.h>
#include <thread>
#include <mutex>  // For mutex
#include <chrono> // For sleep duration
using namespace std;

mutex mtx; // Mutex to synchronize access to cout

void hello(string mess, int flags) {
    // Lock mutex to ensure synchronized output
    lock_guard<mutex> lock(mtx);  
    cout << mess << "    from " << flags << endl;
    
 sleep(1);
    sleep(1);
    sleep(1);
    sleep(1);
    sleep(1);
    sleep(1);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    thread t[5];
    string messages[5] = {
        "Hello World00",
        "Hello World11",
        "Hello World22",
        "Hello World33",
        "Hello World44"
    };

    // Create 5 threads and start them
    for (int i = 0; i < 5; i++) {
        t[i] = thread(hello, messages[i], i);  // Pass message and index to the hello function
    }

    // Join all threads to the main thread
    for (int i = 0; i < 5; i++) {
        t[i].join();
    }

    return 0;
}
