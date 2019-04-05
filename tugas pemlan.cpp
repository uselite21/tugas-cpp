#include <iostream>
using namespace std;

class transportasiDarat {
	public :
		void Sifat(){
			cout<<"Trnasportasi khusus darat"<<endl;

		}
};

class transportasiAir{
	public :
		void Sifat(){
			cout<<"Transportasi Khusus perairan"<<endl; 
		}
};

class transportasiAmfibi : public transportasiDarat, public transportasiAir{
	public :
		void Sifat(){
			cout<<"Transportasi Air dan darat"<<endl;
		}
};

int main(){
	transportasiAmfibi afb;
	transportasiDarat drt;
	afb.Sifat();
	drt.Sifat();
}
