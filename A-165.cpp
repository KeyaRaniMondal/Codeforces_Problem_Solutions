#include<bits/stdc++.h>
using namespace std;

int invitations(int n, vector<int> p) {
  set<int> s;  
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (s.find(p[i]) == s.end()) { 
      s.insert(i);  
      count++;
    }
  }
  return count;
}

int main() {
  int t;
  cin >> t; 
  while (t--) {
    int n;
    cin >> n; 
    vector<int> p(n);
    for (int i = 0; i < n; i++)
     {
      cin >> p[i];  
    }
    int min_invit = invitations(n, p);
    cout << min_invit << endl;
  }

  return 0;
}