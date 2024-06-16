#include <iostream>
#include <limits>

  // Lógica
void verify(int num) {
  if (num % 2 == 0) {
    std::cout << "\nNúmero PAR\n\n";
  } else
    std::cout << "\nNúmero ÍMPAR\n\n";
}

void clearConsole() { std::cout << "\033[2J\033[1;1H"; } // Só Funciona em Terminais Compatíveis

int main() {
  int num;
  std::cout << "DIGITE 000 PARA SAIR\n\n";
  while (1) {
    std::cout << "\n\nDigite um Número: ";
    std::cin >> num;

    //Mensagem de Erro caso dê Erro
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Operação inválida! Digite um Número.";
      continue;
    }
    if (num == 000) {
      clearConsole();
      std::cout << "Programa Finalizado...";
      break;
    }
    verify(num);
  }

  return 0;
}