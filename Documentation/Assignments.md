# Practical Assignments

This document records practical topics associated with the course. It describes concepts and exercises; it does not claim that every listed exercise has been completed.

## 1. LaTeX Assignments

| Practical area | Concepts |
|---|---|
| First document | Document class and document environment |
| Sections | Headings and table of contents |
| Text formatting | Font size and text styles |
| Lists | Numbered and bulleted lists |
| Mathematics | Inline and displayed equations |
| Mathematical notation | Fractions, roots, symbols and matrices |
| Tables and figures | Tabular data and image insertion |
| Page design | Margins, colours and spacing |
| References | Citations, labels and cross-references |
| Presentations | Beamer frames and slides |

## 2. Doxygen Assignment

The practical involved documenting C++ source code and generating documentation.

Main learning points:
- Writing documentation comments.
- Documenting files and classes.
- Describing parameters and return values.
- Documenting enumerations.
- Configuring a Doxyfile.
- Generating HTML documentation.
- Producing LaTeX output for PDF generation.

Important commands:
```bash
doxygen -g
doxygen Doxyfile
```

## 3. Git Branching Assignment

The branching practical covers independent development using branches.

Concepts in the assignment:
- Inspecting the current `HEAD`.
- Creating and renaming a branch.
- Switching between branches.
- Committing changes on separate branches.
- Viewing branch history.
- Merging branches.
- Understanding and resolving merge conflicts.
- Deleting a branch after merging.
- Temporarily saving changes with `git stash`.

Commands used in the exercise:
```bash
git log --oneline
git branch
git branch fast
git branch -m fast parallel
git switch parallel
git status
git log --oneline --all --graph
git merge parallel
git branch -d parallel
git stash
```

**Status:** Update this section after performing and verifying the practical.

## 4. Learning Outcomes

The practical work connects classroom concepts with tasks such as:
- Preparing structured technical documents.
- Writing mathematical expressions in LaTeX.
- Generating documentation from C++ comments.
- Understanding source-code version control.
- Working with branches and commit history.
- Reviewing and organising documents for submission.

## 5. Updating This Record

For each practical, record:
1. Assignment or exercise name.
2. Main concepts learned.
3. Commands or tools used.
4. Important errors and their solutions.
5. Completion status.

Only mark an assignment complete after verifying the work and its output.
