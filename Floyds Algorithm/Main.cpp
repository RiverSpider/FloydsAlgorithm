#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    const int INF = 1e9;
    int dist[MAX][MAX], n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> dist[i][j];
            if (dist[i][j] == -1) {
                dist[i][j] = INF;
            }
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (dist[i][j] == INF) {
                cout << "-1 ";
            }
            else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}
