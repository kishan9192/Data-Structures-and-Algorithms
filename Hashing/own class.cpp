#include<iostream>
#include<unordered_map>
using namespace std;
class Fruit{
public:
     string name;
     int price;
     string city;
     Fruit()
     {

     }
     Fruit(string n, int p, string c)
     {
          name = n;
          price = p;
          city = c;
     }
};
int main()
{
     unordered_map<string,Fruit> m; ///Value is Fruit because ek fruit ke corresponding hum poora object store kar rahe hain. Like uska price, uski location uska naam etc.
     Fruit f("Apple", 100, "Noida");
     m[f.name] = f; /// Seach to name se hi karoge.
     Fruit fs = m["Banana"];
        m["Banana"].price = 120;
    // cout<<fs.price<<endl;
    // cout<<fs.city<<endl;
    //cout<<m["Apple"].price<<endl;
    string fruit;
    cin>>fruit;
    //m.erase(fruit); // If i uncomment it, it will erase the entered fruit and the output will always be Fruit doesn't exist.
    if(m.count(fruit) == 0)
    {
        cout<<"Fruit doesn't exist"<<endl;
    }
    else
    {
        cout<<"Price is "<<m[fruit].price<<endl;
    }
    m.erase(fruit);

}
