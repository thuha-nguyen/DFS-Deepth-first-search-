#include <iostream>
#define MAX 100
using namespace std;

class graph{
	int n, a[MAX][MAX], chuaxet[MAX];
	public: 
		void readdata();
		void init();
		void recursivedfs(int u);
};
	void  graph :: readdata(){
		cin >> n;
		for (int i = 1; i <= n; i++ )
			for ( int j =1 ; j <= n; j++ ) cin >> a[i][j];
			
	}
	void graph::init(){
		for ( int i =1; i <=n ; i++){
			chuaxet[i] = 1;
		}
	}
	
	void  graph::recursivedfs(int u ){
		cout << u <<" "; chuaxet[u] =0;
		for ( int v =1; v <= n; v++)
			if ( a[u][v] == 1 && chuaxet[v] == 1) recursivedfs(v);
			
	}
	
	

int main(){
	graph g;
	g.readdata();
	g.init();
	g.recursivedfs(1);
	
	
}
