#include <iostream>

unsigned short ligar_bit(unsigned short estado, int bit) {
	unsigned short mascara = 1 << bit;

	return estado | mascara;
}


unsigned short desligar_bit(unsigned short estado, int bit) {
	unsigned short mascara = ~(1 << bit);

	return estado & mascara;
}


bool testar_bit(unsigned short estado, int bit) {
	unsigned short mascara = 1 << bit;

	return estado & mascara;
}


unsigned short and_binario(unsigned short valor1, unsigned short valor2) {
	return valor1 & valor2;
}


unsigned short or_binario(unsigned short valor1, unsigned short valor2) {
	return valor1 | valor2;
}


unsigned short bits_baixos(unsigned short estado) {
	return estado & 255;
}


unsigned short bits_altos(unsigned short estado) {
	return estado & 65280;
}