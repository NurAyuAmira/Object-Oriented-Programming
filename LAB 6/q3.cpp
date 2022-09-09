#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Books
{
	private:
		string isbnNo, title, author;
		float price, discountedprice, discountperc;
		
	public:
		Books();
		Books(string,string,string,float,float);
		void set_Data();
		void calcDiscountedPrice();
		void print();
		float getDiscountedPrice();
		~Books();
};

Books :: Books()
{
	isbnNo = "";
	title = "";
	author = "";
	price = 0;
	discountperc = 0;
}

Books :: Books(string ISBN, string T, string A, float P, float DP)
{
	isbnNo = ISBN;
	title = T;
	author = A;
	price = P;
	discountperc = DP;
}

void Books :: set_Data()
{
	fflush(stdin);
	cout<<endl<<"Enter ISBN          : ";
	getline(cin,isbnNo);
	fflush(stdin);
	cout<<"Enter Title         : ";
	getline(cin,title);
	fflush(stdin);
	cout<<"Enter Author's name : ";
	getline(cin,author);
	fflush(stdin);
	cout<<"Enter price         : RM ";
	cin>>price;
	fflush(stdin);
	cout<<"Enter discount (%)  : ";
	cin>>discountperc;
	fflush(stdin);
}

void Books :: calcDiscountedPrice()
{
	discountedprice = price * (1 - discountperc / 100);
}

void Books :: print()
{
	cout<<endl<<"---------------------------------"<<endl;
	cout<<"           Book Details"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<endl<<"ISBN             : "<<isbnNo<<endl;
	cout<<"Title            : "<<title<<endl;
	cout<<"Author           : "<<author<<endl;
	cout<<"Original Price   : RM "<<price<<endl;
	cout<<"Discounted Price : RM "<<fixed<<setprecision(2)<<discountedprice<<endl;
}

float Books :: getDiscountedPrice()
{
	return discountedprice;
}

Books :: ~Books()
{
	cout<<endl<<"Enjoy reading "<<title<<endl;
}

void func(Books &B);

void func(Books &B)
{
	B.set_Data();
	B.calcDiscountedPrice();
	B.print();
}

int main()
{
	float max;
	int total = 0;
	
	Books B1("102009912", "7 Habits of Highly Effective People", "Stephen Covey", 400, 30);
	
	cout<<"........Book of the Month.........."<<endl<<endl;
	
	B1.calcDiscountedPrice();
	B1.print();
	
	cout<<endl<<"Now we shall enter and display data for 3 special books...."<<endl<<endl;
	
	Books B2[3];
	
	for(int i=0; i<3; i++)
	{
		func(B2[i]);
		
		max = 0;
		
		if(max < B2[i].getDiscountedPrice())
			max = B2[i].getDiscountedPrice();
		
		if(B2[i].getDiscountedPrice() < 30)
			total++;
	}
	
	cout<<endl<<"----------------------------"<<endl;
	cout<<"The most expensive book is RM "<<fixed<<setprecision(2)<<max<<endl;\
	cout<<"The number of books that are below RM 30 are : "<<total;
	cout<<endl;
	
	return 0;
}
