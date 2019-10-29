#ifndef TELEVISAO_H
#define TELEVISAO_H

class televisao
{
private:
	int canal;
	int volume;
public:
	televisao();
	void set_controlar_volume(int);
	void set_controlar_canal(int);
	int set_mudar_canal(int);
	int get_consultar_canal();
	int get_consultar_volume();
};

#endif
