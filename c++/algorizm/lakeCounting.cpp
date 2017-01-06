
#include <iostream>

void dfs(int n, int m, int width, int height, char a[1000][1000]){
  a[n][m] = '.';

  for (int dx = -1; dx <= 1; dx++){
    for (int dy = -1; dy <= 1; dy++){
      int nx = n + dx, ny = m + dy;

      if (0 <= nx && nx < width && 0 <= ny && ny < height && a[nx][ny] == 'W'){
        dfs(nx, ny, width, height, a);
      }
    }
  }
  return ;
}

int main(){
  int N, M;
  int res = 0;
  std::cin >> N;
  std::cin >> M;
  char a[1000][1000];

  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      std::cin >> a[i][j];
    }
  }

  for (int p = 0; p < N; p++){
    for (int q = 0; q < M; q++){
      if(a[p][q] == 'W') {
        dfs(p, q, N, M, a);
        res++;
      }
    }
  }

  std::cout << res;
  return (0);
}

