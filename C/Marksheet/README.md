# 🎓 Student Grade Tracker — C Language

> Built this during Week 1 of my coding comeback after a 2-year gap. It compiles. It runs. It works. I'm not crying you're crying. 😤

---

## 🤔 What even is this?

It's a digital marksheet. You know those sheets teachers fill out with student names and marks? Yeah. That. But in C. In a terminal. Way cooler.

You give it student names and their marks across 3 subjects and it:
- 📊 Calculates the average for each student
- ✅ Tells you if they passed or failed
- 🏆 Finds and announces the topper

Simple? Yes. But literally every concept I learned this week is packed in here — and I typed the whole thing from scratch. No copy paste. 💪

---

## 🖥️ Output

![Program Output](output.png)

---

## 🧠 Concepts Used

This isn't just a random project — it's a Week 1 capstone. Every concept from the week shows up here:

| Concept | Where it lives in the code |
|---|---|
| Variables & Data Types | `float` for marks, `int` for index tracking |
| Strings | `char names[3][50]` — 2D char array for student names |
| 1D Arrays | `float avg[students]` to store each student's average |
| 2D Arrays | `float marks[3][3]` — rows = students, columns = subjects |
| Loops | Nested `for` loops iterating through students and subjects |
| Functions | `avgcalc()` and `findtopper()` doing the real work |
| Conditionals | Pass/fail logic based on average |

---

## 🏗️ How it works (the smart parts)

Two functions do all the heavy lifting so `main()` stays clean:

**`avgcalc()`** — Loops through every student's marks row by row, sums them up, divides by number of subjects, and stores the result in the averages array. Simple math, clean logic.

**`findtopper()`** — Loops through averages, compares each one against the current best. Returns the *index* of the topper — not the name, not the score, the *index*. Why? Because one index gives you access to both the name AND the average. Efficient. 🧠

`main()` handles the display — loops through each student, prints their details, checks pass/fail, and drops the topper announcement at the end.

---

## 📁 Project Structure

```
📂 Student-Grade-Tracker
 ┣ 📄 marksheet.c    ← the whole program
 ┣ 📄 README.md      ← you're reading this
 ┗ 🖼️ output.png     ← proof that it works
```

---

## 🛠️ Built With

- C Language
- GCC Compiler
- VS Code
- Terminal that judges me every time there's an error
- Way too many missing semicolons before it worked 😅

---

## 🚀 How to Run

```bash
gcc marksheet.c -o marksheet
./marksheet
```

Windows (PowerShell):
```bash
gcc marksheet.c -o marksheet
.\marksheet
```

---

## 👨‍💻 About Me

**Keval Patel** — BCom student, Vadodara, Gujarat, India.

On a self-directed coding journey to break into Data Science and Data Analytics.
C and C++ are just the beginning. There's a long road ahead and I'm just getting started.

This is Week 1, Day 7. Watch this space. 🔥

---

*Built with zero Stack Overflow and maximum stubbornness.*
