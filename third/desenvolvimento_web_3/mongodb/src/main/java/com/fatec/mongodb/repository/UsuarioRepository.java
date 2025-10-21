package com.fatec.mongodb.repository;

import org.springframework.data.mongodb.repository.MongoRepository;

import com.fatec.mongodb.model.Usuario;

public interface UsuarioRepository extends MongoRepository<Usuario, Object> {

}
