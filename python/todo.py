tasks = []

while True:
    print("Options:")
    print("Enter 'add' to add a task")
    print("Enter 'list' to list tasks")
    print("Enter 'remove' to remove a task")
    print("Enter 'quit' to quit the program")

    choice = input(": ")

    if choice == "quit":
        break
    elif choice == "add":
        task = input("Enter a task: ")
        tasks.append(task)
        print("Task added.")
    elif choice == "list":
        for i, task in enumerate(tasks, 1):
            print(f"{i}. {task}")
    elif choice == "remove":
        task_number = int(input("Enter the task number to remove: "))
        if 1 <= task_number <= len(tasks):
            removed_task = tasks.pop(task_number - 1)
            print(f"Removed: {removed_task}")
        else:
            print("Invalid task number. No task removed.")
    else:
        print("Invalid input.")
