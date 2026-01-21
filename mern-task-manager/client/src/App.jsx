import { useState, useEffect } from 'react';

// Use relative path to leverage Vite proxy
const API_BASE = "";

function App() {
    const [todos, setTodos] = useState([]);
    const [popupActive, setPopupActive] = useState(false);
    const [newTodo, setNewTodo] = useState("");

    useEffect(() => {
        GetTodos();
    }, []);

    const GetTodos = () => {
        fetch(API_BASE + "/todos")
            .then(res => res.json())
            .then(data => setTodos(data))
            .catch(err => console.error("Error fetching todos:", err));
    }

    const completeTodo = async id => {
        const data = await fetch(API_BASE + "/todos/complete/" + id, { method: "PUT" })
            .then(res => res.json());

        setTodos(todos => todos.map(todo => {
            if (data && todo._id === data._id) {
                todo.completed = data.completed;
            }
            return todo;
        }));
    }

    const deleteTodo = async id => {
        const data = await fetch(API_BASE + "/todos/" + id, { method: "DELETE" })
            .then(res => res.json());

        if (data && data._id) {
            setTodos(todos => todos.filter(todo => todo._id !== data._id));
        } else {
             // Fallback if data is null or doesn't contain _id (e.g. just a success message or null)
             // In this specific backend implementation, it returns the deleted doc.
             // If backend returned { success: true }, we would filter by id passed to function.
             // For safety, we can filter by the id passed in argument if data confirms deletion.
             // But sticking to the current logic with a check:
             setTodos(todos => todos.filter(todo => todo._id !== id));
        }
    }

    const addTodo = async () => {
        const data = await fetch(API_BASE + "/todos", {
            method: "POST",
            headers: {
                "Content-Type": "application/json"
            },
            body: JSON.stringify({
                text: newTodo
            })
        }).then(res => res.json());

        setTodos([...todos, data]);
        setPopupActive(false);
        setNewTodo("");
    }

    return (
        <div className="App">
            <h1>Welcome, User</h1>
            <h4>Your Tasks</h4>

            <div className="todos">
                {todos.map(todo => (
                    <div className={
                        "todo " + (todo.completed ? "is-complete" : "")
                    } key={todo._id} onClick={() => completeTodo(todo._id)}>
                        <div className="checkbox"></div>
                        <div className="text">{todo.text}</div>
                        <div className="delete-todo" onClick={(e) => { e.stopPropagation(); deleteTodo(todo._id) }}>x</div>
                    </div>
                ))}
            </div>

            <div className="addPopup" onClick={() => setPopupActive(true)}>+</div>

            {popupActive ? (
                <div className="popup">
                    <div className="closePopup" onClick={() => setPopupActive(false)}>x</div>
                    <div className="content">
                        <h3>Add Task</h3>
                        <input
                            type="text"
                            className="add-todo-input"
                            onChange={e => setNewTodo(e.target.value)}
                            value={newTodo} />
                        <div className="button" onClick={addTodo}>Create Task</div>
                    </div>
                </div>
            ) : ''}
        </div>
    );
}

export default App;
