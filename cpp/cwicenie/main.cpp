#include <iostream>

using namespace std;
int main(){
int liczba;
cout << "podaj liczbe"<<endl;
cin >>liczba;
if(liczba % 2 != 0){
	cout<<liczba<<" jest pierwszą "<<endl;
}else{
	cout<<liczba<<"nie jest pierwsza";}

return 0;
}
