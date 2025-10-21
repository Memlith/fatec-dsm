package com.fatec.iniciandospring.service;

import org.springframework.stereotype.Service;

@Service
public class HelloWorldService {

    public String helloworld(String nome) {
        return "Hello World" + nome;
    }
}
