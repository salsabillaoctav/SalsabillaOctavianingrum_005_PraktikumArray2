#include <iostream>

using namespace std;

int main()
{
	int matA[2][2]= {4, 8, 2, 10};
  	int i, j, m, n, transpose[2][2];

cout << "\tProgram Transpose Matriks";
cout << "\n-------------------------------------------";
cout << "\nMasukkan Banyaknya Baris = "; cin>>m;
cout << "Masukkan Banyaknya Kolom = "; cin>>n;

cout << "\n";
cout << "Masukkan Elemen matriks\n";
	for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
	cout<<matA[i][j]<<" ";
	}
	cout<<endl;
	}
	for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
    	transpose[j][i] = matA[i][j];
    }
  	}
cout << "\n";
cout << "Hasil Transpose Matriks\n";
  	for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
cout << transpose[i][j] << "\t";
    }
cout << "\n";
  	}
return 0;
}
