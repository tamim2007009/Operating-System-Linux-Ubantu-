#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cout << "Enter the number of processes:" << endl;
    int n;
    cin >> n;

    vector<vector<int>> v;
    vector<int> p;
    double total_burst = 0;

    for (int i = 0; i < n; i++) {
        int p_no, arrival_time, burst_time;
        cout << "Enter the process number, arrival time, and burst time:" << endl;
        cin >> p_no >> arrival_time >> burst_time;
        p.push_back(arrival_time);
        p.push_back(burst_time);
        p.push_back(p_no);
        v.push_back(p);
        p.clear();

        total_burst += burst_time;
    }

    // Sort processes based on arrival time
    sort(v.begin(), v.end());

    double tot_timespan = 0;
    double waiting[n + 1] = {0}, turnaround[n + 1] = {0}, response[n + 1] = {0};
    double t_wait = 0, t_turn = 0, t_response = 0;

    for (auto x : v) {
        int arrival = x[0];
        int burst = x[1];
        int p_num = x[2];

        if (arrival <= tot_timespan) {
            // Process starts immediately
            waiting[p_num] = tot_timespan - arrival;
            response[p_num] = waiting[p_num];
            tot_timespan += burst;
            turnaround[p_num] = tot_timespan - arrival;
        } else {
            // CPU idle, process starts after arrival
            waiting[p_num] = 0;
            response[p_num] = 0;
            tot_timespan = arrival + burst;
            turnaround[p_num] = tot_timespan - arrival;
        }

        // Accumulate totals
        t_wait += waiting[p_num];
        t_turn += turnaround[p_num];
        t_response += response[p_num];
    }

    // Calculate averages
    double avg_wait = t_wait / n;
    double avg_turn = t_turn / n;
    double avg_response = t_response / n;

    // Calculate CPU utilization and throughput
    double cpu = (total_burst / tot_timespan) * 100;
    double throughput = (double)n / tot_timespan;

    cout << "Total timespan: " << tot_timespan << endl;
    cout << "CPU Utilization: " << cpu << "%" << endl;
    cout << "Throughput: " << throughput << " processes/unit time" << endl;
    cout << "Average Turnaround Time: " << avg_turn << " units" << endl;
    cout << "Average Waiting Time: " << avg_wait << " units" << endl;
    cout << "Average Response Time: " << avg_response << " units" << endl;

    return 0;
}
5
1 24 20
2 13 10
3 3 0
4 2 4
5 7 6