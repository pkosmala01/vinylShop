#ifndef CLIENT_H
#define CLIENT_H

#include<string>
<<<<<<< HEAD
#include<iostream>
#include<vector>
=======
#include<map>
#include<iostream>
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a

class Client
{
private:
    std::string m_firstName;
    std::string m_lastName;
<<<<<<< HEAD
    std::string m_favouriteGenre;
    std::string m_favouriteArtist;
    std::vector<std::pair<std::string, int> > shopping_list; // zmienilem na liste tego, co chce kupic klient
=======
    std::string m_cardNumber;
    std::string m_favouriteGenre;
    std::string m_favouriteArtist;
    std::map<std::string, int> m_shoppingCart;
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
public:
    Client(std::string firstName, std::string lastName, std::string cardNumber, std::string favouriteGenre, std::string favouriteArtist);
    Client(const Client&);
    void set_firstName(std::string firstName);
    void set_lastName(std::string lastName);
<<<<<<< HEAD
=======
    void set_cardNumber(std::string cardNumber);
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
    void set_favouriteGenre(std::string favouriteGenre);
    void set_favouriteArtist(std::string favouriteArtist);
    std::string get_firstName();
    std::string get_lastName();
<<<<<<< HEAD
    std::string get_favouriteGenre();
    std::string get_favouriteArtist();
    std::vector<std::pair<std::string, int> > get_shopping_list();
    void print_shoppingCart();
=======
    std::string get_cardNumber();
    std::string get_favouriteGenre();
    std::string get_favouriteArtist();
    std::map<std::string, int> get_shoppingCart();
    void print_shoppingCart();
    void addToCart(std::string name, int number);
    void removeFromCart(std::string name);
>>>>>>> 77ccf591c73d91b2dc255ea322060dc8a1fd881a
    friend std::ostream& operator<<(std::ostream& os, Client& c);
    friend bool operator==(Client& l, Client& r);
    friend bool operator!=(Client& l, Client& r);
    Client& operator=(const Client& c);
};

#endif