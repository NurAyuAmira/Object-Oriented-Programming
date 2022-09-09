#include <iostream>
using namespace std;

	class geometry
	{
		private:
		float PI, height, radius, length;
		public:
		//(1)
		geometry(float hg, float rd,float lg)
		{
			PI = 3.142;
			height = hg; 
			radius = rd;
			length=lg;
		}
		//-----(2)-----
		~geometry()
		{
			cout <<endl<<endl<<"= END OF PROGRAM ="<<endl;
		}
		//-----(3)-----
		friend class cylinder;
		//-----(4)-----
		friend class cone;
		
		friend class cube;
	};
	
	class cylinder
	{
		private:
		float vol;
		public:
		//-----(5)-----
		void calc_vol(geometry *g)
		{
				vol = (*g).PI * (*g).radius * (*g).radius * (*g).height;
				cout<<endl<<"Volume of cylinder with radius " << (*g).radius<< " and height " << (*g).height << " is : " << vol;
		}
	
	};
	
	class cone
	{
		private:
		float vol;
		public:
		//-----(6)-----
		void calc_vol(geometry &g)
		{
			vol = (g.PI * g.radius * g.radius * g.height)/3;
			cout << "\nVolume of cone with radius " << g.radius<< " and height " << g.height << " is : " << vol;
		}
	};
	
	class cube
	{
		private:
		float vol;
		public:
		void calc_vol(geometry &g)
		{
			vol = g.length*g.length*g.length;
			cout << "\nVolume of cube with length " << g.length << " is : " << vol;
		}
	};
	
	int main()
	{
		float hg, rd,lg;
		cout << "Enter height : ";
		cin>> hg;
		cout << "Enter radius : ";
		cin>> rd;
		cout << "Enter length : ";
		cin >> lg;

		//-----(7)-----
		geometry gmt(hg,rd,lg);
		//-----(8)-----
		cylinder cyc;
		//-----(9)-----
		cyc.calc_vol(&gmt);
		//-----(10)-----
		cone cn;
		//-----(11)-----
		cn.calc_vol(gmt);
		
		cube cb;
		cb.calc_vol(gmt);
}
