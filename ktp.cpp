#include <iostream>
#include <fstream>
using namespace std;
int main(){
  // variabel nya //
  int umur;
  string nama, email, password, alamat;
  float tahun;
  bool verifikasi = true;
  // INPUT NYA //
  if(verifikasi == true){
    cout << "=========== REGISTRASI E-KTP =======" << endl;
    cout << "masukkan nama anda : " << endl;
    getline(cin,nama);
    cout << "masukkan umur anda" << endl;
    cin >> umur;
    cout << "masukkan alamat rumah anda";
    cin >> alamat;
    cout << "===========================" << endl;
    cout << "memproses e-ktp..." << endl;
    cout << "E-KTP SUDAH SELESAI" << endl;
    cout << "===========================" << endl;
    cout << nama << endl;
    cout << umur << endl;
    cout << alamat << endl;
  }
  else{
    cout << "MAAF TOT,VERIVIKASI LU FALSE";
  }
  return 0;
}
