#pragma once
#include <Project2Header.h>
using namespace std;
	
Persoon::Persoon(string name, int age){
	naam = name;
	leeftijd = age;
}

Persoon::getName(){
	return naam;
}

Persoon::getAge() {
	return leeftijd;
}

Persoon::Student::Student(float debt) {
	studieschuld = debt;
}

void Persoon::Student::printDebt() {
	cout << studieschuld;
}

Persoon::Docent::Docent(float shittySalary) {
	klotesalaris = shittySalary;
}

void Persoon::Docent::printShittySalary() {
	cout << klotesalaris;
}

int main(){





	return 0;
}