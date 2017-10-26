#include <bits/stdc++.h>
#include "binary_search.h"

using namespace std;

int main(){
	vector<int> v =  {2, 3, 5, 6, 1};
	int c = 5;
	
	try{
		int value = binary_search(v, c);
		for(int i = 0; i < v.size();++i){
			cout << v[i] << ' ';
		}
		cout << endl << value + 1 << endl;
	}catch(const runtime_error& e){
		cerr << e.what() << endl;
	}
	
	return 0;
}