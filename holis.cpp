# include <iostream>
# include <vector>

using namespace std;

int main(){
	
	vector<int> vec1 = {1,2,3};
	int arreglo1[3] = {10,20,30}; 
	
	cout<<"Hola mundo";
	cout<<vec1[0]<<endl;
	
	cout<<"Valor 0 del vector \n"<< arreglo1[0]<<"\n";

	for (int i = 0; i<3; i++){
		cout<<arreglo1[i]<<' ';
	}

	printf("\n");
	return 0;

}
