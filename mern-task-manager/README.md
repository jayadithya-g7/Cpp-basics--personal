# MERN Task Manager

A simple Task Manager application built with the MERN stack (MongoDB, Express, React, Node.js).

## Prerequisites

*   Node.js installed on your machine.
*   MongoDB installed locally OR a MongoDB Atlas account.

## Setup Instructions

### 1. Backend Setup

1.  Navigate to the `server` directory:
    ```bash
    cd server
    ```
2.  Install dependencies:
    ```bash
    npm install
    ```
3.  Set up environment variables:
    *   Rename `.env.example` to `.env`.
    *   Update the `MONGO_URI` if you are using MongoDB Atlas or a different local instance.
    ```bash
    cp .env.example .env
    ```
4.  Start the server:
    ```bash
    npm start
    ```
    The server should run on `http://localhost:3001`.

### 2. Frontend Setup

1.  Open a new terminal and navigate to the `client` directory:
    ```bash
    cd client
    ```
2.  Install dependencies:
    ```bash
    npm install
    ```
3.  Start the development server:
    ```bash
    npm run dev
    ```
    The React app should run on `http://localhost:5173`.

## Features

*   View all tasks.
*   Add a new task.
*   Mark a task as complete/incomplete.
*   Delete a task.

## Technologies Used

*   **MongoDB**: Database
*   **Express**: Backend Framework
*   **React**: Frontend Library (setup with Vite)
*   **Node.js**: Runtime Environment
