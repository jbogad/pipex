# 🛠️ Pipex 🔗

Welcome to my `pipex` project! Crafted as part of the 42 Madrid journey, this program simulates UNIX pipes with finesse.

---

## 🌟 Overview

`pipex` is a C program that mimics the behavior of UNIX pipes (`|`). It takes an input file, runs commands in a pipeline, and writes the result to an output file. Think of it as a mini shell that chains commands like a pro.

---

## ⚙️ How It Works

Here’s the magic behind my implementation:

| Component       | What It Does                  |
|-----------------|-------------------------------|
| Process Master  | Spawns child processes using `fork`. |
| Pipe Wizard     | Connects commands with `pipe`. |
| Redirector      | Manages input/output with `dup2`. |
| Executor        | Runs commands via `execve`.    |

---

## 🗺️ Roadmap

[Start] ---> [Open Files] ---> [Create Pipe] ---> [Fork Children] ---> [Execute Commands] ---> [Write Output]

- **Step 1**: Open input and output files.
- **Step 2**: Create a pipe to connect commands.
- **Step 3**: Fork to create child processes.
- **Step 4**: Redirect input/output and execute commands.

---

## 📊 Process Flow

Here’s how `pipex` handles processes and pipes:

📂 **Input File**: "data.txt"  
🔧 **Commands**: "cat | wc -l"  
✂️ **Pipe Flow**: Child 1 (`cat`) reads from `data.txt`, writes to pipe; Child 2 (`wc -l`) reads from pipe, writes to `output.txt`  
📖 **Output File**: "output.txt"

---

## 👨‍💻 Author

- **Name**: Javier Boga  
- **GitHub**: [jbogad](https://github.com/jbogad)  
- **linkedin**: [javierbogad](https://www.linkedin.com/in/javierboga/)

---
