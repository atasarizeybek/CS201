//
//  main.cpp
//  CS201 THE 1
//
//  Created by ATA on 17.03.2023.
//

#include <iostream>





using namespace std;
int main() {
    int  water, soda, hamburger, fries;

    float VAT;
    bool has_cheese = 0;
    bool is_student = 0;
    cout << "Enter the quantity of each product you have ordered: \n";
    cout << "Water: ";
    cin >> water;
    cout << "Soda: ";
    cin >> soda;
    cout << "Fries: ";
    cin >> fries;
    cout << "Hamburger: ";
    cin >> hamburger;
    if (hamburger > 0) {
        cout << "Add cheese to your hamburger(s)? (1 for yes, 0 for no): ";
        int cheese_choice;
        cin >> cheese_choice;
        has_cheese = (cheese_choice == 1);
    }
    cout << "Are you a student? (1 for yes, 0 for no): ";
    int student_choice;
    cin >> student_choice;
    if (student_choice == 1) {
        is_student = 1;
    }
   
   
        //cout << "Are you a student? (1 for yes, 0 for no): ";<
        //  int student_choice;
        // cin >> student_choice;
        // is_student = (student_choice == 1);
        
        
    
    const double WATER_PRICE = 10.00;
    const double SODA_PRICE = 30.00;
    const double HAMBURGER_PRICE = 100.00;
    const double CHEESE_PRICE = 11.00;
    const double FRIES_PRICE = 59.50;
    const double HAMBURGER_TAX_RATE = 0.10;
    const double FRIES_TAX_RATE = 0.10;
    const double SODA_TAX_RATE = 0.50;
    
    
    double total_price = water * WATER_PRICE;
    total_price += soda * SODA_PRICE * (1.0 + SODA_TAX_RATE);
    total_price += hamburger * HAMBURGER_PRICE * (1.0 + HAMBURGER_TAX_RATE);
    if (has_cheese) {
        total_price += hamburger * CHEESE_PRICE * (1.0 + HAMBURGER_TAX_RATE);
    }
    total_price += fries * FRIES_PRICE * (1.0 + FRIES_TAX_RATE);
    if (is_student) {
        total_price *= 0.75;
    }
    double service_charge;
    if (is_student) {
        if (total_price < 175.0) {
            service_charge = total_price * 0.10;
        } else if (total_price < 375.0) {
            service_charge = total_price * 0.08;
        } else {
            service_charge = total_price * 0.06;
        }
    }else {
        if (total_price < 175.0) {
            service_charge = total_price * 0.10;
        } else if (total_price < 375.0) {
            service_charge = total_price * 0.8;
        } else {
            service_charge = total_price * 0.06;
        }
        if (has_cheese) {
            service_charge = service_charge * 0.1 ;
        }
        
        if (has_cheese == 0){
            VAT = (hamburger * HAMBURGER_PRICE * HAMBURGER_TAX_RATE + fries * FRIES_PRICE * FRIES_TAX_RATE +soda *SODA_PRICE * SODA_TAX_RATE);
        }else {
            VAT = ((hamburger * HAMBURGER_PRICE + CHEESE_PRICE) * HAMBURGER_TAX_RATE + fries * FRIES_PRICE * FRIES_TAX_RATE + soda * SODA_PRICE * SODA_TAX_RATE);
        }
        
        
        
        
        
    if (total_price == 0){
        cout << "\n===================================\n         Restaurant Invoice\n===================================\nThe customer has not made a purchase or placed an order!";
            
    }
    if (is_student) {
        cout << "\nWater (" << water << "): "
        << water * WATER_PRICE << " TL" <<endl;
        cout << "Soda (" << soda << "): "
        << soda * SODA_PRICE <<" TL" <<endl;
        cout << "Fries (" << soda << "): "
        << fries * FRIES_PRICE <<" TL" <<endl;
        cout << "Hamburgers (" << hamburger << "): "
        << hamburger * HAMBURGER_PRICE + CHEESE_PRICE <<" TL" <<endl;
        cout << "Subtotal: "
        << water * WATER_PRICE +soda * SODA_PRICE + hamburger * HAMBURGER_PRICE + CHEESE_PRICE + fries * FRIES_PRICE << " TL" << endl;
        cout << "\nVAT: "
        << VAT << " TL" << endl;
        cout << "Student discount: "
        << (total_price + service_charge) * -0.25 << " TL" << endl;
        cout << "Service fee: "
        << service_charge << " TL" << endl;
        cout << "Total price: "
        << (total_price + service_charge) * 0.75 <<" TL" << endl;
    }
    if (total_price > 0) {
        cout << "\n===================================\n         Restaurant Invoice\n===================================";
    }
        
    if (water and hamburger and soda and fries > 0){
        
        cout << "\nWater (" << water << "): "
        << water * WATER_PRICE << " TL" <<endl;
        cout << "Soda (" << soda << "): "
        << soda * SODA_PRICE <<" TL" <<endl;
        cout << "Fries (" << soda << "): "
        << fries * FRIES_PRICE <<" TL" <<endl;
        cout << "Hamburgers (" << hamburger << "): "
        << hamburger * HAMBURGER_PRICE + CHEESE_PRICE <<" TL" <<endl;
        cout << "Subtotal: "
        << water * WATER_PRICE +soda * SODA_PRICE + hamburger * HAMBURGER_PRICE + CHEESE_PRICE + fries * FRIES_PRICE << " TL" << endl;
        cout << "\nVAT: "
        << VAT << " TL" << endl;
        cout << "Service fee: "
        << service_charge << " TL" << endl;
        cout << "Total price: "
        << total_price + service_charge <<" TL" << endl;
        
    }
        if (water and soda and hamburger >= 1 and fries < 1) {
            cout << "\nWater (" << water << "): "
            << water * WATER_PRICE << " TL" <<endl;
            cout << "Soda (" << soda << "): "
            << soda * SODA_PRICE <<" TL" <<endl;
            if (has_cheese) {
                cout << "Hamburgers (" << hamburger << "): "
                << hamburger * HAMBURGER_PRICE + CHEESE_PRICE <<" TL" <<endl;
            }
            else {
                cout << "Hamburgers (" << hamburger << "): "
                << hamburger * HAMBURGER_PRICE <<" TL" <<endl;
                cout << "Subtotal: "
                << water * WATER_PRICE +soda * SODA_PRICE + hamburger * HAMBURGER_PRICE + fries * FRIES_PRICE << " TL" << endl;
                cout << "\nVAT: "
                << VAT << " TL" << endl;
                cout << "Service fee: "
                << service_charge << " TL" << endl;
                cout << "Total price: "
                << total_price + service_charge <<" TL" << endl;
            }
        }
    }

    
    

        
                
                
                
                
                
                
                
                
    return 0;
}
