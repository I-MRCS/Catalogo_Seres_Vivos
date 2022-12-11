#include <iostream>
#include <vector>
#include <string>

using namespace std;

class moedas_tempo{
    protected:
        string  periodo;
        string  epoca;
    public:
        void setPeriodo(string periodo){
            this -> periodo = periodo;
        }
        void setEpoca(string epoca){
            this -> epoca = epoca;
        }
        void exibir() = 0;
};

class moedas_localidade{
    protected:
        int ano;
        string  pais;
        string  valor_facial;
    public:
        void setAno(int ano){
            this -> ano = ano;
        }
        void setPais(string pais){
            this -> pais = pais;
        }
        void setValor_facial(string valor_facial){
            this -> valor_facial = valor_facial;
        }
        void exibir() = 0;
};

class moedas_descricao{
    protected:
        string descricao;
    public:
        void setDescricao(string descricao){
            this -> descricao = descricao;
        }
        void exibir(){
            cout << "Moeda criada na época " << epoca <<
                    ", no período de " << periodo <<
                    ", em meados de " << ano <<
                    ", tendo como país origem " << pais <<
                    " tendo em vista o valor de " << valor_facial <<
                    " na sua criação." << endl;
        }
};

int main (){

    return 0;
}
