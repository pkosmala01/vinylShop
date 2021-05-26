#include <iostream>
#include "sprzedawca.h"
#include <cstdlib>

using namespace std;

Seller::Seller(string name1, string surname1, string login1, string password1, string per_level, vector<string> them_sect)
{
    name = name1; // przypisuje imie
    surname = surname1; // przypisuje nazwisko
    login = login1; // przypisuje wiek
    password = password1; // przypisuje pensja
    permission_level = per_level; // przypisuje zakres dostepu
    thematic_sections = them_sect; // przypisuje sekcje
}

Seller::Seller(const Seller& sel)
{
    name = sel.name;
    surname = sel.surname;
    login = sel.login;
    password = sel.password;
    permission_level = sel.permission_level;
    thematic_sections = sel.thematic_sections;
}
string Seller::Get_name() {return name;}// getter imienia
string Seller::Get_surname() {return surname;} // getter nazwiska
string Seller::Get_permission_level() {return permission_level;} // getter poziomu dostepu
string Seller::Get_login() {return login;} // getter loginu
string Seller::Get_password() {return password;} // getter hasla
vector <string> Seller::Get_thematic_sections() {return thematic_sections;} // getter obslugiwanych sekcji
void Seller::Set_name(string name1) {name=name1;} // setter imienia
void Seller::Set_surname(string surname1) {surname=surname1;} // setter nazwiska
void Seller::Set_login(string login1) {login=login1;} // setter loginu
void Seller::Set_password(string password1) {password=password1;} // setter hasla
void Seller::Set_permission_level(string perm_lvl) {permission_level=perm_lvl;} //setter poziomu dostepu
void Seller::Set_thematic_sections(string section) {thematic_sections.push_back(section);} // setter obslugiwaneg dzialu
ostream& operator<<(ostream& os, Seller& sel)
{
    os <<"Imie sprzedawcy: "<< sel.Get_name() <<"\n";
    os <<"Nazwisko sprzedawcy: "<< sel.Get_surname() <<"\n";
    os <<"Login sprzedawcy: "<< sel.Get_login() <<"\n";
    os <<"Haslo sprzedawcy: "<< sel.Get_password() <<"\n";
    os <<"Poziom uprawnien sprzedawcy: "<< sel.Get_permission_level() <<"\n";
    os <<"Obslugiwane stanowiska sprzedawcy:\n";
    vector <string> sections = sel.Get_thematic_sections();
    for(int i=0; i<sections.size(); i++)
    {
        os <<sections[i]<<endl;
    }
    return os;
}
bool operator!=(Seller& sel, Seller& sel1)
{
    if(sel.Get_name() == sel1.Get_name()) // porownujemy poszcegolne parametry
        if(sel.Get_surname() == sel1.Get_surname())
            if(sel.Get_login() == sel1.Get_login())
                if(sel.Get_password() == sel1.Get_password())
                    if(sel.Get_permission_level() == sel1.Get_permission_level())
                        if(sel.Get_thematic_sections() == sel1.Get_thematic_sections())
                            return 0;
    return 1;
}
bool operator==(Seller& sel, Seller& sel1)
{
    if(sel.Get_name() == sel1.Get_name())
        if(sel.Get_surname() == sel1.Get_surname())
            if(sel.Get_login() == sel1.Get_login())
                if(sel.Get_password() == sel1.Get_password())
                    if(sel.Get_permission_level() == sel1.Get_permission_level())
                        if(sel.Get_thematic_sections() == sel1.Get_thematic_sections())
                            return 1;
    return 0;
}
