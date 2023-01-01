package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int k = 0;
        int cont = 0;

        String[] perguntas = new String[5];
        perguntas[0] = "Merecias ser banido?";
        perguntas[1] = "Vais ser desbanido?";
        perguntas[2] = "Vais conseguir jogar alguma vez sem vpn?";
        perguntas[3] = "Quanto custa um ferrari?";
        perguntas[4] = "O BigBrother é uma reality show boa?";

        String[] respostas = new String[5];
        respostas[0] = "sim";
        respostas[1] = "nao";
        respostas[2] = "nao";
        respostas[3] = "nao sei";
        respostas[4] = "sim";

      for(int i = 0; i < perguntas.length; i++){
          displayPerguntas(i, perguntas);
          Scanner scanner = new Scanner(System.in);
          String input = scanner.next();
          if(input.equals(respostas[cont])){
              System.out.println("Resposta Correta!");
              k++;
          }else{
              System.out.println("Resposta Errada");
          }
          cont++;
      }
    if(k>=3){
        System.out.println("Parabéns ganhaste, com o total de " + k + " pontos!");
    }else{
        System.out.println("Parabéns perdeste, com o total de " + k + "pontos!");
    }


     }

        public static void displayPerguntas(int i, String[] perguntas){
                System.out.println(perguntas[i]);
     }

}
