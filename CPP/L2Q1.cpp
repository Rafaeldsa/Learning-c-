/* Criadora: Rosmânya Fonseca
Turma: 01
Matricula: 119111090
*/

#include <iostream>
#include <math.h>

using namespace std;

struct ponto
{
	float x, y;
};

class circulo
{
private:
	ponto centro;
	float raio;

public:
	circulo ();
	void set_centro (ponto);
	void set_raio (float);
	float calc_area ();
	float calc_circun ();
	void aumenta_raio (float);
	void imp_v_raio ();
	void imp_centro ();
	void imp_area ();
	float calc_dist (ponto);
	ponto getPonto();
};

int main (){
	
	circulo c1, c2;
	float porcentagem, raio;
	
	ponto aux_coord;
	cout<<endl<<"Insira o valor das coordenadas do centro 1 (x,y): "<<endl;
	cin>>aux_coord.x;
	cin>>aux_coord.y;
	
	c1.set_centro (aux_coord);
	cout<<endl<<"Valor do raio circulo 1: "<<endl;
	cin>>raio;
	c1.set_raio(raio);
	
	cout<<endl<<"Insira o valor das coordenadas do centro 2 (x,y): "<<endl;
	cin>>aux_coord.x;
	cin>>aux_coord.y;
	
	c2.set_centro (aux_coord);
	
	cout<<endl<<"Valor do raio circulo 2: "<<endl;
	cin>>raio;
	c2.set_raio(raio);
	
	
	cout<<endl<<"Areas: "<<endl;
	cout<<endl<<"Circulo 1: ";
	c1.imp_area();
	cout<<endl<<"Circulo 2: ";
	c2.imp_area();
	cout<<endl<<"Raios: "<<endl;
	cout<<endl<<"Circulo 1: ";
	c1.imp_v_raio();
	cout<<endl<<"Circulo 2: ";
	c2.imp_v_raio();
	cout<<endl<<"Centros: "<<endl;
	cout<<endl<<"Circulo 1: ";
	c1.imp_centro();
	cout<<endl<<"Circulo 2: ";
	c2.imp_centro();
	
	cout<<endl<<"Distancia do centro 1 para o centro 2: "<<c2.calc_dist(c1.getPonto())<<endl;
	
	cout<<endl<<"Digite uma porcentagem para aumentar o raio 1: "<<endl;
	cin>>porcentagem;
	c1.aumenta_raio (porcentagem);
	
	cout<<endl<<"Digite uma porcentagem para aumentar o raio 2: "<<endl;
	cin>>porcentagem;
	c2.aumenta_raio (porcentagem);
	
	
	
	cout<<endl<<"Novas areas: "<<endl;
	cout<<endl<<"Circulo 1: ";
	c1.imp_area();
	cout<<endl<<"Circulo 2: ";
	c2.imp_area();
	cout<<endl<<"Novas raios: "<<endl;
	cout<<endl<<"Circulo 1: ";
	c1.imp_v_raio();
	cout<<endl<<"Circulo 2: ";
	c2.imp_v_raio();
	cout<<endl<<"Novos centros: "<<endl;
	cout<<endl<<"Circulo 1: ";
	c1.imp_centro();
	cout<<endl<<"Circulo 2: ";
	c2.imp_centro();
	
	cout<<endl<<"Nova distancia do centro 1 para o centro 2: "<<c2.calc_dist(c1.getPonto())<<endl;
	return 0;
}

circulo::circulo (){
	centro.x = 0;
	centro.y = 0;
	raio = 0;
}

void circulo::set_centro(ponto centro){
	this->centro.x = centro.x;
	this->centro.y = centro.y;
}

void circulo:: set_raio (float raio){
	this->raio = raio;
}

float circulo::calc_area (){
	return 3.14*raio*raio;
}

float circulo::calc_circun(){
	return 2*3.14*raio;
}

void circulo::aumenta_raio(float porcentagem){
	raio = raio +(raio*porcentagem);
}

void circulo:: imp_v_raio (){
	cout<<endl<<"Raio: "<<raio<<"u.c."<<endl;
}

void circulo:: imp_centro (){
	cout<<endl<<"Centro: ("<<centro.x<<";"<<centro.y<<") u.c."<<endl;
}

void circulo:: imp_area (){
	cout<<endl<<"Area: "<<calc_area()<<"u.a."<<endl;
}

ponto circulo:: getPonto (){
	return centro;
}

float circulo:: calc_dist (ponto centro){
	return sqrt(pow(this-> centro.x-centro.x, 2)+(pow(this-> centro.y-centro.y, 2)));
}