#pragma once
using namespace std;
class Persoon(){
	private:
		string naam;
		int leeftijd;

	public:
		Persoon(string name, int age);
		void getName();
		void getAge();

	class Persoon::Student(){
		private:
			float studieschuld;
		
		public:
			Student(float debt);
			void printDebt();
	}
	
	class Persoon::Docent(){
		private:
			float klotesalaris;
		
		public:
			Docent(float shittySalary);
			void printShittySalary();
	}

}