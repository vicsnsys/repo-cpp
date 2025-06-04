#include <iostream>

enum situacao {APROVADO, TRUNCADO, REPROVADO};

struct aluno {
	bool is_name;
	union {
		char nome[20];
		int matricula;
	} info;
	unsigned int codDisc;
	situacao sitDisc;
};


std::istream& operator>>(std::istream& is, aluno& temp);
void showDetails(aluno* temp);

int main() {

	int tam;
	std::cout << "Digite o tamanho do vetor: ";
	std::cin >> tam;

	aluno* vAluno = new aluno[tam];

	std::cin >> vAluno[0];

	showDetails(vAluno);

	delete[] vAluno;

	return 0;
}

std::istream& operator>>(std::istream& is, aluno& temp) {
	bool is_name;
	std::cout << "[0] - Adicionar Matricula\n[1] - Adicionar Nome\nDigite: ";
	is >> is_name;
	if (is_name != 0) {
		std::cout << "Nome: ";
		is >> temp.info.nome;
	}
	else {
		std::cout << "Matricula: ";
		is >> temp.info.matricula;
	}
	std::cout << "Codigo da Disciplina: ";
	is >> temp.codDisc;
	int sit;
	std::cout << "[0] - Aprovado\n[1] - Truncado\n[2] - Reprovado\nDigite: ";
	is >> sit;
	temp.is_name = is_name;

	if (sit == APROVADO) {
		temp.sitDisc = APROVADO;
	}
	else if (sit == TRUNCADO) {
		temp.sitDisc = TRUNCADO;
	}
	else if (sit == REPROVADO) {
		temp.sitDisc = REPROVADO;
	}
	return is;
}

void showDetails(aluno* temp) {
	if (temp->is_name != 0) {
		std::cout << temp->info.nome << "\n";
	}
	else if (temp->is_name == 0) {
		std::cout << temp->info.matricula << "\n";
	}
	std::cout << temp->codDisc << "\n";
	if (temp->sitDisc == APROVADO) {
		std::cout << "Aprovado" << "\n";
	}
	else if (temp->sitDisc == TRUNCADO) {
		std::cout << "Truncado" << "\n";
	}
	else if (temp->sitDisc == REPROVADO) {
		std::cout << "Reprovado" << "\n";
	}
}
