#include <bits/stdc++.h>

using namespace std;

const char color[10]="RWOBGY";

// Up --- 0
// Back -- 1
// Right -- 2
// Front -- 3
// Left -- 4
// Down -- 5

class RubikCube{
private:
	int faces[6][3][3];
	void rotate(int main_face,int first,int second,int third,int fourth){

	}
public:

	void input(istream & is){
		//Back
		for(int i=2;i>=0;i--)
			for(int j=2;j>=0;j--)
				is >> faces[1][i][j];
		//Left Up Right Down
		for(int i=0;i<3;i++){
			for(int j=2;j>=0;j--) is >> faces[4][j][i];
			for(int j=0;j<3;j++) is >> faces[0][i][j];
			for(int j=0;j<3;j++) is >> faces[2][j][2-i];
			for(int j=2;j>=0;j--) is >> faces[5][i][2-j];
		}
		//Front
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				is >> faces[3][i][j];
	}
	void output(ostream & os){
		//Back
		for(int i=2;i>=0;i--){
			os << ' ' << ' ' << ' ' << ' ' << ' ' << ' ';
			for(int j=2;j>=0;j--) os << faces[1][i][j] << ' ';
			os << endl;
		}
		//Left Up Right Down
		for(int i=0;i<3;i++){
			for(int j=2;j>=0;j--) os << faces[4][j][i] << ' ';
			for(int j=0;j<3;j++) os << faces[0][i][j] << ' ';
			for(int j=0;j<3;j++) os << faces[2][j][2-i] << ' ';
			for(int j=2;j>=0;j--) os << faces[5][i][2-j] << ' ';
			os << endl;
		}
		//Front
		for(int i=0;i<3;i++){
			os << ' ' << ' ' << ' ' << ' ' << ' ' << ' ';
			for(int j=0;j<3;j++) os << faces[3][i][j] << ' ';
			os << endl;
		}
	}
}cube;

int main()
{
	cube.input(cin);
	cube.output(cout);
	return 0;
}
