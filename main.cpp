#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, k;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> k;
  const auto& p = k % 10;
  const auto& q = (2 * k) % 10;

  auto ans = vl{};
  for (auto i = 1; i <= n; ++i) {
    if (i % 10 != p && i % 10 != q) {
      ans.push_back(i);
    }
  }

  cout << ans.size() << '\n';
  for (const auto& x : ans) {
    cout << x << ' ';
  }

  return 0;
}