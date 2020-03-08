#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

class patternsearch{
	public:
		string str1;
		string str2;
		string pattern;
		int flag=0;
		
		void input();
		void search();		
		
};


void patternsearch::input(){
	//cout<<"1st Input: ";
	cin>>str1;
	//cout<<"2nd Input: ";
	cin>>str2;
	//cout<<"Pattern to be Searched: ";
	cin>>pattern;
}

void patternsearch::search(){
	size_t found = str1.find(pattern);
	if(found!=string::npos){
	//cout<<found<<endl;
	flag=flag+1;
	}
	size_t found2 = str2.find(pattern);
	if(found2!=string::npos){
	//cout<<found2<<endl;
	flag=flag+2;
	}
	if(flag==3){
	cout<<"Output: "<<str1<<" + "<<str2<<" both string has a pattern of "<<pattern<<"."<<endl;
		string str=str1+str2;
		sort(str.begin(),str.end());
		cout<<"Concatenated Sorted Characters: "<<str;
	}else if(flag==0){
		cout<<"Output: "<<str1<<" + "<<str2<<" one of the string has no pattern of "<<pattern<<"."<<endl;
		string str=str1+str2;
		cout<<"Concatenated Characters: "<<str;
	}else if(flag==1 || flag==2){
		cout<<"Output: "<<str1<<" + "<<str2<<" one of the string has no pattern of "<<pattern<<"."<<endl;
		string str=str1+str2;
		cout<<"Concatenated Characters: "<<str;
	}
	
}


int main(int argc, char** argv){
	patternsearch a;
	a.input();
	a.search();
	return 0;
}
