/* ponto.h

	TAD Ponto: tipo abstrato de dado para representar um ponto no RxR.
	
	@author Rodrigo Laiola Guimaraes <rlaiola@inf.ufes.br>

*/

#include "ponto.h"
#include <math.h>

/* TAD: Ponto (x,y) */

// /* Tipo exportado */
// struct ponto {
// 	float x;
// 	float y;
// };
// typedef struct ponto Ponto;

/* Funcoes exportadas */

/* Funcao cria 
** Retorna um ponto com coordenadas (x,y)
*/
Ponto pto_cria (float x, float y){
	Ponto ponto;
	ponto.x = x;
	ponto.y = y;

	return ponto;
}

/* Funcao acessa x
** Retorna o valor da coordenada x de um ponto
*/
float pto_acessa_x (Ponto p){
	return p.x;
}

/* Funcao acessa y
** Retorna o valor da coordenada x de um ponto
*/
float pto_acessa_y (Ponto p){
	return p.y;
}

/* Funcao atribui x
** Atribui novo valor as coordenada x de um ponto
*/
Ponto pto_atribui_x (Ponto p, float x){
	p.x = x;
	return p;
}

/* Funcao atribui y
** Atribui novo valor as coordenada x de um ponto
*/
Ponto pto_atribui_y (Ponto p, float y){
	p.y = y;
	return p;
}

/* Funcao distancia
** Retorna a distancia entre dois pontos
*/
float pto_distancia (Ponto p1, Ponto p2){
	float dist;
	float cat1, cat2;
	cat1= pow(p1.x - p2.x, 2);
	cat2= pow(p1.y - p2.y, 2);

	printf ("cat 1:%f, cat 2: %f", cat1, cat2);
	dist = cat1+cat2;
	dist= sqrt (dist);
	return dist;
}
