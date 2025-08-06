# 👋 Hello C

Welcome to the **Hello C** repository!

This repo will help you install C/C++ and write your first programs. Perfect for beginners!

---

## 🧰 What You’ll Need

- A text editor like [VS Code](https://code.visualstudio.com/)
- A C/C++ compiler:
  - **Windows**: MinGW-w64
  - **Mac**: Xcode Command Line Tools
  - **Linux**: GCC

---

## 🪟 Windows Installation Guide

### ✅ Step 1: Install MinGW-w64

- Go to [MinGW-w64 Downloads](https://www.mingw-w64.org/downloads/)
- Download the latest installer
- Use default settings during setup

🖼 Example image:  
![MinGW Setup](assets/mingw-install.png)

🎥 Example video:  
[![Install MinGW Video](https://img.youtube.com/vi/4d7RxZcT8kI/0.jpg)](https://www.youtube.com/watch?v=4d7RxZcT8kI)

---

### ✅ Step 2: Add MinGW to PATH

- Go to **System Properties → Advanced → Environment Variables**
- Edit the `Path` variable
- Add the path to the MinGW `bin` folder, e.g.:


🖼 Example image:  
![Set PATH](assets/set-path.png)

---

## 🍎 macOS Installation Guide

Open Terminal and run:

```bash
xcode-select --install
