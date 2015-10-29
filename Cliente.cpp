/*
 * Cliente.cpp
 *
 *  Created on: 13/10/2015
 *      Author: POS
 */

#include "Cliente.h"
#include <iostream>
#include <string>

using namespace std;

Cliente::Cliente(string Nome,unsigned long Nif)
{
	this->Nome=Nome;
	this->Nif=Nif;
}

string Cliente::getNome()const
{
	return Nome;
}

unsigned long  Cliente::getNif()const
{
	return Nif;
}


bool Cliente::operator < (const Cliente Cli)const
{
	if (Nome < Cli.getNome())
		return true;
	if(Nome == Cli.getNome())
	{
		if(Nif<Cli.getNif())
			return true;
		else
			return false;
	}
	else return false;

}
