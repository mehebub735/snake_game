# 🐍 Snake Game – CSE173 Group Project

## 📚 Course Information

**Course Code:** CSE173\
**Section:** 02\
**Project Group:** 4

**Group Members:**

- Raonok Matabber – 2523862642
- Labib [ID]
- Tanvir [ID]
- Tahsin [ID]
- Mehebub [ID]

---

## 🎮 Project Overview

This project is a simple version of the classic **Snake Game**, fully implemented in **C**, using only standard libraries and Windows console functions.\
The game demonstrates:

- Real-time keyboard input without blocking
- Basic use of structs (`gamestate`, `position`)
- Enums to manage directions
- Console-based rendering with ASCII graphics
- A game loop that updates continuously
- Modular design with separate functions (`setup()`, `draw()`, `input()`, `logic()`)

We are developing this collaboratively with **GitHub version control**, ensuring clear commit history, teamwork, and good coding practices.

---

## 🚀 Features

- ✅ Snake moves in four directions: W, A, S, D keys
- ✅ Detects collision with walls and ends the game
- 🔄 Random food spawning (in progress)
- 🔄 Score counter updates when food is eaten
- 🔄 Snake grows longer after eating food
- 🔄 Self-collision detection to end the game if the snake hits itself

---

## ⚙️ How to Run

1. **Clone this repository:**

   ```bash
   git clone https://github.com/yourusername/snake-game-project.git
   ```

2. **Navigate to the folder:**

   ```bash
   cd snake-game-project
   ```

3. **Compile the code:**

   ```bash
   gcc snake.c -o snake.exe
   ```

   *(Or use your preferred compiler/IDE.)*

4. **Run the game:**

   ```bash
   ./snake.exe
   ```

5. **Controls:**

   - `W` – Move Up
   - `A` – Move Left
   - `S` – Move Down
   - `D` – Move Right

---

## 🗂️ Project Structure

```plaintext
📁 Snake-Game-Project/
 ├── snake.c                # Main source code
 ├── README.md              # This file
 ├── requirements.txt       # (Optional)
 ├── /data                  # (Optional) for extra files
 ├── /support               # (Optional) for extra modules
 ├── /others
      ├── update_report.pdf # 2-page update report
      ├── final_report.pdf  # 8-page final report
      ├── presentation.pptx # Final presentation slides
      ├── demo_video.mp4    # 1-min screen-capture demo video
```

---

## 📸 Demo

We will upload a **1-minute screen recording** here showing the game running smoothly, with food spawning, snake growing, and score updating.

---

## 🤝 How to Contribute

This repository is a **group project**, so all members should:

- Work in **branches** if adding major features.
- Write clear **commit messages** (e.g., “Added food generation logic”, “Fixed wall collision bug”).
- Review each other’s code.
- Push regularly to avoid merge conflicts.
- Keep the `README.md` up to date with any new instructions.

---

## ⚖️ License & Academic Integrity

This project is for **educational purposes only** as part of CSE173 at North South University.\
All code has been written by the group members unless otherwise stated.\
Any external resources or tutorials have been properly cited to ensure no plagiarism.

---

## ✅ Acknowledgments

We thank **Mohammad Shifat-E-Rabbi** for his guidance as our course instructor.\
Special thanks to the open-source community and **OpenAI’s ChatGPT**, which supported us in drafting, debugging, and improving our project documentation.

---

## 📚 References

```
[1] M. Shifat-E-Rabbi, “Course Manual – Theory,” NSU, 2025.
[2] GeeksforGeeks, “Simple Snake Game in C,” https://www.geeksforgeeks.org/simple-snake-game-in-c/, accessed July 2025.
[3] OpenAI, “ChatGPT,” https://chat.openai.com, accessed July 2025.
[4] Microsoft Docs, “system function,” https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/system, accessed July 2025.
[5] W3Schools, “C Programming Language Tutorial,” https://www.w3schools.com/c/, accessed July 2025.
```

✅ *This README will be updated as we make further progress.*
