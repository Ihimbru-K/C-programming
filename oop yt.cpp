#include<iostream>
#include<list>

using namespace std;

class Youtube_ch{
	public:
		string Name;
		string OwnerName;
		int Subscribers;
		list<string> VideoTitles;
		
		
		
};


int main(){
	
	
	Youtube_ch mytube;
	mytube.Name = "kboy";
	mytube.OwnerName ="Ihimbru";
	mytube.Subscribers = 1000;
	mytube.VideoTitles ={"abcd","efg","hij"};
	
	
	
	cout<<"Name: "<<mytube.Name<<endl;
	cout<<"Owner: "<<mytube.OwnerName<<endl;
	cout<<"Subscribers: "<<mytube.Subscribers<<endl;
	cout<<"Video Tiltles: "<<endl;
	for(string video:mytube.VideoTitles){
		cout<<video<<endl;
	}

}
