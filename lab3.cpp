#include<vector>
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<algorithm>
#include"Clock.h"

using namespace std;

int main(){
	
	int num;
	int tmp;
	int count = 0;
	vector<int> weight;

	ifstream in ("file.in",ios::in);
	if(!in){
		cerr<< "Failed opening" << endl;
		exit(1);
	}
	in >> num;

	for(int i=0; i < num; i++){
		in >> tmp ;
		weight.push_back(tmp);
	}
	
	sort(weight.begin(),weight.end());

	for(int i=1;i<6;i++){
		count += weight.at(weight.size() - i);
//		cout << count << endl;	
	}
	cout << count << endl;
	
	return 0; 
}
