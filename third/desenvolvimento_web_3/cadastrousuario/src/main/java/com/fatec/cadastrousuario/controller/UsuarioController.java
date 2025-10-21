package com.fatec.cadastrousuario.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

import com.fatec.cadastrousuario.service.UserService;

@Controller
@RequestMapping("/users")
public class UsuarioController {

    @Autowired
    private UserService userService;

    @GetMapping
    public String listarUsers(Model model) {
        model.addAttribute("users", userService.listarTodos());
        return "users";
    }

}
