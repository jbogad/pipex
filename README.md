<div align="center">
  <h1>🛠️ Pipex 🔗</h1>
  
<p><strong>Welcome to my Pipex project! 🚀</strong></p>
<p>Crafted as part of the 42 Madrid journey, this project is all about mastering the art of <strong>pipes</strong>, <strong>redirections</strong>, and <strong>process management</strong></p>
</div>

---

### 🌟 Overview

**Pipex** is a C program that mimics the behavior of shell pipes (`|`). It takes an input file, executes a series of commands, and writes the final output to an output file, chaining commands with pipes just like in a real shell. Think of it as a mini-shell that handles `cmd1 | cmd2` while managing file descriptors with finesse. 💡

---

### ⚙️ How It Works

Here’s the magic behind my implementation:

| **Component**     | **What It Does**                                      |
|-------------------|-------------------------------------------------------|
| 🖥️ **Parser**     | Reads and validates input arguments and commands.    |
| 🔗 **Pipe Master**| Creates pipes and sets up communication between processes. |
| 🛠️ **Process Wizard** | Forks processes to execute each command independently. |
| 📂 **FD Manager** | Redirects input/output using `dup2` for seamless flow. |
| 🛡️ **Error Guardian** | Handles errors like missing commands or file issues.   |

---

### 🗺️ Roadmap

🔹 **[START!]** --> [Parse Args] --> [Open Files] --> [Create Pipe] --> [Fork & Execute] --> [Redirect I/O] --> [Repeat for Cmd2] --> [Write to File] 🔹

- **Step 1:** Parse the arguments to extract commands, input, and output files. 📜
- **Step 2:** Open the input and output files with proper error handling. 📂
- **Step 3:** Create a pipe to connect the two commands. 🔗
- **Step 4:** Fork processes to execute each command, redirecting I/O with `dup2`. 🛠️
- **Step 5:** Execute the commands using `execve`, passing the output of the first to the second. ⚡
- **Step 6:** Write the final result to the output file and clean up. ✅

---

### 📂 Example Flow

- **Input Command:** `./pipex file1 "ls -l" "wc -l" file2` 🖥️
- **Input File (file1):** *(empty or with content, doesn’t matter for this example)* 📄
- **Cmd1 Output:** `dir   file1  file2  pipex` 📋
- **Cmd2 Output:** `4` 🔢
- **Output File (file2):** `4` 💾

---

<div align="center">
<p><i>✨ Built with 💻 and ☕ at 42 Madrid ✨</i></p>
</div>
