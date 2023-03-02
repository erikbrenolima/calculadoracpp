#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // calculadora em c++
    // declarando variáveis que serão utilizadas o programa inteiro
    // menuopcao para selecionar menus e 2 variaveis de valor e uma de resultado
    int menuopcao;
    int x;
    int y;
    int z;
    //tela principal
    cout << "Bem vindo a sua calculadora em c++" << endl;
    cout << "selecione uma operacao" << endl;
    cout << "1 - adicao" << endl << "2 - subtracao" << endl;
    cout << "3 - divisao" << endl << "4 - multiplicacao" << endl;
    cout << ">> ";
    cin >> menuopcao;
    // o switch redireciona o usuario a operacao que ele quiser
    switch (menuopcao){

        case 1:
            // limpa a tela, dita qual operacao esta sendo feita e pede os valores
            // em seguida mostra o resultado e pergunta se quer operar novamente
            // isso se repete nos 4 cases
            system("cls");
            cout << "selecionado: adicao" << endl;
            cout << "digite o primeiro numero >>> ";
            cin >> x;
            cout << "digite o segundo >>> ";
            cin >> y;
            z = x + y;
            cout << "O resultado: " << x << " + " << y << " = " << z << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "deseja usar a calculadora novamente?" << endl
            << "1 - sim / 2 - nao" << endl << ">>> ";
            cin >> menuopcao;
            if (menuopcao == 1){
                system("cls");
                main();
            }else{ cout << "muito obrigada ate mais <3" << endl; }
        break;

        case 2:
            system("cls");
            cout << "selecionado: subtracao" << endl;
            cout << "digite o primeiro numero >>> ";
            cin >> x;
            cout << "digite o segundo >>> ";
            cin >> y;
            z = x - y;
            cout << "O resultado: " << x << " - " << y << " = " << z << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "deseja usar a calculadora novamente?" << endl
            << "1 - sim / 2 - nao" << endl << ">>> ";
            cin >> menuopcao;
            if (menuopcao == 1){
                system("cls");
                main();
            }else{ cout << "muito obrigada ate mais <3" << endl; }
        break;

        case 3:
            system("cls");
            cout << "selecionado: adicao" << endl;
            cout << "digite o primeiro numero >>> ";
            cin >> x;
            cout << "digite o segundo >>> ";
            cin >> y;
            z = x / y;
            cout << "O resultado: " << x << " dividido por " << y << " = " << z << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "deseja usar a calculadora novamente?" << endl
            << "1 - sim / 2 - nao" << endl << ">>> ";
            cin >> menuopcao;
            if (menuopcao == 1){
                system("cls");
                main();
            }else{ cout << "muito obrigada ate mais <3" << endl; }
        break;

        case 4:
            system("cls");
            cout << "selecionado: multiplicacao" << endl;
            cout << "digite o primeiro numero >>> ";
            cin >> x;
            cout << "digite o segundo >>> ";
            cin >> y;
            z = x * y;
            cout << "O resultado: " << x << " x " << y << " = " << z << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "deseja ver a tabuada de " << x << "?" << endl;
            cout << "1 - sim / 2 - nao" << endl << ">>> ";
            cin >> menuopcao;
            // if mostra a tabuada de x, o numero multiplicado por y
            if (menuopcao == 1){
                for (int i = 1; i <= 10; i++) {
                    cout << x << " x " << i << " = " << x * i << endl;
                    }
            }
            cout << "-----------------------------------------------------" << endl;
            cout << "deseja usar a calculadora novamente?" << endl;
            cout << "1 - sim / 2 - nao" << endl << ">>> ";
            cin >> menuopcao;
            if (menuopcao == 1){
                system("cls");
                main();
            }else{
                cout << "muito obrigada ate mais <3" << endl;
                }

        break;
        default:
            cout << "voce escolheu sair :( ate mais!";
    }
    return 0;
}
