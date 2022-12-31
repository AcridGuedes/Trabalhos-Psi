package com.company;


import javax.print.MultiDocPrintService;
import java.net.UnknownServiceException;
import java.nio.channels.ShutdownChannelGroupException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
    String pergunta1 = "Quanto custa uma m4a1-s no CS:GO?";
    String pergunta2 = "Qual é a cor do ceu?";
    String pergunta3 = "Qual é a cor do cavalo branco do napoleão?";
    int k = 0;
    int resposta1 = 2900;
    String resposta2 = "azul";
    String resposta3 = "Branco";

    Scanner scanner = new Scanner(System.in);
    System.out.println(pergunta1);
    int userInput = scanner.nextInt();
    if (userInput == resposta1){
        System.out.println("Parabéns acertaste! Proxima pergunta.");
        k++;
    }else{
        System.out.println("Erraste mongo.");
    }
    System.out.println(pergunta2);
    String userInput2 = scanner.next();
        if(userInput2.equals(resposta2) == true){
            System.out.println("Parabéns acertaste! Proxima pergunta.");
            k++;
        }else{
            System.out.println("Erraste mongo.");
        }
        System.out.println(pergunta3);
        userInput2 = scanner.next();
        if(userInput2.equals(resposta3) == true){
            System.out.println("Parabéns acertaste! Proxima pergunta.");
            k++;
        }else{
            System.out.println("Erraste mongo.");
        }
        System.out.println("Acabaram as perguntas.\n Tiveste " + k + " ponto/s no total.");
        if(k>=2){
            System.out.println("Ganhaste a trivia!");
        }else{
            System.out.println("Perdeste a trivia!");
        }

    }
}
