Model - App/Models
Controller - App/Http/Controllers
View - resources/views
Migrations - database/migration

1. php artisan make:model m Task
2. editar o migrate
3. php artisan migrate
4. editar model ($fillable)
5. php artisan make:controller -r TaskController
   (Controller com as funcs index, create, store, edit, update, delete)
6. Ajustar func() create (view = task.create)
7. criar pasta task > create.blade.php
8. ajustar form
9.

=====================================================

1.

====================================================

1. Ajustar o Controller index() para devolver as tasks Task::All()
2. Criar a view index.blade.php
3. Ajustar routes/web.php
4.
5. Adicionar Task:delete no TaskController
