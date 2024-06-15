#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//const int M = 5;
class GRAF{
		int jmlhsmpl;
		vector<vector<int> > adjas;
	public:
		GRAF(int simpul);
		void tmbhtepi(int src, int des);
		void display();
};

GRAF::GRAF(int simpul){
		jmlhsmpl = simpul;
		adjas.resize(simpul);
}

void GRAF::tmbhtepi(int src, int dest){
	adjas[src].push_back(dest);
	adjas[dest].push_back(src);
	
}
		
void GRAF::display(){
	for(int i = 0; i < jmlhsmpl; ++i){
		cout<<"Simpul "<<i<<" : ";
		for(size_t j = 0; j < adjas[i].size(); ++j){
			cout<<adjas[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	
	queue<pair<int,int> >edges;
	GRAF gra(5);
	gra.tmbhtepi(0, 1);
	gra.tmbhtepi(0, 4);
	gra.tmbhtepi(1, 2);
	gra.tmbhtepi(1, 3);
	gra.tmbhtepi(1, 4);
	gra.tmbhtepi(2, 3);
	gra.tmbhtepi(3, 4);

while(!edges.empty()){
	pair<int, int>edge = edges.front();
	gra.tmbhtepi(edge.first, edge.second);
	edges.pop();		
}
	cout<<"Graf Dengan Daftar Adjasi: "<<endl;
	gra.display();
}


