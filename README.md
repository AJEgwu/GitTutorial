# 🧠 MTC GitHub Tutorial — Hello \[name\]!

Welcome to the **Morehouse Tech Collective GitHub Tutorial Project!**  
This activity will teach you the basics of Git and GitHub by having you:
- Clone a public repository  
- Edit code and commit changes  
- Create your own branch  
- Submit a **Pull Request (PR)** to contribute your version  

---

## 📁 Project Structure
```

hello_aren/
├── main.cpp      # Source code (defines your name and color)
├── colors.h      # Header file with all color constants
└── README.md     # This documentation file

````

---

## 🚀 Getting Started

### 1️⃣ Clone the Repository

Clone Aren’s original repo to your local computer:
```bash
git clone https://github.com/AJEgwu/GitTutorial.git
cd GitTutorial
````

---

### 2️⃣ Create Your Own Branch

Make a new branch named after **your own name**:

```bash
git checkout -b your-name
```

🧠 *Example:*

```bash
git checkout -b aren-egwuekwe
```

---

### 3️⃣ Customize the Program

Open **main.cpp** and edit these constants near the top:

```cpp
const std::string NAME  = "Aren";  // <-- Change this to your name
const std::string COLOR = RED;     // <-- Change this to another color if you'd like
```

✅ The available colors are defined in **colors.h** (RED, GREEN, BLUE, YELLOW, etc.).

---

### 4️⃣ Compile the Program

```bash
g++ main.cpp -o hello
```

---

### 5️⃣ Run the Program

```bash
./hello
```

You should see your personalized output, for example:

```
Hello Jordan!
```

(in the color you selected)

---

### 6️⃣ Stage and Commit Your Changes

```bash
git add .
git commit -m "Updated name and color to [Your Name]"
```

🧠 *Example:*

```bash
git commit -m "Updated name and color to Jordan Brown"
```

---

### 7️⃣ Push Your Branch to GitHub

```bash
git push origin your-name
```

🧠 *Example:*

```bash
git push origin aren-egwuekwe
```

---

### 8️⃣ Make a Pull Request (PR)

1. Go to the original repo on GitHub:
   👉 [https://github.com/AJEgwu/GitTutorial/](https://github.com/AJEgwu/GitTutorial/)

2. You’ll see a message suggesting you **compare & pull request** your branch.
   Click **“Compare & pull request.”**

3. Add a short message like:

   > “Added my name and color for the MTC Git Tutorial.”

4. Click **“Create pull request.”**

✅ Once approved, your contribution will appear in the main repo!

---

## 🌈 Color Options (from `colors.h`)

| Constant  | Color | Example                    |
| --------- | ----- | -------------------------- |
| `RED`     | 🔴    | `"Hello [Name]!"`          |
| `GREEN`   | 🟢    | `"Hello [Name]!"`          |
| `BLUE`    | 🔵    | `"Hello [Name]!"`          |
| `YELLOW`  | 🟡    | `"Hello [Name]!"`          |
| `MAGENTA` | 🟣    | `"Hello [Name]!"`          |
| `CYAN`    | 🟦    | `"Hello [Name]!"`          |
| `WHITE`   | ⚪     | `"Hello [Name]!"`          |
| `RESET`   | ⚫     | Restores normal text color |

---

## 💡 Summary of Git Commands

| Step | Command                                               | Purpose             |
| ---- | ----------------------------------------------------- | ------------------- |
| 1️⃣  | `git clone https://github.com/AJEgwu/GitTutorial.git` | Clone the repo      |
| 2️⃣  | `git checkout -b your-name`                           | Create your branch  |
| 3️⃣  | `git add .`                                           | Stage changes       |
| 4️⃣  | `git commit -m "message"`                             | Save changes        |
| 5️⃣  | `git push origin your-name`                           | Push to GitHub      |
| 6️⃣  | *(On GitHub)*                                         | Create Pull Request |

---

## 🎯 Objective

This exercise helps you:

* Learn the **Git workflow** (clone → branch → commit → push → pull request)
* Practice making meaningful commits
* Understand how to contribute to a shared repository

---

**Created for the Morehouse Tech Collective GitHub Workshop**
🖥️ *Instructor: Aren Egwuekwe*
🔗 [https://github.com/AJEgwu/GitTutorial/](https://github.com/AJEgwu/GitTutorial/)
