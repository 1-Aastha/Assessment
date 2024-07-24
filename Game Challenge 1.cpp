int main() {
    int N;
    cin >> N;

    int player1_score = 0;
    int player2_score = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < N; ++i) {
        int Si, Ti;
        cin >> Si >> Ti;

        player1_score += Si;
        player2_score += Ti;

        int current_lead = abs(player1_score - player2_score);
        int current_leader;

        if (player1_score > player2_score) {
            current_leader = 1;
        } else {
            current_leader = 2;
        }

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead << endl;

    return 0;
}
