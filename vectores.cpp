# include <iostream>
# include <vector>

using namespace std;

//template<int Maxrow, int Maxcol>

int cols = 3;
void show_vec(int A_[], int N_);
void show_mat(int M_[][3], int R_, int C_);

template<int M, int N>
void myFunction(int array[N][M])
{
}

/*                         MAIN                             */
int main(){
	
	vector<int> vec1 = {1,2,3};
	int arreglo1[5] = {10,20,30,40,50}; 
	
	//cout<<show_vec(arreglo1);
	int len = sizeof(arreglo1)/sizeof(int);
	cout<< "Vector"<<endl;
	show_vec(arreglo1, len);
	
	int matriz[][3] = {{1,2,-1},{3,0,4},{-2,9,4}};
	
	cout<< "Matrix"<<endl;
	//cout<<matriz[0][0]<<','<<matriz[0][1]<<endl;
	show_mat(matriz,3,3);
	return 0;

}

/*                          AUX                              */
void show_vec(int A_[], int N_){
		
	cout<<"["<<A_[0]<<',';
	for (int i = 1; i<N_-1; i++){
		
		cout<<A_[i]<<',';
	}
	cout<<A_[N_-1]<<"]"<<endl;
	
}


void show_mat(int M_[][3], int R_, int C_){
	
	cout<<"[";
	for (int i = 0; i<R_; i++){
	cout<<"[";
		for (int j = 0; j < C_; j++){
		
			if (j<C_-1){
				cout<<M_[i][j]<<',';
			}
			else{
				cout<<M_[i][j];
				}		
		
		}
		if (i<R_-1){
			cout<<"],"<<endl;
		}
		else{
			cout<<"]";
		}
	}
	cout<<"]"<<endl;
}





















