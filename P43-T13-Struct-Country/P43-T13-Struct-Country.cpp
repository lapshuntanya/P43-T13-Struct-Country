#include "Country.h"
#include "ArrayTemplate.h"

void showTitle()
{
    cout << "|" << setw(15) << "Name" << "|" << setw(10) << "World" << "|"
        << setw(6) << "Square" << "|" << setw(6) << "People" << "|\n";
    cout << "===============================================\n";
}

int main()
{
    int N = 5;
    Country* arr = new Country[N]{
        {"Ukraine", "Europe", 603, 4000},   //arr[0]
        {"China", "Asia", 8128, 14000},     //arr[1]
        {"USA", "America", 4677, 270},      //arr[2]
        {"France", "Europe", 173, 115},     //arr[3]
        {"Canada", "Europe", 5123, 130}     //arr[4]
    };

    Country a{ "Japan", "Asia", 672, 500 };
    addItemBack(arr, N, a);

    Country b{ "Italy", "Europe", 231, 654 };
    addItemBack(arr, N, b);



    showTitle();
    for (int i = 0; i < N; i++) {
        arr[i].showTable();
    }


    cout << "===================================\n";
    cout << "\n\nSort by square:\n";
    mySort<Country>(arr, N, [](Country left, Country right) { return left.square < right.square; });
    showTitle();
    for (int i = 0; i < N; i++) {
        arr[i].showTable();
    }

    cout << "\n\nSort by name:\n";
    mySort<Country>(arr, N, [](Country left, Country right) { return strcmp(left.name, right.name) > 0; });
    showTitle();
    for (int i = 0; i < N; i++) {
        arr[i].showTable();
    }

    cout << "===================================\n";
    //Вивести назви країн з визначеної частини світу. Частину світу задає користувач
    char text[50] = "";
    cout << "Input part of world: ";
    cin >> text;

    for (int i = 0; i < N; i++) {
        if (strcmp(arr[i].worldPart, text) == 0)
            cout << arr[i].name << endl;
    }

}  