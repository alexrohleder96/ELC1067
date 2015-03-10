#include <stdio.h>

// c = fgetc(file)
// if (c == "\n")
// feof(file)

void main (int argc, char ** argv) {

	int matriculas[50], i;
	char nomes[50][64], caracter;
	float n1, n2, media;

	FILE * alunos, notas;

	if (argc > 1) {
		printf("Você deve definir um nome de aluno como parâmetro."); return;
	}

	alunos = fopen("alunos.txt", "r");
	notas = fopen("notas.txt", "r");

	if (alunos == NULL || notas == NULL) {
		printf("Erro ao abrir um dos arquivos."); return;
	}

	fclose(alunos);
	fclose(notas);
}
