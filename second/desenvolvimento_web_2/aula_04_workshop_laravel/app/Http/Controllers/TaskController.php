<?php

namespace App\Http\Controllers;

use App\Models\Task;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Auth;

class TaskController extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index()
    {
        $user = Auth::user();
        $tasks = Task::all();
        return view("task.index", compact('tasks'));
    }

    /**
     * Show the form for creating a new resource.
     */
    public function create()
    {
        return view('task.create');
    }

    /**
     * Store a newly created resource in storage.
     */
    public function store(Request $request)
    {
        $data = $request->all();
        $user = Auth::user();
        $data['user_id'] = $user->id;
        Task::create($data);
        return redirect()->route('task.index');
    }

    /**
     * Display the specified resource.
     */
    public function show(string $id)
    {
        //
    }

    /**
     * Validates user access
     */
    private function validaAcesso(Task $task)
    {
        $user = Auth::user();
        if ($task->user_id != $user->id)
        {
            return false;
        }
        return true;
    }
    /**
     *
     * Show the form for editing the specified resource.
     */
    public function edit(Task $task)
    {
        if(!$this->validaAcesso($task)){
            return redirect()->route('task.index');
        }
        return view('task.edit', compact('task'));
    }

    /**
     * Update the specified resource in storage.
     */
    public function update(Request $request, Task $task)
    {
        if(!$this->validaAcesso($task)){
            return redirect()->route('task.index');
        }
        $data = $request->all();
        $task->update($data);
        return redirect()->route('task.index');
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(Task $task)
    {
        if(!$this->validaAcesso($task)){
            return redirect()->route('task.index');
        }
        $task->delete();
        return redirect()->route('task.index');
    }
}
