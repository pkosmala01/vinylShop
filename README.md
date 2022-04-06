# VinylShop
## Opis/description
VinylShop to projekt grupowy wykonany na zaliczenie przedmiotu Programowanie Obiektowe na Politechnice Warszawskiej. Składa się on z programu symulującego działanie sklepu z płytami winylowymi - wizyty klientów, sprzedaż płyt oraz podział na sekcje zarządzane przez poszczególnych pracowników.

VinylShop is a group project created at the end of the Object Oriented Programming course at the Warsaw University of Technology. It consists of an application simulating the daily functioning of a vinyl shop - visits of clients, sales of vinyls, division into sections run by assigned employees.

## Uruchamianie/How to run
W celu uruchomienia programu należy wpisać kolejno następujące komendy:
    cmake .
    make
    ./vinylshop
Do linii poleceń trzeba podać dwa argumenty całkowitoliczbowe - czas trwania symulacji oraz liczbę klientów
W przypadku problemów z kompilacją warto usunąć plik CMakeCache.txt (zostanie on wtedy ponownie wygenerowany przy wykonaniu komendy cmake .)

In order to run the program you need to enter the following commands:
    cmake .
    make
    ./vinylshop
At the end of the last command two integer arguments are required - length of the simulation and number of clients taking part. In case of problems with compilation it's recommended to delete the CMakeCache.txt file (it will get generated automatically with the next execution of the cmake . command)
