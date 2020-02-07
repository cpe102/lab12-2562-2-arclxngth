#include <iostream>
#include <cmath>
using namespace std;

const int N = 32;
const int M = 72;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

void updateImage(bool image[][M], int size, int x, int y){
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			
			if(sqrt(pow((i-x),2)+(pow((j-y),2)))<=size-1){
				
				image[i+1][j+1]=1;
			}
		}
}
	

}

void showImage(const bool image[][M]){
	
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
			
			if(i==0 || i==N-1) cout<<"-";
            else if(j==0 || j==M-1) cout<<"|";
            else if (image[i][j]==1) cout<<"*";
			else cout<<" ";
        }
        cout<<endl;
    }
}
