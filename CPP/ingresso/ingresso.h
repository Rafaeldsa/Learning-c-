#ifndef INGRESSO_H
#define INGRESSO_H
#include <iostream>
#include <string>
using namespace std;

class ingresso
{
protected:
	float valor_ingresso;

public:
	void set_ingresso (float);
	float get_ingresso ();
	void exibe_dados ();
};

class normal: public ingresso
{

public:
	void exibe_dados();
};

class vip: public ingresso
{
protected:
	float valor_vip;
public:
	void set_vip (float);
	float get_vip ();
	void exibe_dados(float);
};

class camarote_inferior: public vip
{
private:
	string localizacao;
public:
	camarote_inferior (string = " ");
	void set_localizacao (string);
	string get_localizacao ();
	void exibe_dados();
};

class camarote_superior: public vip
{
private:
	float valor_camarote;
public:
	void set_camarote (float);
	float get_camarote ();
	void exibe_dados(float, float);
};



#endif
