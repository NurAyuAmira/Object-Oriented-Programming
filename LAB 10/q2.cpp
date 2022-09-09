#include<iostream>
using namespace std;

const int item = 3;
void StockUpdate();
class BeanBag
	{ 
		private: string cname;
		int Stock[item];
		public:
		void Latest_BeanBagStock()
		{ 
			int i;
			int j=0;
			cout<<"\n--------------------------------------"<<endl;
			cout<<" #Current# Ready Stocks Checking... "<<endl;
			cout<<"--------------------------------------"<<endl;
			cout<<"Code Tracing\t >>"<<cname<< "<< "<<endl;
			for(i=item-1; i>=0; i--)
			cout<<"Group "<<++j<<" production\t:"<<Stock[i]<<" item(s)ready"<<endl;
	}
	
		void BeanBag_Details(int *p)
		{ 
			int i;
			cout<<"#######################################"<<endl;
			cout<<" Stocks Checking "<<endl;
			cout<<"---------------------------------------"<<endl;
			cout<<"Enter Bean Bag Chair code :";
			getline(cin, cname);
			for(i=0; i<item; i++)
			Stock[i] = p[i];
		}	
	} ready;
	
	void StockUpdate()
	{ 
		int group, num, *arr;
		cout<<" Ready Stocks [BB789] for this Month "<<endl;
		cout<<"------------------------------------------"<<endl;
		cout<<"Update new stocks from how many group? :";
		cin>> group;
		arr = new int [group];
		int gr = 3;
		for(num=0; num<group; num++)
		{ 
			cout<<"Ready stock from group "<<gr--<<":";
			cin>>*(arr+num);
			cin.ignore();
		}
		ready.BeanBag_Details(arr);
		ready.Latest_BeanBagStock();
		delete [ ] arr;
	}	
	
int main()
{
	BeanBag BB;
	int array[item] = {9, 7, 5};
	cout<<" COSY Bean Bag Chair Sdn. Bhd. "<<endl;
	BB.BeanBag_Details(array);
	BB.Latest_BeanBagStock();
	cout<<"\n------------------------------------------"<<endl;
	StockUpdate();
}
