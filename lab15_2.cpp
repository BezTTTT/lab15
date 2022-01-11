#include<iostream>
using namespace std;

const int N = 7;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double d[][N])
{
	for(int x=0;x<N;x++){
		cout << "Row " << x+1 << ": " ;
		for(int y=0;y<N;y++){
			cin >> d[x][y];
		}
	}
}

void showMatrix(const bool d[][N])
{
	for (int i=0;i<N;i++){
		for(int j=0 ; j<N; j++){
		cout << d[i][j];
		cout << " " ;
		}
		cout << endl;
	}
}
void findLocalMax(const double d[][N], bool b[][N])
{
	for(int i =0;i<N;i++){
		for(int x=0;x<N;x++){
			if(i==N-1 || x==N-1 || i==0 || x==0 ){
				b[i][x] = 0;
			}
			else if(d[i][x]>=d[i-1][x] && d[i][x]>=d[i+1][x] && d[i][x]>=d[i][x-1] && d[i][x]>=d[i][x+1]){
				 b[i][x] = 1;
			}
			else b[i][x] = 0;
		}
	}
}