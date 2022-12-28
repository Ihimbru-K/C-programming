#include<iostream>
using namespace std;



class Rectangle{
		public:
			string Name;
			double Length;
			double Width;
			
			Rectangle(string name, double length, double width){
				Name = name;
				Length = length;
				Width = width;
				
			}
			
			void printAtt(){
				cout<<Name<<" has a length of "<<Length<<" cm and a width of "<<Width<<"cm"<<endl;
		}
		
			int Area(){
				int Area = Length * Width;
				cout<<"area of rectangle is: "<<Area<<"cm"<<endl;
		}
			
	};
int main(){
	Rectangle myRect("KbRectangle", 100, 200);
	
	myRect.printAtt();
	myRect.Area();
	

return 0;
}
