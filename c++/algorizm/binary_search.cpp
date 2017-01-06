int n, m, k[100000];

bool binary_search(int x){
  int l = 0, r = n;

  while ( r - 1 >=  1 ){
    int i = (l + r) / 2;
    if (k[i] == x) return true;
    else if (k[i] < x) l = i + 1;
    else r = i;
  }

  return false;
}

// kを初期化すれば使える