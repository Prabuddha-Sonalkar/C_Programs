#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Get input from the user
    int n, m;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the number of subjects: ";
    cin >> m;
    vector<string> subjects(n);
    cout << "Enter the data for each person:\n";
    for (int i = 0; i < n; i++) {
        cout << "Person " << (i+1) << ": ";
        cin >> subjects[i];
    }

    // Compute the maximum number of topics known by any team of two attendees
    int max_topics = 0;
    int num_teams_with_max_topics = 0;
    vector<pair<int, int>> best_teams;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int topics_known = 0;
            for (int k = 0; k < m; k++) {
                if (subjects[i][k] == '1' || subjects[j][k] == '1') {
                    topics_known++;
                }
            }
            if (topics_known > max_topics) {
                max_topics = topics_known;
                num_teams_with_max_topics = 1;
                best_teams.clear();
                best_teams.push_back(make_pair(i+1, j+1));
            } else if (topics_known == max_topics) {
                num_teams_with_max_topics++;
                best_teams.push_back(make_pair(i+1, j+1));
            }
        }
    }

    // Display the results
    cout << "\nAll possible teams are:\n";
    int count = 65; // ASCII code for 'A'
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            cout << "TEAM " << char(count++) << " : " << i+1 << " " << j+1 << endl;
        }
    }

    cout << "\nThe best possible teams are:\n";
    for (auto team : best_teams) {
        cout << "TEAM " << char(team.first+64) << char(team.second+64) << endl;
    }
    return 0;
}

