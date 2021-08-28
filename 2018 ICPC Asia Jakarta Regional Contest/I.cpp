int N;
bool ans,cur;
string s;
int main(void){
   fast;
   cin>>N;   
   while(N--){
      cin>> s;
      if(s=="LIE") cur=true;
      else cur=false;
      
      ans=ans^cur;
   }
   if(ans) cout << "LIE";
   else cout << "TRUTH";
   return 0;
}
