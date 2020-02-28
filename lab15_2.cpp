#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

void randData(double *A,int N,int M){
	for(int i=0;i<49;i++){
		*A=(rand()%101)/100.00;
		A++;


	}                                                                                                                                                                                                                                                                                                                                                                                                   
}
void findColSum(const double *A,double *B,int N,int M){
	double sum;
	for(int i=0;i<M;i++){
		sum=0;
		for(int j=0;j<N;j++){
			sum += *(A+i+j*N);
		}
		*(B+i)=sum;
	}
}
void showData(double *A,int N,int M){
	for(int i=0;i<N*M;i++){
		if(i%M==0) cout<<endl;
		cout<<setw(8)<<left<<*(A+i);
	}
	cout<<endl;
}
