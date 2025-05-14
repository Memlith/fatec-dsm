<?php

use App\Http\Controllers\ProfileController;
use App\Http\Controllers\TaskController;
use Illuminate\Support\Facades\Route;

Route::get('/', function () {
    return view('welcome');
});

Route::get('/dashboard', function () {
    return view('dashboard');
})->middleware(['auth', 'verified'])->name('dashboard');

Route::middleware('auth')->group(function () {
    Route::get('/profile', [ProfileController::class, 'edit'])->name('profile.edit');
    Route::patch('/profile', [ProfileController::class, 'update'])->name('profile.update');
    Route::delete('/profile', [ProfileController::class, 'destroy'])->name('profile.destroy');

    Route::get('/task/create', [TaskController::class, 'create'])->name('task.create');
    Route::post('/task/create', [TaskController::class, 'store'])->name('task.store');
    Route::get('/task', [TaskController::class, 'index'])->name('task.index');
    Route::delete('/task/{task}', [TaskController::class, 'destroy'])->name('task.destroy');
    Route::get('/task/{task}', [TaskController::class,'edit'])->name('task.edit');

    Route::patch('/task/{task}', [TaskController::class,'update'])->name('task.update');
});

require __DIR__ . '/auth.php';
