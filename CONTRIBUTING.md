# 🤝 Contribution Guidelines

We love that you're interested in making our 3-in-1 Educational Toy project better! Your contributions—whether code, documentation, or new science experiments—are welcome.

## ❓ How Can I Contribute?

There are many ways to contribute to this project:

1.  **Code (Arduino/Software):** Improve the stability, add new flight modes, or optimize the PID control loops.
2.  **Hardware/Design (CAD/Schematics):** Suggest improvements to the drone frame, car chassis, or boat hull design for better balance, durability, or ease of assembly.
3.  **Documentation/Science:** Enhance the README, expand the educational science explanations, or fix typos.
4.  **New Features:** Suggest and prototype a new sensor integration (like GPS) or an entirely new mode.

---

## 💻 Submitting Code Changes (Pull Requests)

Please follow these steps when submitting code or design changes:

1.  **Fork the Repository:** Create your own copy of the project on GitHub.
2.  **Create a Branch:** Create a new branch for your feature or fix. Use descriptive names like `feature/add-new-sensor` or `fix/yaw-drift-bug`.
    ```bash
    git checkout -b your-branch-name
    ```
3.  **Code Style:**
    * **Arduino/C++:** Keep code clean, comment frequently, and follow standard C++ conventions.
    * **Educational Content:** Use clear, concise, and kid-friendly language (like we have in the existing science sections).
4.  **Test Your Changes:** **This is critical.** Ensure your changes work in **all three modes** (Drone, Car, Boat) and do not introduce new instabilities.
5.  **Commit:** Write clear, concise commit messages explaining *what* you changed and *why*.
    ```bash
    git commit -m "feat: Added robust error handling for MPU6050 initialization."
    ```
6.  **Create a Pull Request (PR):** Submit your branch as a Pull Request to the main repository. In the PR description, clearly explain:
    * **The Problem:** What issue are you fixing or what feature are you adding?
    * **The Solution:** How did you implement the change (e.g., *“I updated the PID 'D' term calculation method.”*)
    * **Testing Notes:** Briefly state how you tested the change.

---

## 💡 Proposing New Ideas (Issues)

If you have a brilliant idea but don't have time to code it, or if you find a bug:

1.  Go to the **"Issues"** tab.
2.  Click **"New Issue."**
3.  **For Bugs:** Use the "Bug Report" template. Include steps to reproduce the issue (e.g., "Drone crashes when trying to roll left at full speed").
4.  **For Features/Enhancements:** Use the "Feature Request" template. Clearly explain the idea and why it would be valuable (e.g., "Add an ultrasonic sensor for obstacle avoidance, which would teach kids about echoes").

---

## 📝 Contribution Checklist (Before Submitting)

| Status | Item |
| :--- | :--- |
| **[ ]** | I have tested my code/design in **all relevant modes**. |
| **[ ]** | My code/markup adheres to the existing project style. |
| **[ ]** | My commits are atomic (one commit per logical change) and descriptive. |
| **[ ]** | I have updated the relevant **documentation** (like the science sections) if my change affects functionality. |

Thank you for contributing to the future of STEM education! 🤖🔬
