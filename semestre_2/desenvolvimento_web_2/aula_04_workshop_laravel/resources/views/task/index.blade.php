<x-app-layout>
    <x-slot name="header">
        <h2 class="font-semibold text-xl text-gray-800 dark:text-gray-200 leading-tight">
            {{ __('Tasks') }}
        </h2>
    </x-slot>
    <div class="pt-12 pl-12">
        <div class="">
            <div class="text-gray-900 dark:text-gray-100 ml-3">
                <a class="p-3 ml-3 bg-white dark:bg-gray-800 overflow-hidden shadow-sm sm:rounded-lg"
                    href="/task/create">Create
                    task</a>
            </div>
        </div>
    </div>
    <div class="py-12">
        <div class="max-w-7xl mx-auto sm:px-6 lg:px-8">
            <div class="bg-white dark:bg-gray-800 overflow-hidden shadow-sm sm:rounded-lg">
                <div class="p-6 text-gray-900 dark:text-gray-100">
                    <table class="table-auto border-collapse w-full">
                        <thead>
                            <tr>
                                <th class="px-4 py-2 text-left">ID</th>
                                <th class="px-4 py-2 text-left">Title</th>
                                <th class="px-4 py-2 text-left">Status</th>
                                <th class="px-4 py-2 text-left">Updated at</th>
                            </tr>
                        </thead>
                        <tbody class="bg-white dark:bg-gray-900 overflow-hidden shadow-sm sm:rounded-lg">
                            @foreach ($tasks as $task)
                                <tr>
                                    <td class="px-4 py-2">{{ $task->id }}</td>
                                    <td class="px-4 py-2">{{ $task->title }}</td>
                                    <td class="px-4 py-2">{{ $task->completed }}</td>
                                    <td class="px-4 py-2">{{ $task->updated_at }}</td>
                                    <td class="pl-12 py-2">
                                        <a class="py-2 px-3 bg-white dark:bg-gray-800 overflow-hidden shadow-sm sm:rounded-lg"
                                            href="{{ route('task.edit', $task) }}">Edit</a>
                                    <td class="py-2">
                                        <form method="POST" action="{{ route('task.destroy', $task) }}">
                                            @csrf
                                            @method('DELETE')
                                            <button
                                                class="py-2 px-3 bg-white dark:bg-red-900 overflow-hidden shadow-sm sm:rounded-lg"
                                                type="submit">Delete</button>
                                        </form>

                                    </td>
                                </tr>
                            @endforeach
                        </tbody>
                    </table>
                </div>
            </div>
        </div>
    </div>
</x-app-layout>
