#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int choice, i, N;
    vector<string> candidates = { "A", "B", "C", "D", "E" };
    N = candidates.size();
    vector<int> votes(N);
    cout<<"Welcome to Election/Voting 2023 \n";
    do {
        cout << "\n1. Cast the Vote";
        cout << "\n2. Find Vote Count";
        cout << "\n3. Find leading Candidate";
        cout << "\n0. Exit";
        cout << "\n\n Please enter your choice: ";
        cin >> choice;
        cout << "\n";
        switch (choice) {
  
        case 1: {
            int candidatechoice;
            for (i = 0; i < N; i++)
                cout << i + 1 << "."
                     << candidates[i]
                     << "\n";
  
            cout << "Choose your candidate: ";
            cin >> candidatechoice;
            cout << "\n";
            votes[candidatechoice - 1]++;
            break;
        }
        case 2: {
            for (i = 0; i < N; i++)
                cout << i + 1 << "."
                     << candidates[i] << " "
                     << votes[i] << "\n";
            break;
        }
        case 3: {
            int mx = 0;
            string winner;
            for (int i = 0; i < N; i++)
                if (votes[i] > mx) {
                    mx = votes[i];
                    winner = candidates[i];
                }
            int flag = 0;
            for (int i = 0; i < N; i++)
                   
                if (votes[i] == mx
                    && winner != candidates[i]) {
                flag = 1;
                break;
                }
            if (!flag)
                cout << "The current winner is "
                 << winner    << ".\n";
            else
                cout << "No clear winner\n";
        }
        default:
            "Select a correct option";
        }
    } while (choice != 0);
  
    return 0;
}