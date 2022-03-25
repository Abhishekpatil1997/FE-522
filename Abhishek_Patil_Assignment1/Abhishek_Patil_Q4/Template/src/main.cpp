#include "std_lib_facilities.h"

using namespace std;

int selectAnEdge(int vertex[]){
    //   cout<<vertex[1];
    int randomIndex = rand() % 3;
//	cout<<"\n"<<"random index "<<randomIndex<<"\n";
    cout<<"\n"<<"ant reached  vertex "<<vertex[randomIndex]<<"\n";
    return vertex[randomIndex];
}

int main()
{

//	path a ant can take from given vertex, for example from vertex 1 ant can go to vertex 2 4 and 6
    srand ( time(NULL) );
    int vertexes[7][3] = {
            2,4,6,
            1,3,7,
            2,4,8,
            1,3,5,
            4,6,8,
            1,5,7,
            6,2,8
    };
    int currentVertex=1;
    int step=0;
    while(currentVertex!=8){
        cout<<vertexes[2][0];
        step++;
//		cout<<"\n current vertex "<<currentVertex<<"\n";
        currentVertex=selectAnEdge(vertexes[currentVertex-1]);

//		cout<<"\n"<<"current vertex "<<currentVertex<<"\n";
    }
    cout<<"expected no. of steps are "<<step;

    return 0;
}
