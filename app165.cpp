#include <iostream>
#include <conio.h>
using namespace std;
void header();
int menu();
int selection3();
void catalog();
void displayPricing();
main()
{
    string name1 = "", name2 = "", name3 = "";
    float price1 = 0.0, price2 = 0.0, price3 = 0.0;
    int quantity1 = 0, quantity2 = 0, quantity3 = 0, op = 0;
    float tax1 = 0.0, tax2 = 0.0, tax3 = 0.0;
    float total1 = 0.0, total2 = 0.0, total3 = 0.0, totalPayable = 0.0;

    header();
    while (true)
    {
        int option = menu();
        switch (option)
        {
        case 1: // Catalog
            catalog();
            break;
        case 2: // Pricing
            displayPricing();
            break;
        case 3: // Make Bill
            op = selection3();
            if (op == 1)
            {
                cout << "Enter the name of 1st Product: ";
                cin >> name1;
                cout << "Enter the price of 1st Product: ";
                cin >> price1;
                cout << "Enter the quantity of 1st Product: ";
                cin >> quantity1;
                cout << "Enter the tax rate on 1st Product (%): ";
                cin >> tax1;
            }
            if (op == 2)
            {
                cout << "Enter the name of 2nd Product: ";
                cin >> name2;
                cout << "Enter the price of 2nd Product: ";
                cin >> price2;
                cout << "Enter the quantity of 2nd Product: ";
                cin >> quantity2;
                cout << "Enter the tax rate on 2nd Product (%): ";
                cin >> tax2;
            }
            if (op == 3)
            {
                cout << "Enter the name of 3rd Product: ";
                cin >> name3;
                cout << "Enter the price of 3rd Product: ";
                cin >> price3;
                cout << "Enter the quantity of 3rd Product: ";
                cin >> quantity3;
                cout << "Enter the tax rate on 3rd Product (%): ";
                cin >> tax3;
            }
            break;
        case 4: // Calculate Total
            total1 = price1 * quantity1;
            total1 = total1 + total1 * ((tax1 / 100));
            total2 = price2 * quantity2;
            total2 = total2 + total2 * ((tax2 / 100));
            total3 = price3 * quantity3;
            total3 = total3 + total3 * ((tax3 / 100));
            totalPayable = total1 + total2 + total3;
            cout << "Total Payable Amount (including tax): " << totalPayable << endl;
            break;
        case 5: // View All Products Data
            cout << "All Products Data" << endl;
            cout << "Name"
                 << "\t"
                 << "Price "
                 << "\t"
                 << "Quantity"
                 << "\t"
                 << "Tax"
                 << "\t"
                 << "Total" << endl;
            cout << name1 << "\t" << price1 << "\t" << quantity1 << "\t\t" << tax1 << "\t" << total1 << endl;
            cout << name2 << "\t" << price2 << "\t" << quantity2 << "\t\t" << tax2 << "\t" << total2 << endl;
            cout << name3 << "\t" << price3 << "\t" << quantity3 << "\t\t" << tax3 << "\t" << total3 << endl;
            break;
        case 6: // Exit
            return 0;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
        cout << "Press any key to continue: ";
        getch();
        system("cls");
        header();
    }
}

void header() // function for header
{
    cout << "************************************************************************************************************************************************************************\n";
    cout << "*                                                              ART AND GALARY MANAGEMENT SYSTEM                                                                        *\n";
    cout << "************************************************************************************************************************************************************************\n";
}

int menu() // function for menu
{
    int option;
    cout << "Select one of the following options:\n";
    cout << " 1. Catalog\n";
    cout << " 2. Pricing\n";
    cout << " 3. Make Bill\n";
    cout << " 4. Calculate Total\n";
    cout << " 5. View All Products Data\n";
    cout << " 6. Exit\n";
    cout << " Your option: ";
    cin >> option;
    return option;
}

int selection3() // 3RD option menu
{
    int selection3;
    cout << "1. Add 1st Product Data" << endl;
    cout << "2. Add 2nd Product Data" << endl;
    cout << "3. Add 3rd Product Data" << endl;
    cout << "4. Calculate Total" << endl;
    cout << "5. View All Products Data" << endl;
    cout << "Your Option.. ";
    cin >> selection3;
    return selection3;
}

void catalog() // function for catalog
{
    cout << "Catalog of Paintings available" << endl;
    cout << "1. Winters" << endl;
    cout << "2. StarryNight" << endl;
    cout << "3. Memory" << endl;
    cout << "4. Scream" << endl;
    cout << "5. Guernica" << endl;
    cout << "6. Lost" << endl;
    cout << "7. Venus" << endl;
    cout << "8. Watch" << endl;
}

void displayPricing() // function for pricing
{
    cout << "Pricing for the 8 Famous Paintings" << endl;
    cout << "1. Winters: $860" << endl;
    cout << "2. StarryNight: $1000" << endl;
    cout << "3. Memory: $5000" << endl;
    cout << "4. Scream: $1200" << endl;
    cout << "5. Guernica: $1855" << endl;
    cout << "6. Lost: $12999" << endl;
    cout << "7. Venus: $1999" << endl;
    cout << "8. Watch: $6000" << endl;
}
