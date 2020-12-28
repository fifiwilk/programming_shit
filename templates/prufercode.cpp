using PLL=pair<LL, LL>;
void prufercode(int n, pair<LL, LL> val = {-1, -1}){
	vector<int> vec(n-1);
	REP(i, n-1)
		vec[i] = rd(0, n-1);

	vector<int> deg(n);
	set<int> lfs;
	for(int x: vec)
		deg[x]++;
	REP(i, n)
		if(deg[i] == 0)
			lfs.insert(i);

	REP(i, n-1){
		int x = *lfs.begin();
		lfs.erase(x);
		deg[vec[i]]--;
		if(deg[vec[i]] == 0)
			lfs.insert(vec[i]);
		cout << x+1 << ' ' << vec[i]+1;
		if(val.second > -1)
			cout << ' ' << rdll(val.first, val.second);
		cout << '\n';
	}
}
