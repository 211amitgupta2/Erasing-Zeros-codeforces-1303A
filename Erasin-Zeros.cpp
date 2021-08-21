# include <bits/stdc++.h>
using namespace std;


int main() {
   int t;
   cin>>t;
  

   while(t--){
       string s;
       cin>>s;

       int n=s.length();
        vector<int> v;
       for(int i=0;i<n;i++){
           if(s[i]=='1')
           v.push_back(i);
       }
       int c=0;
       for(int i=1;i<v.size();i++){
           c+=((v[i]-v[i-1])-1);
       }
       cout<<c<<endl;
   }
    return 0;
}
