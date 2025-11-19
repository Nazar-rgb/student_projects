#include <iostream>

using namespace std;
int main(){
int liczba;
cout << "podaj liczbe"<<endl;
cin >>liczba;
bool pierwsza = true;
if(liczba < 1){
	pierwsza = false;
}
for(int i = 2;i< liczba; i++){
	if(liczba % 2 == 0){
		pierwsza = false;
		break;
		}
}
if(pierwsza){
	cout<<liczba<<" jest pierwsza"<<endl;
	}else{cout<<liczba<<" nie jest pierwsza"<<endl;}
return 0;
}
