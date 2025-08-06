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


🎥 Example video:  
[![Install MinGW Video](https://img.youtube.com/vi/4d7RxZcT8kI/0.jpg)](https://www.youtube.com/watch?v=4d7RxZcT8kI)

---

### ✅ Step 2: Add MinGW to PATH

- Go to **System Properties → Advanced → Environment Variables**
- Edit the `Path` variable
- Add the path to the MinGW `bin` folder, e.g.:

🐧 Linux Installation Guide (Ubuntu/Debian)
Run these commands:

bash
Copy
Edit
sudo apt update
sudo apt install build-essential
Then check:

bash
Copy
Edit
gcc --version
💻 How to Compile and Run
For C:
bash
Copy
Edit
gcc hello.c -o hello
./hello
For C++:
bash
Copy
Edit
g++ hello.cpp -o hello
./hello
🖼 Example image:

🧪 Sample Programs
hello.c
c
Copy
Edit
#include <stdio.h>

int main() {
    printf("Hello, C world!\n");
    return 0;
}
hello.cpp
cpp
Copy
Edit
#include <iostream>

int main() {
    std::cout << "Hello, C++ world!" << std::endl;
    return 0;
}
📺 Video Tutorials
C Programming Full Course

C++ Programming Full Course

📁 Project Structure
arduino
Copy
Edit
Hello-C/
├── hello.c
├── hello.cpp
├── assets/
│   ├── mingw-install.png
│   ├── set-path.png
│   └── compile-run.png
└── README.md
🤝 Contributing
Want to improve this guide or add more examples? Fork the repo and send a pull request!

📜 License
This project is licensed under the MIT License.

yaml
Copy
Edit

---

### ✅ Next Steps for You:

1. **Create `README.md`** in your repo and paste this content.
2. **Create `assets/` folder** and add the images mentioned (or take screenshots yourself).
3. (Optional) Replace the YouTube video links with your own tutorial if you want.


---

## 🍎 macOS Installation Guide

Open Terminal and run:

```bash
xcode-select --install
