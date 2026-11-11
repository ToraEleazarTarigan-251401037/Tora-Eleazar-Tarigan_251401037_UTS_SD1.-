#include <iostream>
using namespace std;

int main () {
    int array[2][3][4];

    int angkaganjil = 1;
    int angkagenap = 2;

    for(int i = 0; i < 1; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                array[i][j][k] = angkagenap;
                angkagenap += 2;
            }
        }
    }
    for(int i = 1; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                array[i][j][k] = angkaganjil;
                angkaganjil+= 2;
            }
        }
    }


    // menampilkan isi array
    for(int i = 0; i < 2; i++){
        cout << "Lapis " << i + 1 << endl;

        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
            cout << array[i][j][k] << "\t"; 
            }
            cout << endl;
        }
        cout << endl;
    }

    cout<<"Hasil Penjumlahan Lapis 1 (Genap) dan Lapis 2(Ganjil)";
    cout<<endl;







return 0;
}