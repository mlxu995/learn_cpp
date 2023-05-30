#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> v;
  v.push_back(1);
  // v.empty();  // Should be v.clear() here.
  v.clear();
  int *a = NULL;
  cout << v.size() << endl;
  return 0;
}
