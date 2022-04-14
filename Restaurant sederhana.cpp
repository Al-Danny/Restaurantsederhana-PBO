#include <iostream>
#include <vector>
using namespace std;

class menu{
	public :
		void paket()
		{
			int pilih;
			cout << "1. Paket Ayam Geprek + Minum = 20000" << endl;
			cout << "2. Paket Ayam Madu + Minum = 35000" << endl;
			cout << "3. Paket Gurame Bakar + Minum = 100000" << endl;
			cout << "4. Paket Sate Ayam + Minum = 15000" << endl;
			cout << "5. Paket Swikey + Minum = 20000" << endl;		
		}	
};

class paket{
	public :
		void pesen()
		{
			int pilih;
			int quantity;
			int harga,kembalian,uang;
			kesini:
			cout << "Masukkan menu yang dibeli : ";
			cin >> pilih;
			cout << "Masukkan jumlah paket :";
			cin >> quantity;
			if (pilih==1)
			{
				harga = 20000*quantity;
				cout << " total yang harus dibayar = " << harga << endl;
				cout << " uang diterima : ";
				cin >> uang;
				kembalian = uang - harga;
				if (kembalian > 0 )
				{
					cout << " Uang Kembalian anda : " << kembalian << endl;
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
				else{
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
				
			}
			else if (pilih==2)
			{
				harga = 35000*quantity;
				cout << "total yang harus dibayar = " << harga;
				cout << " uang diterima : ";
				cin >> uang;
				kembalian = uang - harga;
				if (kembalian > 0 )
				{
					cout << " Uang Kembalian anda : " << kembalian << endl;
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
				else{
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
			}
			else if (pilih==3)
			{
				harga = 100000*quantity;
				cout << "total yang harus dibayar = " << harga;
				cout << " uang diterima : ";
				cin >> uang;
				kembalian = uang - harga;
				if (kembalian > 0 )
				{
					cout << " Uang Kembalian anda : " << kembalian << endl;
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
				else{
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
			}
			else if (pilih==4)
			{
				harga = 15000*quantity;
				cout << "total yang harus dibayar = " << harga;
				cout << " uang diterima : ";
				cin >> uang;
				kembalian = uang - harga;
				if (kembalian > 0 )
				{
					cout << " Uang Kembalian anda : " << kembalian << endl;
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
				else{
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
			}
			else if (pilih==5)
			{
				harga = 20000*quantity;
				cout << "total yang harus dibayar = " << harga;
				cout << " uang diterima : ";
				cin >> uang;
				kembalian = uang - harga;
				if (kembalian > 0 )
				{
					cout << " Uang Kembalian anda : " << kembalian << endl;
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
				else{
					cout << " Terima Kasih dan silahkan menunggu dimeja pilihan anda";
				}
			}
			else{
				goto kesini;
			}
		}
};

class kasir{
	private:
		string user;
		string password;
	
	public:
		kasir()
		{
			this->user = "";
        	this->password = "";
		}
		kasir(string user, string password)
		{
			this->user = user;
        	this->password = password;
		}
	string getUser()
    {
        return user;
    }
    string getPassword()
    {
        return password;
    }	
};

class restaurant
{
	private:
		vector<kasir> listkasir;
		
	public:
		restaurant()
		{
			this->listkasir.push_back(kasir("admin", "0203"));
		}
		
	bool checkMasuk(string user, string password)
    {
        for (int i = 0; i < listkasir.size(); i++)
        {
            if (listkasir[i].getUser() == user && listkasir[i].getPassword() == password)
            {
                return true;
            }
        }
        return false;
    }
    
    kasir getUser(string user, string password)
    {
        for (int i = 0; i < listkasir.size(); i++)
        {
            if (listkasir[i].getUser() == user && listkasir[i].getPassword() == password)
            {
                return listkasir[i];
            }
        }
        return kasir();
    }
};

int main()
{
	//default username : admin, password : 0203
	restaurant restaurant;
    kasir user;
	string username;
	string password;
	bool login = false;
    while (!login)
    {
    	cout << "========================================" << endl;
		cout << "Selamat Datang Di Resto Restu Sederhana" << endl;
		cout << "========================================" << endl;
		cout << "\tSilahkan Login Kasirku....." << endl;
		cout << "========================================" << endl;
		cout << endl << "Masukkan Username : ";
		cin >> username;
		cout << endl << "Masukkan Password : ";
		cin >> password;
		login = restaurant.checkMasuk(username, password);

        if (!login)
        {
            cout << "username dan password salah" << endl;
            system("pause");
            system("cls");
        }
        else
        {
            user = restaurant.getUser(username, password);
        }
	}
	
	int choose;
	system("cls");
	kesini:
	cout << "========================================" << endl;
	cout << "\t\tMain Menu" << endl;
	cout << "========================================" << endl;
	cout << "1. List Paket" << endl;
	cout << "2. Pesan dan Bayar Paket" << endl;
	cout << "0. Exit" << endl;
	cout << " Masukkan Pilihan : ";
	cin >> choose;
	switch(choose)
	{
		case 1:
			system("cls");
			cout << "========================================" << endl;
			cout << "\t\tPilihan Paket" << endl;
			cout << "========================================" << endl;
			menu list;
			list.paket();
			system("pause");
			goto kesini;
		break;
		
		case 2:
			paket tuku;
			tuku.pesen();
			cout << endl;
		break;
			
		case 0:
			system("exit");
		break;
		
		default:
			system("cls");
			goto kesini;	
	}
	return 0;
}