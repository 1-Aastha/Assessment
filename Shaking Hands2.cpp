
using namespace std;
int count_handshakes(int N) {
    int handshakes = (N * (N - 1)) / 2;
    return handshakes;
}

int main() {
    int N;
    cin >> N;
    cout << count_handshakes(N) << endl;
    return 0;
}
