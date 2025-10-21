package com.fatec.iniciandospring.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.fatec.iniciandospring.domain.User;
import com.fatec.iniciandospring.service.HelloWorldService;

@RestController
@RequestMapping("/helloworld")
public class HelloWorldController {

    @Autowired
    private HelloWorldService helloWorldService;

    // public HelloWorldController(HelloWorldService helloWorldService) {
    //     this.helloWorldService = helloWorldService;
    // }
    @GetMapping
    public String helloWorld() {
        return helloWorldService.helloworld("Caio");
    }

    @PostMapping("")
    public String helloWorldPost(@RequestBody User body) {
        return "Hello World " + body.getNome();
    }

    @PostMapping("/autenticar")
    public ResponseEntity<String> autenticar(@RequestBody User user) {
        if ("admin".equals(user.getNome()) && "teste@teste.com".equals(user.getEmail())) {
            return ResponseEntity.ok("Login OK");
        } else {
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED).body("Login Inválido");
        }

    }
}
