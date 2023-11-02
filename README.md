# GitHub Workshop Repository

Welcome to the GitHub Workshop repository!. This will be used for GDSC Alliance University and Universiti Kuala Lumpur GIT event. This repository is a comprehensive resource for learning and practicing Git, GitHub, and GitHub CLI. It also includes code examples in Java, Python, C, and web development.

## Table of Contents

1. [Introduction](#introduction)
2. [Getting Started with Git](#getting-started-with-git)
3. [Using GitHub](#using-github)
4. [GitHub CLI](#github-cli)
5. [Code Examples](#code-examples)
6. [Contributing](#contributing)
7. [License](#license)

## Introduction

This workshop provides a hands-on experience with version control using Git and collaboration on GitHub. It also covers the usage of GitHub CLI for command-line interactions with GitHub repositories. Whether you are new to version control or looking to expand your knowledge, this repository has you covered.

## Getting Started with Git

### 1. Install Git

If you haven't already, install Git on your computer. You can download it from the official Git website: [https://git-scm.com/](https://git-scm.com/).

### 2. Configure Git

Set up your Git identity with your name and email:

```bash
git config --global user.name "Your Name"
git config --global user.email "youremail@example.com"
```
### 3. Initialize a Git Repository
To start tracking changes in a project, navigate to the project directory and run:

```bash
git init
```
### 4. Basic Git Workflow
Use these fundamental Git commands for managing your codebase:

git add .: Stage your changes.
git commit -m "Your commit message": Commit your changes.
git push: Push your changes to a remote repository.
git pull: Fetch and merge changes from a remote repository.

## Using GitHub
### 1. Create a GitHub Account
If you don't have a GitHub account, sign up at https://github.com/.

### 2. Creating a GitHub Repository
You can create a new repository on GitHub by clicking the "+" icon on the top-right of your GitHub profile and selecting "New repository."

### 3. Connect Your Local Repository to GitHub
To link your local Git repository to the remote repository on GitHub, use:

```bash
git remote add origin https://github.com/yourusername/yourrepository.git
```

### 4. Pushing Commits to GitHub
You can push your local commits to GitHub using:

```bash
git push -u origin master
```
### 5. Collaborating on GitHub
You can collaborate with others on a GitHub project by forking a repository, creating branches, making changes, and submitting pull requests for review and merging.

## GitHub CLI
### 1. Install GitHub CLI
To install GitHub CLI, you can follow the installation instructions at https://cli.github.com/.

### 2. Basic GitHub CLI Usage
GitHub CLI allows you to interact with GitHub repositories from the command line. For example:

gh repo clone repository-url: Clone a GitHub repository.
eg:
```bash
gh repo clone https://github.com/imdewan/GitHub-Workshop-2023
```
gh issue create: Create a new issue on a GitHub repository.

gh pr create: Create a pull request.

gh pr list: List open pull requests on a repository.

#### Code Examples
The repository includes code examples in Java, Python, C, and web development. You can explore these examples to learn and practice programming in different languages and technologies.

Contributing
If you have any suggestions, improvements, or additional resources you'd like to contribute to this workshop, feel free to open a pull request.

License
This repository is available under the MIT License. You are free to use and modify the content as needed.

Happy coding!



