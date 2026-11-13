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

- `git init` initializes a repository in the current directory.
- `git init -b main` initializes it with `main` as the initial branch.

### What does cloning do?
It creates a local copy of an existing repository.
```bash
git clone <repository-url>
```

### What is the `.git` directory?
It stores repository metadata, configuration and history. Removing it removes Git tracking from that directory.

## 3. Git Configuration

### How do I set my name and email?
Git records an author name and email with commits.
```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

### How do I check the configuration?
```bash
git config --global --list
git config user.name
git config user.email
```

`--global` applies the setting to the current user's Git configuration. Without `--global`, the setting applies only to the current repository. These values identify commit authors; they do not authenticate a user to GitHub.

### How do I set `main` as the default branch for new repositories?
```bash
git config --global init.defaultBranch main
```
This affects repositories initialized in the future; it does not rename the current branch of an existing repository.

## 4. Working Directory, Staging and Commits

### What are the three main areas?
1. **Working directory:** Files currently being edited.
2. **Staging area:** Changes selected for the next commit.
3. **Repository:** Stores committed snapshots.

### How do I check repository status?
```bash
git status
```
It shows changed, untracked and staged files.

### What is staging?
Staging selects changes for the next commit.
```bash
git add file.cpp
git add .
```
- `git add file.cpp` stages the specified file.
- `git add .` stages changes under the current directory.

### What is a commit?
A commit records the staged changes in repository history.
```bash
git commit -m "Add initial implementation"
```
The `-m` option supplies the commit message directly.

### How do I remove a file from the staging area?
```bash
git restore --staged file.cpp
```
This unstages the file but keeps its changes in the working directory. It does not delete the file.

### How can I view commit history?
```bash
git log
git log --oneline
```
- `git log` displays detailed commit history.
- `git log --oneline` displays each commit in a compact, single-line format.

## 5. Ignoring Files and Empty Directories

### What is `.gitignore`?
`.gitignore` is a text file containing patterns for files and directories that Git should normally leave untracked.

Example `.gitignore`:
```gitignore
*.log
build/
.env
```
A file that is already tracked is not automatically untracked just because it is added to `.gitignore`.

### What is `.gitkeep`?
Git does not track empty directories. A commonly used convention is to place an empty file named `.gitkeep` inside a directory to make Git track that directory through the file.

Example:
```text
project/
└── empty-folder/
    └── .gitkeep
