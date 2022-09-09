#include<iostream>
#include <string>
#include<iomanip>
using namespace std;
class PreOrder
{ 
private:
string title;
double price;
public:
void BookSelection()
{ 
  cout<<"\n[1] Mum Favourite Recipes Book Price:RM14.00"<<endl;
  cout<<"[2] Weight Watchers Everyday Favourite Recipes Book Price:RM12.00"<<endl;
  cout<<"[3] The Skinny 5:2 Diet Family Recipes Book Price:RM10.90" <<endl;
  cout<<"[4] Favourite Teatime Recipes Book Price:RM10.00"<<endl;
  cout<<"[5] Favourite Traditional and Retro Recipes Price:RM13.00"<<endl;
}
void BookPreOrder()
{  
  int option;
  cout<<"\nEnter your choice, put your selection number:"<<endl;
  cin>>option;
  if (option==1)
{
price=14.00;
title="Mum’s Favourite Recipes Book";
}
else if(option==2)
{
price=12.00;
title="Weight Watchers Everyday Favourite Recipes Book";
}
else if(option==3)
{
price=10.90;
title="The Skinny 5:2 Diet Family Recipes Book";
}
else if(option==4)
{
price=10.00;
title="Favourite Teatime Recipes Book";
}
else if(option==5)
{
price=13.00;
title="Favourite Traditional and Retro Recipes";
}
else
{
cout<<"Invalid number"<<endl;
price=0.00;
title="No title";
}
}
double getPrice() { return price; }
string getTitle() { return title; }
};
class Buyer
{ private:
string name, Booktitle;
double payment;
PreOrder PO;
public:
void set_data()
{
cout<<"===================================="<<endl;
cout<<" FAVOURITE RECIPE BOOK OF THE MONTH "<<endl;
cout<<"===================================="<<endl;
cout<<"Type your name\t :";
getline(cin, name);
getBook();
}
void getBook()
{
PO.BookSelection();
PO.BookPreOrder();
payment=PO.getPrice();
Booktitle=PO.getTitle();
}
void showDetails()
{cout<<"...................................."<<endl;
cout<< name<<", Your order details " <<endl;
cout<<"...................................."<<endl;
cout<<"Book title : "<<Booktitle<<endl;
cout<<"Price : RM "<<fixed<<setprecision(2)<<payment<<endl;
}
};
int main()
{ Buyer B;
B.set_data();
B.showDetails();
return 0;
}
