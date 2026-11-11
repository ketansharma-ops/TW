# Git and GitHub

## 1. Version Control

### What is version control?
Version control tracks file changes over time. It helps maintain history, compare versions and recover earlier work.

### Why is it useful?
- Tracks changes.
- Supports collaboration.
- Allows independent feature development.
- Helps recover earlier versions.

### What is Git?
Git is a distributed version control system. It maintains project history locally.

### What is GitHub?
GitHub is an online platform for hosting Git repositories and collaborating.

| Git | GitHub |
|---|---|
| Version control system | Hosting and collaboration platform |
| Works locally | Hosts remote repositories |
| Tracks project history | Supports sharing and pull requests |

## 2. Repositories

### What is a repository?
A repository is a project directory whose files and history are managed by Git.

### How do I initialize one?
```bash
git init
git init -b main
```

### What does cloning do?
It creates a local copy of an existing repository.
```bash
git clone <repository-url>
```

### What is the `.git` directory?
It stores repository metadata, configuration and history. Removing it removes Git tracking from that directory.

## 3. Working Directory, Staging and Commits

### What are the three main areas?
1. **Working directory:** Files currently being edited.
2. **Staging area:** Changes selected for the next commit.
3. **Repository:** Stores committed snapshots.

### How do I check repository status?
```bash
git status
```

### What is staging?
Staging selects changes for the next commit.
```bash
git add file.cpp
git add .
```

### What is a commit?
A commit records staged changes in repository history.
```bash
git commit -m "Add initial implementation"
```

### How can I view history?
```bash
git log
git log --oneline
```

`git add` stages changes; `git commit` records them.

## 4. Inspecting Changes

### How do I see unstaged changes?
```bash
git diff
```

### How do I see staged changes?
```bash
git diff --staged
```

### How do I inspect a commit?
```bash
git show <commit-id>
```

## 5. Branching

### What is a branch?
A branch is an independent line of development. It allows work on a feature or fix without immediately changing the main branch.

### Why are branches useful?
- Develop features independently.
- Fix bugs separately.
- Experiment without disturbing stable work.
- Combine work later through merging.

### How do I create and list branches?
```bash
git branch feature
git branch
```
The asterisk identifies the current branch.

### How do I rename a branch?
```bash
git branch -m old-name new-name
```

### How do I switch branches?
```bash
git switch feature
```
The older alternative is `git checkout feature`.

### How do I create and switch in one command?
```bash
git switch -c feature
```

## 6. HEAD

### What is HEAD?
`HEAD` is a reference to the currently checked-out commit, normally through the current branch. Switching branches moves HEAD to the selected branch.

### How can I inspect branch history?
```bash
git log --oneline
git log --oneline --all --graph
```
The graph view helps show relationships between branches and commits.

## 7. Merging

### What is merging?
Merging integrates changes from one branch into another.

### How do I merge a feature branch into main?
```bash
git switch main
git merge feature
```

### What is a merge conflict?
A conflict occurs when Git cannot automatically combine changes, often because two branches changed the same part of a file.

### How do I resolve a conflict?
1. Open the file reported by Git.
2. Inspect the conflicting sections.
3. Decide the final content.
4. Remove conflict markers.
5. Save the file.
6. Stage the resolved file.
7. Complete the merge commit if required.

Typical markers:
```text
<<<<<<< HEAD
Current branch content
=======
Incoming branch content
>>>>>>> feature
```

### How do I delete a merged branch?
```bash
git branch -d feature
```

## 8. Stashing

### What is `git stash`?
It temporarily stores uncommitted changes so I can switch branches or perform another task without committing them.

### How do I save and list stashes?
```bash
git stash
git stash list
```

### How do I restore a stash?
```bash
git stash apply
```

### What is the difference between apply and pop?
- `git stash apply` restores changes and keeps the stash entry.
- `git stash pop` restores changes and removes the entry if successful.

## 9. Remote Repositories

### What is a remote?
A remote is a reference to a repository hosted elsewhere, such as GitHub.

### How do I connect a local repository to GitHub?
```bash
git remote add origin <repository-url>
```
`origin` is the conventional remote name.

### How do I view remotes?
```bash
git remote -v
```

### How do I upload commits?
```bash
git push -u origin main
```
The `-u` option sets the upstream branch.

### What does fetch do?
It downloads remote updates without integrating them into the current branch.
```bash
git fetch origin
```

### What does pull do?
It fetches remote changes and integrates them into the current branch.
```bash
git pull origin main
```

| Fetch | Pull |
|---|---|
| Downloads updates | Downloads and integrates updates |
| Does not automatically merge | Integrates into current branch |
| Useful for inspecting first | Useful for updating a branch |

## 10. GitHub Collaboration

### What is forking?
Forking creates a copy of another user's repository under my GitHub account.

### What is cloning?
Cloning downloads a repository to my local computer.

### What is a pull request?
A pull request proposes changes to another branch or repository and allows review before merging.

## 11. Command Reference

| Command | Purpose |
|---|---|
| `git init` | Initialize repository |
| `git clone` | Copy remote repository locally |
| `git status` | Check repository state |
| `git add` | Stage changes |
| `git commit` | Record staged changes |
| `git log` | View history |
| `git diff` | Inspect changes |
| `git branch` | List branches |
| `git switch` | Switch branches |
| `git merge` | Merge branches |
| `git stash` | Temporarily save changes |
| `git remote -v` | View remotes |
| `git push` | Upload commits |
| `git pull` | Fetch and integrate |
| `git fetch` | Download remote updates |

## 12. Practical Workflow

```bash
git init -b main
git status
git add .
git commit -m "Initial commit"

git switch -c feature
# Make changes
git add .
git commit -m "Add feature"

git switch main
git merge feature
```

After connecting a remote:
```bash
git remote add origin <repository-url>
git push -u origin main
```

## Key Takeaways

- Git tracks changes and project history.
- GitHub hosts repositories and supports collaboration.
- Commits record staged changes.
- Branches support independent development.
- HEAD identifies the currently checked-out commit.
- Merging combines work from branches.
- Conflicts require manual resolution.
- Stash temporarily saves uncommitted work.

## References
- [Git documentation](https://git-scm.com/doc)
- [GitHub documentation](https://docs.github.com/)
- Class lecture slides and Git branching assignment.
