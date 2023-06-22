#include "CD.h"
#include <iostream>


CD::CD(){
}

/* Herança */
CD::CD(int cod, const string& des, float val) : Produto(cod, des, val){

}


CD::~CD(){

}
