#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <bits/stdc++.h>

//template<typename T>

int find(std::vector<int>& v, int m, int key){
	if(v[m] == key)
		return m;
	if(v[m] > key)
		return find(v, m - 1, key);
	if(v[m] < key)
		return find(v, m + 1, key);
	return -1;
}

int binary_search(std::vector<int>& v, int key){
	if(v.size() == 0)
		throw std::runtime_error("vector cannot be NULL!!!");
	sort(v.begin(), v.end());
	return find(v, v.size()/ 2, key);	
}

#endif