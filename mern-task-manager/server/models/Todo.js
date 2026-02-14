const mongoose = require('mongoose');

const TodoSchema = new mongoose.Schema({
    text: {
        type: String,
        required: true
    },
    completed: {
        type: Boolean,
        default: false
    },
    timestamp: {
        type: String,
        default: Date.now // Changed from Date.now() to Date.now
    }
});

const Todo = mongoose.model("Todo", TodoSchema);

module.exports = Todo;
