#include "bits/stdc++.h"
using namespace std;
using LL = long long;
#define FOR(i, l, r) for(int i = (l); i <= (r); ++i)
#define REP(i, n) FOR(i, 0, (n) - 1)
template<class T> int size(T &&x) {
	return int(x.size());
}
template<class A, class B> ostream& operator<<(ostream &out, const pair<A, B> &p) {
	return out << '(' << p.first << ", " << p.second << ')';
}
ostream& operator<<(ostream &out, string &str) {
	for(char c: str) out << c;
	return out;
}
template<class T> auto operator<<(ostream &out, T &&x) -> decltype(x.begin(), out) {
	out << '{';
	for(auto it = x.begin(); it != x.end(); ++it)
		out << *it << (it == prev(x.end()) ? "" : ", ");
	return out << '}';
}
void dump() {}
template<class T, class... Args> void dump(T &&x, Args... args) {
	cerr << x << ";  ";
	dump(args...);
}
#ifdef DEBUG
  struct Nl{~Nl(){cerr << '\n';}};
# define debug(x...) cerr << (strcmp(#x, "") ? #x ":  " : ""), dump(x), Nl(), cerr << ""
#else
# define debug(...) 0 && cerr
#endif
mt19937_64 rng(chrono::system_clock::now().time_since_epoch().count());
int rd(int l, int r) {
	return uniform_int_distribution<int>(l, r)(rng);
}
LL rdll(LL l, LL r){
	return uniform_int_distribution<LL>(l, r)(rng);
}
#include "/home/fifi_wilk/Pisanko/templates/prufercode.cpp"
// end of templates

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	
}
