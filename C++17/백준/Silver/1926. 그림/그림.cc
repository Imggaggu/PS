#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const pair<int,int> dirs[4] = {{0,1},{0,-1},{1,0},{-1,0}};
vector<vector<int>> grid;
vector<vector<bool>> visited;
int row, column;
int bfs(int initialx, int initialy){
    queue<pair<int,int>> q;
    q.push({initialx, initialy});
    visited[initialx][initialy] = true;
    int area = 1;
    
    while (!q.empty()){
        auto [x, y] = q.front();
        q.pop();
        for (auto [dx, dy] : dirs){
             int nx=x+dx, ny=y+dy;
             if (nx < 0 || ny < 0 || nx >= row || ny >= column) continue;
             if (visited[nx][ny]) continue;    
             if (grid[nx][ny] != 1) continue;    
             visited[nx][ny] =true;
             q.push({nx, ny});
             area++;
        }
    
    }
    return area;
}

int main(){
    //vector<vector<int>> grid;
    cin>>row>>column;
    grid.assign(row, vector<int>(column));
    visited.assign(row, vector<bool>(column, false));
    for (int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>grid[i][j];
        }
    }
    int cnt=0;
    int maxarea=0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (!visited[i][j] && grid[i][j] == 1) {
                int area = bfs(i, j);
                cnt++;
                if (area > maxarea) maxarea = area;
            }
        }
    }
    cout << cnt<<endl;
    cout<< maxarea;

    return 0;
}