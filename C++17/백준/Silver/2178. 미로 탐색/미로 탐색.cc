#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const pair<int,int> dirs[4] = {{0,1},{0,-1},{1,0},{-1,0}};
vector<vector<int>> grid;
vector<vector<int>> dist;
int row, column;
void bfs(int initialx, int initialy){
    queue<pair<int,int>> q;
    q.push({initialx, initialy});
    dist[initialx][initialy] = 1;

    while (!q.empty()){
        auto [x, y] = q.front();
        q.pop();
        for (auto [dx, dy] : dirs){
             int nx=x+dx;
             int ny=y+dy;
             if (nx < 0 || ny < 0 || nx >= row || ny >= column) continue;
             if (dist[nx][ny] != 0) continue; 
             if (grid[nx][ny] != 1) continue;    
         
             dist[nx][ny] = dist[x][y] + 1;
             q.push({nx, ny});
            
        }
    
    }
}

int main(){
    cin>>row>>column;
    grid.assign(row, vector<int>(column));
    dist.assign(row, vector<int>(column,0));
    for (int i=0; i<row; i++){
        string s; 
        cin >> s; 
        for(int j=0; j<column; j++){
            grid[i][j] = s[j] - '0'; //입력 받는걸 잘 봤어야 ㅜㅜㅜ함
        }
    }
    bfs(0, 0);
    cout<< dist[row-1][column-1];

    return 0;
}