/*
The programme should welcome the user to the coffee shop.
It should ask the user if they want coffee, then establish how many numbers of coffees the user will be ordering. 
The number of coffees ordered should be stored in a variable: no_of_coffee.
Maths
Variables: 
Coffee_price = 30
total_price = no_of_coffee * Coffee_price
print the results.
*/

# include <Iostream> 

using namespace std;

int main() {

    cout <<"Welcome to My coffee shop: The Rendz Caffee.\n"<< endl;
    
    cout <<"How many cups of Coffee, do you want to buy?"<< endl;
    int no_of_cups;
    cin >> no_of_cups;

    int coffe_price {30};
    
    cout << "Thank you for the buying coffee the total price is R"<< (no_of_cups * coffe_price) << endl;

    return 0;
    

}

