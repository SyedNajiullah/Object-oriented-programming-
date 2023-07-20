#pragma once
#include<iostream>
#include<string>
using namespace std;
template<class T, class R, class E, class W, class Q> // int, string, char, double, boolean
class List{
private:
    T integer;
    R stringType;
    E character;
    W doubleType;
    Q booleanType;
public:
    List();
    ~List();
    List(T _integer, R _stringType, E _character, W _doubleType, Q _booleanType);
    // DISPALY
    void display() const;
    // SETTERS
    void setInteger(T _integer);
    void setStirng(R _stringType);
    void setCharacter(E _character);
    void setDouble(W _doubleType);
    void setBoolean(Q _booleanType);
    // GETTERS
    T getInteger() const;
    R getString() const;
    E getCharacter() const;
    W getDouble() const;
    Q getBoolean() const;

};
template<class T, class R, class E, class W, class Q>
List<T, R ,E , W, Q>::List(){
    integer = T();
    stringType = R();
    character = E();
    doubleType = W();
    booleanType = Q();
}
template<class T, class R, class E, class W, class Q>
List<T, R, E, W, Q>::~List(){
    integer = T();
    stringType = R();
    character = E();
    doubleType = W();
    booleanType = Q();
}
template<class T, class R, class E, class W, class Q>
List<T, R, E , W, Q>::List(T _integer, R _stringType, E _character, W _doubleType, Q _booleanType){
    integer = _integer;
    stringType = _stringType;
    character = _character;
    doubleType = _doubleType;
    booleanType = _booleanType;
}
template<class T, class R, class E, class W, class Q>
void List<T, R, E , W, Q>::display() const{
    cout << integer << " ";
    cout << stringType << " ";
    cout << character << " ";
    cout << doubleType << " ";
    if(booleanType == true){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}
template<class T, class R, class E, class W, class Q>
void List<T, R, E , W, Q>::setInteger(T _integer){
    integer = _integer;
}
template<class T, class R, class E, class W, class Q>
void List<T, R, E , W, Q>::setStirng(R _stringType){
    stringType = _stringType;
}
template<class T, class R, class E, class W, class Q>
void List<T, R, E , W, Q>::setCharacter(E _character){
    character = _character;
}
template<class T, class R, class E, class W, class Q>    
void List<T, R, E , W, Q>::setDouble(W _doubleType){
    doubleType = _doubleType;
}
template<class T, class R, class E, class W, class Q>
void List<T, R, E , W, Q>::setBoolean(Q _booleanType){
    booleanType = _booleanType;
}
template<class T, class R, class E, class W, class Q>
T List<T, R, E , W, Q>::getInteger() const{
    return integer;
}
template<class T, class R, class E, class W, class Q>
R List<T, R, E , W, Q>::getString() const{
    return stringType;
}
template<class T, class R, class E, class W, class Q>
E List<T, R, E , W, Q>::getCharacter() const{
    return character;
}
template<class T, class R, class E, class W, class Q>
W List<T, R, E , W, Q>::getDouble() const{
    return doubleType;
}
template<class T, class R, class E, class W, class Q>
Q List<T, R, E , W, Q>::getBoolean() const{
    return booleanType;
}