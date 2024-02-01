//#include<bits/stdc++.h>
#include <iostream>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box {
	private:
		int l;
		int b;
		int h;
	public:
		// Constructors
		Box () {
			this->l = 0;
			this->b = 0;
			this->h = 0;
		}
		Box (int l, int h, int b) {
			this->l = l;
			this->b = h;
			this->h = b;
		}
		Box (Box &B) {
			this->l = B.l;
			this->b = B.b;
			this->h = B.h;
		}
		// Functions
		int	getLength() {
			return (this->l);
		}
		int	getBreadth() {
			return (this->b);
		}
		int	getHeight() {
			return (this->h);
		}
		long long CalculateVolume() {
			return (this->b * this->h * this->l);
		}
		// Overloading operators
		bool operator<(const Box &other) const {
			if (this->l < other.l)
				return (true);
			else if (this->b < other.b && this->l == other.l)
				return (true);
			else if (this->h < other.h && this->b == other.b && this->l == other.l)
				return (true);
		}
};

ostream &operator<<(ostream &out, Box &other) {
	out << other.getLength() << " " << other.getBreadth() << " " << other.getHeight();
	return (out);
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout << NewBox <<endl;
		}

	}
}

int main()
{
	check2();
}