```
`.gitkeep` is a naming convention, not a special Git command or feature.

## 6. Inspecting Changes

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

## 7. Branching

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
To rename the currently checked-out branch to `main`, use:
```bash
git branch -M main
```
`-M` forces the rename if a branch with the target name already exists. Use it carefully.

### How do I switch branches?
```bash
git switch feature
```
The older alternative is `git checkout feature`.

### How do I create and switch to a branch in one command?
```bash
git switch -c feature
```

### How do I delete a branch?
```bash
git branch -d feature
```
This safely deletes a branch that has been merged. Use `git branch -D feature` only when you intentionally want to force-delete an unmerged branch.

## 8. HEAD

### What is HEAD?
`HEAD` is a reference to the currently checked-out commit, normally through the current branch. Switching branches moves HEAD to the selected branch.

### How can I inspect branch history?
```bash
git log --oneline
git log --oneline --all --graph
```
The graph view helps show relationships between branches and commits.

## 9. Merging

### What is merging?
Merging integrates changes from one branch into another.

### How do I merge a feature branch into main?
```bash
git switch main
git merge feature
```
The branch named `feature` is merged into the branch currently checked out (`main` in this example).

### What is a merge conflict?
A conflict occurs when Git cannot automatically combine changes, often because two branches changed the same part of a file.

### How do I resolve a conflict?
1. Open the file reported by Git.
2. Inspect the conflicting sections.
3. Decide the final content.
4. Remove conflict markers.
5. Save the file.
6. Stage the resolved file using `git add`.
7. Complete the merge commit if required.

Typical markers:
```text
<<<<<<< HEAD
Current branch content
=======
Incoming branch content
>>>>>>> feature
```

## 10. Stashing

### What is `git stash`?
It temporarily stores eligible uncommitted changes so I can switch branches or perform another task without committing them.

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
- `git stash pop` restores changes and removes the stash entry if the operation succeeds.

## 11. Tags

### What is a Git tag?
A tag is a named reference to a specific commit. Tags are commonly used to mark releases or important project versions.

### How do I create a lightweight tag?
```bash
git tag v1.0
```
A lightweight tag is simply a name pointing to a commit.

### How do I create an annotated tag?
```bash
git tag -a v1.0 -m "Version 1.0 release"
```
An annotated tag stores additional information, such as the tagger, date and message.

### How do I list tags?
```bash
git tag
```

## 12. Remote Repositories

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
It displays the remote names and their fetch and push URLs.

### How do I upload commits?
```bash
git push -u origin main
git push origin main
```
- `git push origin main` uploads the local `main` branch to the remote named `origin`.
- `-u` sets the upstream relationship, making later pushes and pulls on that branch simpler.

### What does fetch do?
It downloads remote updates without integrating them into the current branch.
```bash
git fetch origin
```

### What does pull do?
It fetches remote changes and integrates them into the current branch.
```bash
git pull
git pull origin main
```
The second form explicitly specifies the remote and branch.

| Fetch | Pull |
|---|---|
| Downloads updates | Downloads and integrates updates |
| Does not integrate changes into the current branch | Integrates changes into the current branch |
| Useful for inspecting updates first | Useful for updating a branch |

## 13. GitHub Collaboration

### What is forking?
Forking creates a copy of another user's repository under my GitHub account.

### What is cloning?
Cloning downloads a repository to my local computer.

### What is a pull request?
A pull request proposes changes to another branch or repository and allows review before merging.

## 14. Command Reference

| Command | Purpose |
|---|---|
| `git init` | Initialize a repository |
| `git init -b main` | Initialize with `main` as the initial branch |
| `git clone <url>` | Copy a remote repository locally |
| `git config --global user.name "Name"` | Set the global commit author name |
| `git config --global user.email "email"` | Set the global commit author email |
| `git config --global --list` | List global configuration |
| `git config --global init.defaultBranch main` | Set the default branch name for new repositories |
| `git status` | Check repository state |
| `git add <file>` | Stage a specified file |
| `git add .` | Stage changes under the current directory |
| `git restore --staged <file>` | Unstage a file without discarding its changes |
| `git commit -m "message"` | Record staged changes |
| `git log` | View detailed commit history |
| `git log --oneline` | View compact commit history |
| `git diff` | Inspect unstaged changes |
| `git diff --staged` | Inspect staged changes |
| `git show <commit-id>` | Inspect a commit |
| `git branch` | List local branches |
| `git branch <name>` | Create a branch |
| `git branch -m <old> <new>` | Rename a branch |
| `git branch -M <name>` | Force-rename the current branch |
| `git switch <name>` | Switch branches |
| `git switch -c <name>` | Create and switch to a branch |
| `git branch -d <name>` | Delete a merged branch safely |
| `git merge <name>` | Merge the named branch into the current branch |
| `git stash` | Temporarily save eligible uncommitted changes |
| `git stash list` | List saved stashes |
| `git stash apply` | Restore a stash and keep its entry |
| `git stash pop` | Restore a stash and remove its entry if successful |
| `git tag <name>` | Create a lightweight tag |
| `git tag -a <name> -m "message"` | Create an annotated tag |
| `git tag` | List tags |
| `git remote add origin <url>` | Add a remote repository |
| `git remote -v` | View remote URLs |
| `git push origin main` | Push the local `main` branch to `origin` |
| `git push -u origin main` | Push and set the upstream branch |
| `git fetch origin` | Download remote updates without integrating them |
| `git pull` | Fetch and integrate updates for the current upstream branch |
| `git pull origin main` | Fetch and integrate from `origin/main` |

**Note:** `.gitignore` and `.gitkeep` are filenames/conventions, not Git commands.

## 15. Practical Workflow

### Starting a new local repository
```bash
git init -b main
git status
git add .
git commit -m "Initial commit"
```

### Creating and merging a feature branch
```bash
git switch -c feature
# Make changes
git add .
git commit -m "Add feature"

git switch main
git merge feature
git branch -d feature
```

### Connecting to GitHub and pushing
```bash
git remote add origin <repository-url>
git push -u origin main
```

### Getting updates from GitHub
```bash
git pull
```

## Key Takeaways

- Git tracks changes and project history.
- GitHub hosts repositories and supports collaboration.
- Commits record staged changes.
- Branches support independent development.
- HEAD identifies the currently checked-out commit.
- Merging combines work from branches.
- Conflicts require manual resolution.
- Stash temporarily saves eligible uncommitted changes.
- Tags mark important commits, such as releases.
- Remotes connect local repositories to hosted repositories.

## References
- [Git documentation](https://git-scm.com/doc)
- [Pro Git book](https://git-scm.com/book/en/v2)
- [GitHub documentation](https://docs.github.com/)
- Class lecture slides and Git branching assignment.
