#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 1005;

int n, m;
int maze[MAXN][MAXN];
bool visited[MAXN][MAXN];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
vector<pair<int, int> > path;  // Luu tr? du?ng di

void DFS(int i, int j) {
    visited[i][j] = true;
    path.push_back(make_pair(i, j));  // Th�m � hi?n t?i v�o danh s�ch du?ng di
    if (i == n-1 && j == m-1) {  // T�m du?c du?ng di
        for (int k = 0; k < path.size(); k++) {
            maze[path[k].first][path[k].second] = 2;  // ��nh d?u c�c � trong du?ng di
        }
        return;
    }
    for (int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && maze[ni][nj] == 0 && !visited[ni][nj]) {
            DFS(ni, nj);  // Ti?p t?c t�m du?ng di
            if (maze[n-1][m-1] == 2) {  // N?u t�m du?c du?ng di, tho�t
                return;
            }
        }
    }
    path.pop_back();  // X�a � hi?n t?i kh?i danh s�ch du?ng di
}

int main() {
    cin >> n >> m;
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maze[i][j];
        }
    }
    DFS(0, 0);  // T�m du?ng di
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

