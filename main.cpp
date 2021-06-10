#include <bits/stdc++.h>
#include "include/shop.h"
#include <random>
#include <chrono>

using namespace std;
Shop shop;

void read_Vinyls()
{
    FILE* file;
    file = fopen("Vinyls.txt", "r");
    char letter;
    int counter = 0;
    string title, artist, price_category, quantity, genre;
    while(letter != EOF)
    {
        if(counter == 5)
        {
            Vinyl* vinyl = new Vinyl(title, artist, stoi(quantity), price_category, genre);
            shop.add_vinyl(vinyl);
            for(auto it : shop.get_sections())
            {
                if(it -> getName() == genre)
                    it -> addVinyl(vinyl);
            }
            title = artist = price_category = quantity = genre = "";
            counter = 0;
        }
        letter = fgetc(file);
        if(letter == ';')
        {
            counter ++;
            continue;
        }
        if(counter == 0)
            title += letter;
        if(counter == 1)
            artist += letter;
        if(counter == 2)
            quantity += letter;
        if(counter == 3)
            price_category += letter;
        if(counter == 4)
            genre += letter;
    }
    fclose(file);
}


void create_Sections()
{
    Section* Rock = new Section("Rock");
    shop.add_section(Rock);
    Section* Alternative = new Section("Alternative");
    shop.add_section(Alternative);
    Section* Indie = new Section("Indie");
    shop.add_section(Indie);
    Section* Hip_hop = new Section("Hip_hop");
    shop.add_section(Hip_hop);
    Section* Blues = new Section("Blues");
    shop.add_section(Blues);
    Section* Electronic = new Section("Electronic");
    shop.add_section(Electronic);
    Section* Jazz = new Section("Jazz");
    shop.add_section(Jazz);
    Section* Classic = new Section("Classic");
    shop.add_section(Classic);
    Section* Pop = new Section("Pop");
    shop.add_section(Pop);
    Section* Reggae = new Section("Reggae");
    shop.add_section(Reggae);
}


void read_Sellers()
{
    FILE* file;
    file = fopen("Sellers.txt", "r");
    char letter;
    int counter = 0;
    bool status;
    string forname, name, login, password, permmission_level, thematic_sections_str;
    vector<Section*> thematic_sections;
    while(letter != EOF)
    {
        if(counter == 6)
        {
            string help = "";
            for(int i = 0; i < thematic_sections_str.size(); i++)
            {
                if(thematic_sections_str[i] == ',')
                {
                    for(int j = 0; j < shop.get_sections().size(); j++){
                        if(shop.get_sections()[j] -> getName() == help){
                            thematic_sections.push_back(shop.get_sections()[j]);
                            break;
                        }
                    }
                    help = "";
                    continue;
                }
                help += thematic_sections_str[i];
            }
            Seller* seller = new Seller(forname, name, login, password, permmission_level, thematic_sections);
            shop.add_seller(seller);
            forname = name = login = password = permmission_level = thematic_sections_str = "";
            thematic_sections.clear();
            counter %= 6;
        }
        letter = fgetc(file);
        if(letter == ';')
        {
            counter ++;
            continue;
        }
        if(counter == 0)
            forname += letter;
        if(counter == 1)
            name += letter;
        if(counter == 2)
            login += letter;
        if(counter == 3)
            password += letter;
        if(counter == 4)
            permmission_level += letter;
        if(counter == 5)
            thematic_sections_str += letter;
    }
    fclose(file);
}


int main(int argc, char* argv[])
{
    if(argc != 3)
    {  
        std::cout << "Blad\n";
        return 0;
    }
    int timeLimit, clientLimit;
    try
    {
        timeLimit = stoi(argv[1]);
        clientLimit = stoi(argv[2]);
    }
    catch(invalid_argument)
    {
        std::cout << "Blad\n";
        return 0;
    }
    create_Sections();
    read_Vinyls();
    read_Sellers();
    filebuf fb;
    fb.open ("ODP.txt",ios::app);
    string firstNames[] = {"Adam", "Bartlomiej", "Anna", "Szymon", "Natalia", "Zuzanna", "Karol", "Jakub", "Dominika", "Piotr", "Ryszard", "Aneta", "Karolina", "Wiktoria", "Marek"};
    string lastNames[] = {"Chmielewski", "Suraj", "Obroslak", "Zając", "Mazur", "Pelc", "Golianek", "Gil", "Baran", "Wieleba", "Bielak", "Wnuczek", "Zuń", "Malysz", "Kubica"};
    string artists[] = {"AC/DC", "Aerosmith", "Arctic Monkeys", "Budka Suflera", "Green Day", "Linkin Park", "Metallica", "Queen", "Toto", "Mac Miller", "Eminem", "Bjork", "Mozart", "Vivaldi", "Britney Spears"};
    string genres[] = {"Rock", "Alternative", "Indie", "Hip_hop", "Blues", "Electronic", "Jazz", "Classic", "Pop", "Reggae"};
    unsigned seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 generator(seed);
    for(int time = 0; time < timeLimit; time++){
        if(shop.get_clients().size() < clientLimit)
        {
            int number1 = uniform_int_distribution<int>(0, 14)(generator);
            int number2 = uniform_int_distribution<int>(0, 14)(generator);
            int number3 = uniform_int_distribution<int>(0, 9)(generator);
            int number4 = uniform_int_distribution<int>(0, 14)(generator);
            int number5;
            int number6;
            vector<pair<string, int> > V;
            for(int i = 0; i < 2; i++){
                number5 = uniform_int_distribution<int>(0, 309)(generator);
                number6 = uniform_int_distribution<int>(1, 5)(generator);
                V.push_back({shop.get_vinyls()[number5] -> get_name(), number6});
            }
            Client* client = new Client(firstNames[number1], lastNames[number2], genres[number3], artists[number4], V);
            shop.add_client(client);
        }
        vector<Client*> clients = shop.get_clients();
        for(int i = 0; i < clients.size(); i++){
            if(clients[i] -> get_shopping_list().size() == 0) continue;
            for(auto it : clients[i] -> get_shopping_list()){
                string name = it.first;
                int number = it.second;
                string genre = shop.getVinylGenre(it.first);
                Seller seller;
                Vinyl* vinyl = new Vinyl();
                for(auto q : shop.get_sellers()){
                    for(auto k : q -> Get_thematic_sections()){
                        if(k -> getName() == genre){
                            q -> Set_status(false);
                            seller = *q;
                            vinyl = q -> getVinyl(name, genre);
                            goto here;
                        }
                    }
                }
                here:
                if(number <= vinyl -> get_quantity()){
                    vinyl -> set_quantity(vinyl -> get_quantity() - number);
                    cout << "Klient " << clients[i] -> get_firstName() << " " << clients[i] -> get_lastName() << " kupuje " << number << " " << vinyl -> get_name() << " z kategorii cenowej: " << vinyl -> get_price_category() << " od " << seller.Get_name() << " " << seller.Get_surname() << endl;
                    ostream os(&fb);
                    os << "Klient " << clients[i] -> get_firstName() << " " << clients[i] -> get_lastName() << " kupuje " << number << " " << vinyl -> get_name() << " z kategorii cenowej: " << vinyl -> get_price_category() << " od " << seller.Get_name() << " " << seller.Get_surname() << endl;
                    
                }
                else{
                    //zamawianie
                }
            }
        }
        char a = '0';
        std::cout << "Czy kontynuowac? (t/n)";
        while(a != 't'){
            cin >> a;
        }
    }
    fb.close();
    return 0;
}