#include<iostream>
#include<iomanip>
using namespace std;

class Manisan
{ 
     private:
    float KHijau, JagDurian, PulHitam, SanMango, Pudding, Fruits, price;
    public:
    void Bubur_Manisan(float a, float b, float c, float d, float e, float f)
    { KHijau=a;
    JagDurian=b;
    PulHitam=c;
    SanMango=d;
    Pudding=e;
    Fruits=f;
    ManisanOrder();
}
  
  void ManisanOrder()
  { 
    cout<<"\n\nHere Your Bubur/Manisan Order List "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout<<" Bubur Kacang Hijau :"<< KHijau<<" bowl(s)"<<endl;
    cout<<" Bubur Jagung + Durian :"<< JagDurian<<" bowl(s)"<<endl;
    cout<<" Bubur Pulut Hitam :"<< PulHitam<<" bowl(s)"<<endl;
    cout<<" Pulut, Santan & Mango :"<< SanMango<<" bowl(s)"<<endl;
    cout<<" Creamy Marble Pudding :"<< Pudding<<" bowl(s)"<<endl;
    cout<<" Fresh Mix Local Fruits :"<< Fruits<<" bowl(s)"<<endl;
    cout<<"\n>> Total bowls :"<< KHijau + JagDurian + PulHitam +
    SanMango + Pudding + Fruits;
    cout<<"\n ";
  }
  
  void calcPrice()
  {
    price=0.00;
    if (KHijau> 0)
    price=price+ KHijau*2.50;
    if(JagDurian> 0)
    price=price+ JagDurian*4.50;
    if(PulHitam>0)
    price=price+ PulHitam*2.50;
    if(SanMango>0)
    price=price+ SanMango*4.50;
    if(Pudding>0)
    price=price+ Pudding*2.00;
    if(Fruits>0)

    price=price+ Fruits*2.00;
    cout<<">> Thank you. Your order price is RM "<<fixed <<setprecision(2)<<price<<endl;
    cout<<setprecision(0);
  }
  };

int main()
{ 
  Manisan BM;
  char option;
  float a,b,c,d,e,f;
  cout<<"-----------------------------------------------------"<<endl;
  cout<<" ++ Bubur & Manisan Stall ++ "<<endl;
  cout<<"-----------------------------------------------------"<<endl;
  cout<<"Looking for a yummy Bubur/Manisan? [Y/N] "<<endl;
  cin>>option;
  while(option=='Y')
  { cout<<"\n....... Yummy Bubur & Manisan Selection........"<<endl;
  cout<<" [1] Bubur Kacang Hijau (bowl) : ";
  cin>>a;
  cout<<" [2] Bubur Jagung + Durian (bowl) : ";
  cin>>b;
  cout<<" [3] Bubur Pulut Hitam (bowl) : ";
  cin>>c;
  cout<<" [4] Pulut, Santan & Mango (bowl) : ";
  cin>>d;
  cout<<" [5] Creamy Marble Pudding (bowl) : ";
  cin>>e;
  cout<<" [6] Fresh Mix Local Fruits (bowl) : ";
  cin>>f;
  cout<<"\nPlease be seated. Your order will be served shortly..."<<endl;
  BM.Bubur_Manisan (a, b, c, d, e,f);
  BM.calcPrice();
  cout<<"\nWould you like to make another order? [Y/N]"<<endl;
  cin>>option;
 }
  return 0;
}


