#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
    cin>>s;
    int count = 0 , maxi = 0;
    char ans;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i]!=s[i+1]){
            count = 1;
            
        }else{
            count++;
        }
        if(maxi < count){
            maxi = count;
            ans = s[i];
        }
    }
    cout <<ans;

	return 0;
}
