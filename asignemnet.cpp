include <iostream>
using namespace std;

int main() {
   cout<<"Welcome to Bisonica!"<<endl;
   
   int n;
   double british, bison;
   
   // reading number of dollars from user
   cout<<"How many US Dollars do you have? ";
   cin>>n;
   
   // calculating british pounds
   british = 0.73*n;
   
   // calculating bison dollars
   bison = british/5;
   
   // printing output
   cout<<n<<"US Dollar(s) is "<<british<<" British Pound(s),"<<endl;
   cout<<"which is "<<bison<<" Bison Dollar(s)!"<<endl;
   
   return 0;
}
