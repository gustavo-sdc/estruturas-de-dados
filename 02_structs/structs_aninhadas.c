struct Paciente {
    char nome[50];
    int idade;
    char telefone[15];
};

struct Atendimento {
    char data[8];
    struct Paciente;
};