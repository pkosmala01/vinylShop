#include "client.h"
#include <utility>

Client::Client(std::string firstName, std::string lastName, std::string cardNumber, std::string favouriteGenre, std::string favouriteArtist){//konstruktor domyślny
    m_firstName = firstName;
    m_lastName = lastName;
<<<<<<< HEAD
=======
    m_cardNumber = cardNumber;
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
    m_favouriteGenre = favouriteGenre;
    m_favouriteArtist = favouriteArtist;
}

Client::Client(const Client& c){//konstruktor kopiujący
    m_firstName = c.m_firstName;
    m_lastName = c.m_lastName;
<<<<<<< HEAD
=======
    m_cardNumber = c.m_cardNumber;
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
    m_favouriteGenre = c.m_favouriteGenre;
    m_favouriteArtist = c.m_favouriteArtist;
}

void Client::set_firstName(std::string firstName) {m_firstName = firstName;}
void Client::set_lastName(std::string lastName) {m_lastName = lastName;}
<<<<<<< HEAD
=======
void Client::set_cardNumber(std::string cardNumber) {m_cardNumber = cardNumber;}
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
void Client::set_favouriteGenre(std::string favouriteGenre) {m_favouriteGenre = favouriteGenre;}
void Client::set_favouriteArtist(std::string favouriteArtist) {m_favouriteArtist = favouriteArtist;}//funkcje przypisujące wartości pól
std::string Client::get_firstName() {return m_firstName;}
std::string Client::get_lastName() {return m_lastName;}
<<<<<<< HEAD
std::string Client::get_favouriteGenre() {return m_favouriteGenre;}
std::string Client::get_favouriteArtist() {return m_favouriteArtist;}//funkcje zwracające wartości pól
std::vector<std::pair<std::string, int> > Client::get_shopping_list() {return shopping_list;}
void Client::print_shoppingCart() {//wypisywanie zawartości koszyka
    std::cout << "Zawartosc koszyka: " << std::endl;
    for (auto it : shopping_list){
        std::cout << it.first << " " << it.second << std::endl;
    }
}
=======
std::string Client::get_cardNumber() {return m_cardNumber;}
std::string Client::get_favouriteGenre() {return m_favouriteGenre;}
std::string Client::get_favouriteArtist() {return m_favouriteArtist;}//funkcje zwracające wartości pól
std::map<std::string, int> Client::get_shoppingCart() {return m_shoppingCart;}
void Client::print_shoppingCart() {//wypisywanie zawartości koszyka
    std::cout << "Zawartosc koszyka: " << std::endl;
    for (auto it : m_shoppingCart){
        std::cout << it.first << " " << it.second << std::endl;
    }
}
void Client::addToCart(std::string name, int number){//dodawanie elementu do koszyka
    if(m_shoppingCart.find(name) != m_shoppingCart.end()){//jeśli element już jest w koszyku, zwiększ ich liczbę
        m_shoppingCart[name] += number;
    }
    else{
        m_shoppingCart.insert(make_pair(name, number));
    }
}
void Client::removeFromCart(std::string name){//usuwanie elementu z koszyka
    if(m_shoppingCart.find(name) != m_shoppingCart.end()){
        m_shoppingCart.erase(name);
    }
    else{
        std::cout << "Brak elementu w koszyku!" << std::endl;
    }
}
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
std::ostream& operator<<(std::ostream& os, Client& c)//przeładowania operatorów
{
    std::string firstName = c.get_firstName();
    std::string lastName = c.get_lastName();
<<<<<<< HEAD
    std::string favouriteGenre = c.get_favouriteGenre();
    std::string favouriteArtist = c.get_favouriteArtist();
    os << firstName << " " << lastName << ", " << favouriteGenre << ", " << favouriteArtist;
=======
    std::string cardNumber = c.get_cardNumber();
    std::string favouriteGenre = c.get_favouriteGenre();
    std::string favouriteArtist = c.get_favouriteArtist();
    os << firstName << " " << lastName << ", " << cardNumber << ", " << favouriteGenre << ", " << favouriteArtist;
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
    return os;
}
bool operator==(Client& l, Client& r){
    if(l.get_firstName() == r.get_firstName() &&
        l.get_lastName() == r.get_lastName() &&
<<<<<<< HEAD
=======
        l.get_cardNumber() == r.get_cardNumber() &&
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
        l.get_favouriteGenre() == r.get_favouriteGenre() &&
        l.get_favouriteArtist() == r.get_favouriteArtist()){
            return true;
        }
    else return false;
}
bool operator!=(Client& l, Client& r){
    if(l.get_firstName() != r.get_firstName() ||
        l.get_lastName() != r.get_lastName() ||
<<<<<<< HEAD
=======
        l.get_cardNumber() != r.get_cardNumber() ||
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
        l.get_favouriteGenre() != r.get_favouriteGenre() ||
        l.get_favouriteArtist() != r.get_favouriteArtist()){
            return true;
        }
    else return false;
}
Client& Client::operator=(const Client& c){
    if(this == &c) return *this;
    m_firstName = c.m_firstName;
    m_lastName = c.m_lastName;
<<<<<<< HEAD
=======
    m_cardNumber = c.m_cardNumber;
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
    m_favouriteGenre = c.m_favouriteGenre;
    m_favouriteArtist = c.m_favouriteArtist;
    return *this;    
}