#include<iostream>
using namespace std;

int LongestSubString(string s){
	bool visited[256] = {false};
	int left=0, right=0, maxLength = 0;
	
	while(right<s.length()){
		if(!visited[s[right]]){
			visited[s[right]]=true;
			maxLength = max(maxLength, right-left+1);
			right++;
		}else{
			visited[s[left]]=false;
			left++;
		}
	}
	return maxLength;
}

int main(){
	string s;
	getline(cin,s);
	
	cout<<LongestSubString(s);
	
	return 0;
}
