#include <iostream>
#include <cstdlib> //dla srand i rand
#include <ctime> //dla time(0)
using namespace std;

int main(){
	srand(time(0));	
int losowa = rand()% 10+ 1;
int odpowiedz;
	cout<<"zgadni liczbę od 1 do 10"<<endl;
	cin>>odpowiedz;
		if(odpowiedz == losowa){
			cout<<"dobra odpowiedz"<<endl;
			}else{
				cout<<"sprubuj jszcze raz"<<endl;}
	return 0;
}
