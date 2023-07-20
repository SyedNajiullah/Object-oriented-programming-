#include"List.h"

int main(){

    List<int, string, char, double, bool> list;

    list.setInteger(500);
    list.setStirng("Najiullah");
    list.setCharacter('A');
    list.setDouble(3.9);
    list.setBoolean(true);

    cout << list.getInteger() << endl;
    cout << list.getString() << endl;
    cout << list.getCharacter() << endl;
    cout << list.getDouble() << endl;
    if (list.getBoolean() == true){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    return 0;
}