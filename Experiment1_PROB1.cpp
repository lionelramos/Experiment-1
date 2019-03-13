#include <iostream>
#include <string>
using namespace std;

int main ()
 {
	double Box,Sideline,Premium,General,B,S,P,G,T;
	B = 250;
	S = 100;
	P = 50;
	G = 25;
	

 cout<<"Box Tickets Sold: "<<endl;
 cin>> Box;
 cout<<"Sideline Tickets Sold: "<<endl;
 cin>> Sideline;
 cout<<"Premium Tickets Sold: "<<endl;
 cin>> Premium;
 cout<<"General Admission Tickets sold: "<<endl;
 cin>> General;

 cout<<"Total tickets sold "<<endl;
 cout<<"Ticket		"<<"No.	"<<"Price	"<<endl;
 cout<<"Box		"<<Box<<"	"<<Box*B<<endl;
  cout<<"Sideline	"<<Sideline<<"	"<<Sideline*S<<endl;
   cout<<"Premium		"<<Box<<"	"<<Premium*P<<endl;
    cout<<"General Ad.	"<<Box<<"	"<<General*G<<endl;
cout<<"Total = "<<Box*B+Sideline*S+Premium*P+General*G<<endl;
 
 system("pause");
	 return 0;
}