#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

bool compareJobs(Job a, Job b) {
    return (a.profit > b.profit);
}

void jobSequencing(vector<Job>& jobs) {
    // Sort jobs based on profit in descending order
    sort(jobs.begin(), jobs.end(), compareJobs);

    int maxDeadline = 0;
    for (const auto& job : jobs) {
        maxDeadline = max(maxDeadline, job.deadline);
    }

    // Array to store the result of job sequencing
    vector<char> result(maxDeadline, ' ');

    // Fill the result array
    for (const auto& job : jobs) {
        for (int i = job.deadline - 1; i >= 0; i--) {
            if (result[i] == ' ') {
                result[i] = job.id;
                break;
            }
        }
    }

    // Display the result
    cout << "Job sequence: ";
    for (char jobId : result) {
        cout << jobId << " ";
    }
    cout << endl;
}

int main() {
    vector<Job> jobs = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};

    cout << "Original jobs:\n";
    cout << "ID\tDeadline\tProfit\n";
    for (const auto& job : jobs) {
        cout << job.id << "\t" << job.deadline << "\t\t" << job.profit << endl;
    }

    jobSequencing(jobs);

    return 0;
}
