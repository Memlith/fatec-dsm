select nome_medico, nome_paciente, data_consulta from medico, paciente, consulta where medico.id_medico=consulta.id_medico and paciente.id_paciente=consulta.id_paciente
