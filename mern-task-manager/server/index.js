const express = require('express');
const mongoose = require('mongoose');
const cors = require('cors');
const dotenv = require('dotenv');
const { MongoMemoryServer } = require('mongodb-memory-server');
const Todo = require('./models/Todo');

dotenv.config();

const app = express();

app.use(express.json());
app.use(cors());

// Connect to MongoDB
const connectDB = async () => {
    const mongo_base_uri = process.env.MONGO_URI || "mongodb://127.0.0.1:27017/mern-todo";

    try {
        await mongoose.connect(mongo_base_uri);
        console.log("Connected to MongoDB");
    } catch (err) {
        console.log("Failed to connect to local MongoDB. Attempting to start in-memory database...");
        try {
            const mongod = await MongoMemoryServer.create();
            const uri = mongod.getUri();
            await mongoose.connect(uri);
            console.log("Connected to In-Memory MongoDB at", uri);
        } catch (memErr) {
            console.error("Failed to connect to in-memory database:", memErr);
        }
    }
};

connectDB();

// Routes

// Get all todos
app.get('/todos', async (req, res) => {
    const todos = await Todo.find();
    res.json(todos);
});

// Create a new todo
app.post('/todos', async (req, res) => {
    const todo = new Todo({
        text: req.body.text
    });

    await todo.save();

    res.json(todo);
});

// Delete a todo
app.delete('/todos/:id', async (req, res) => {
    const result = await Todo.findByIdAndDelete(req.params.id);
    res.json(result);
});

// Toggle todo completion
app.put('/todos/complete/:id', async (req, res) => {
    const todo = await Todo.findById(req.params.id);

    if (todo) {
        todo.completed = !todo.completed;
        await todo.save();
        res.json(todo);
    } else {
        res.status(404).json({ error: "Todo not found" });
    }
});

const PORT = process.env.PORT || 3001;
app.listen(PORT, () => console.log(`Server started on port ${PORT}`));
