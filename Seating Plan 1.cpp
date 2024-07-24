//use  another solution that you can understand better
int main(){
      int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        int index = (N - 1) % 12;
        int facingSeat = N + 11 - 2 * index;

        string seatType;
        switch (index) {
            case 0: case 5: case 6: case 11:
                seatType = "WS";
                break;
            case 1: case 4: case 7: case 10:
                seatType = "MS";
                break;
            case 2: case 3: case 8: case 9:
                seatType = "AS";
                break;
        }

        cout << seatType << " " << facingSeat << endl;
    }
    return 0;
}

