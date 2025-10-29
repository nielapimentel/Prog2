#include "ponto.h"
#include <stdio.h>
#include <math.h>

/* Tipo exportado */
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
	Ponto p;
	p.x = x;
	p.y = y;

	return p;
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
	float distX=0, distY=0, dist=0;

	distX = pow((p1.x - p2.x), 2);
	distY = pow ((p1.y - p2.y), 2);
	
	dist = sqrt(distX + distY);
	
	return dist;
}
