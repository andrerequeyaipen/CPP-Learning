#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

struct CityRecord
{
    std::string Name;
    unit64_t Population;
    double Latitude, Longitude;
}

int main(){
    std::vector<CityRecord> cities;
    
    cities.emplace_back("Melbourne", 5000000, 2.4, 9.4); //appending into the vector
    cities.emplace_back("Lol-town", 5000000, 2.4, 9.4);
    cities.emplace_back("Berlin", 5000000, 2.4, 9.4);
    cities.emplace_back("Paris", 5000000, 2.4, 9.4);
    cities.emplace_back("London", 5000000, 2.4, 9.4);

    std::map<std::string, CityRecord> cityMap;
    cityMap["Melbourne"] = CityRecord{}
    cityMap[] = CityRecord{}
    cityMap[] = CityRecord{}
    cityMap[] = CityRecord{}
    cityMap[] = CityRecord{}
    cityMap[] = CityRecord{}
}