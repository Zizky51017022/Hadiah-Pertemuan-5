#include <iostream.h>
#include <conio.h>

main () {
int Nilai,Jumlah,Z;
 cout <<"Masukkan Nilai = "; cin>>Nilai;
 Jumlah=0;
 for (Z=1; Z<=Nilai;Z++)
 if (Nilai % Z == 0)

 Jumlah++;
 if (Jumlah == 2)
 cout<<"Nilai Yang Anda Inputkan Bilangan Prima \n";
 else
 cout<<"Nilai Yang Anda Inputkan Bukan Bilangan Prima \n";
getch () ;
}
