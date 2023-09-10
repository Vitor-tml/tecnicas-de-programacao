class Pessoa{
    public:
        int ano;
        int mes;
        int dia;
        int idade;

    Pessoa(int Cano, int Cmes, int Cdia)
    {
        ano = Cano;
        mes = Cmes;
        dia = Cdia;
        idade = -1;
    }

    void calculaIdade(int diaAtual, int mesAtual, int anoAtual)
    {
        ano = anoAtual - ano;
        mes = mesAtual - mes;
        dia = diaAtual - dia;

        if(dia < 0)
        {
            dia = 0;
            mes -= 1;
        }

        if(mes < 0)
        {
            mes = 0;
            ano -= 1;
        }
    }

    void mostraIdade()
    {
        printf("Fulaninho tem %d anos %d meses e %d dias de vida!:)\n", ano, mes, dia);
    }
};