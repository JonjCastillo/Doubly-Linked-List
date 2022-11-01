#ifndef CLIENTTYPE_HPP
#define CLIENTTYPE_HPP


#include <string>
#include <iostream>
using namespace std;

enum RelationType { LESS, GREATER, EQUAL };

class ClientType {
   private:
      
      int id;
      string name;
      double balance;

      //mutators

      
   public:
      ClientType();
      ClientType(int id, string name, double balance);

      //accessors
      int getID() const;
      string getName() const;
      double getBalance() const;
      void setName(string name);
      void setBalance(double balance);
      RelationType ComparedTo(ClientType* item);



};

ClientType::ClientType(int id, string name, double balance) {
   this->id = id;
   this->name = name;
   this->balance = balance;
}

ClientType::ClientType() {
   this->id = 0;
   this->name = "";
   this->balance = 0.0;
}

int ClientType::getID() const{
   return id;
}

string ClientType::getName() const{
   return name;
}

double ClientType::getBalance() const{
   return balance;
}

void ClientType::setName(string name) {
   this->name = name;
}

void ClientType::setBalance(double balance) {
   this->balance = balance;
}


RelationType ClientType::ComparedTo(ClientType* item) {
   if (
      this->getID() == item->getID() &&
      this->getBalance() == item->getBalance() &&
      this->getName() == item->getName()
   ) {
      return EQUAL;
   } else if ( this->getID() > item->getID() ) {
      return GREATER;
   } 

   return LESS;
}

#endif

