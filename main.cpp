#include <iostream>

using namespace std;

class Array 
{
  public:
  int baris = 16;
  int kolom = 3;
  

void arraySatu()
{
 
  
  string data[16] = {"Kelas \t Nim \t\t\t Nama",
  "A \t\t 1900018018 \t Andika Pangestu",
  "  \t\t 1900018029 \t Sadajiwa Kuncoro",
  "  \t\t 1900018011 \t Sasa Nur Safitri",
  "  \t\t 1900018023 \t Karin Ayu",
  "  \t\t 1900018030 \t Dika Saputra",
  "B \t\t 1900018001 \t Sandika Aji",
  "  \t\t 1900018045 \t Putri Larasati",
  "  \t\t 1900018046 \t Najib Nur Kholisa",
  "  \t\t 1900018048 \t Ayu Dewi Kencana",
  "  \t\t 1900018050 \t Kirana Sekar",
  "C \t\t 1900018033 \t Sadewa Jatmiko",
  "  \t\t 1900018101 \t Cipta Dewandaru",
  "  \t\t 1900018150 \t Endra Ismawanti",
  "  \t\t 1900018056 \t Laksana Lingga",
  "  \t\t 1900018060 \t Mada Nismara",
 };

  for(int i = 0; i < baris; i++){
    cout <<  data[i] << endl;
  }
  
}

void arrayDua()
{
  string data[16][3] = 
  {
    {"Kelas", "Nim", "Nama"},
    {"A", "1900018018", "Andika Pangestu"},
    {" ", "1900018029", "Sadajiwa Kuncoro"},
    {" ", "1900018011", "Sasa Nur Safitri"},
    {" ", "1900018023", "Karin Ayu"},
    {" ", "1900018030", "Dika Saputra"},
    {"B", "1900018001", "Sandika Aji"},
    {" ", "1900018045", "Putri Larasati"},
    {" ", "1900018046", "Najib Nur Kholis"},
    {" ", "1900018048", "Ayu Dewi Kencana"},
    {" ", "1900018050", "Kirana Sekar"},
    {"C", "1900018033", "Sadewa Jatmi"},
    {" ", "1900018101", "Cipta Dewandaru"},
    {" ", "1900018150", "Endra Iswaman"},
    {" ", "1900018056", "Laksana Lingga"},
    {" ", "1900018060", "Mada Nismara"},
  };

  
  for(int i = 0; i < baris; i++){
    for(int j = 0; j < kolom; j++){
      cout << data[i][j] << " \t\t";
    }
    cout << endl;
  }
}

void arraySatuDua(){
   string dataLain[48] = {
  "Kelas", "Nim", "Nama",
  "A", "1900018018", "Andika Pangestu",
  " ", "1900018029", "Sadajiwa Kuncoro",
  " ", "1900018011", "Sasa Nur Safitri",
  " ", "1900018023", "Karin Ayu",
  " ", "1900018030", "Dika Saputra",
  "B", "1900018001", "Sandika Aji",
  " ", "1900018045", "Putri Larasati",
  " ", "1900018046", "Najib Nur Kholis",
  " ", "1900018048", "Ayu Dewi Kencana",
  " ", "1900018050", "Kirana Sekar",
  "C", "1900018033", "Sadewa Jatmi",
  " ", "1900018101", "Cipta Dewandaru",
  " ", "1900018150", "Endra Iswaman",
  " ", "1900018056", "Laksana Lingga",
  " ", "1900018060", "Mada Nismara",
  };
   int barisDua = 48;
   for(int i = 0; i < barisDua; i = i+3){
    cout <<  dataLain[i] << "\t\t" <<dataLain[i+1] << "\t\t" << dataLain[i+2] << endl;
  }
  
  // 2 Dimensi
  string dataLainDua[16][3];
  int x = 0;
  for(int i = 0; i < baris; i++){
    for(int j = 0; j < kolom; j++){
      dataLainDua[i][j] = dataLain[x];
      x++;
    }
  }

  for(int i = 0; i < baris; i++){
    for(int j = 0; j < kolom; j++){
      cout << dataLainDua[i][j] << " \t\t";
    }
    cout << endl;
  }
}

};




int main() {
  // std::cout << "Hello World!\n";
  Array obj;
  // obj.arraySatu();
  // cout << endl;
  // obj.arrayDua();
  cout << endl;
  obj.arraySatuDua();
}