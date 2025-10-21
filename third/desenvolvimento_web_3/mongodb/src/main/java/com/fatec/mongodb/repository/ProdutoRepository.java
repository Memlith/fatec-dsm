package com.fatec.mongodb.repository;

import org.springframework.data.mongodb.repository.MongoRepository;

import com.fatec.mongodb.model.Produto;

public interface ProdutoRepository extends MongoRepository<Produto, Object> {

}
