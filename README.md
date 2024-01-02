# Binary tree

A binary tree is a hierarchical data structure composed of nodes, where each node has at most two children, referred to as the left child and the right child. The topmost node is called the root, and nodes with no children are called leaves. The arrangement of nodes in a binary tree follows the principle that each node's left child is less than or equal to the node, and the right child is greater than or equal to the node in the context of Binary Search Trees (BSTs). Binary trees are widely used in computer science for various applications, including searching, sorting, and hierarchical representation of data.

At the end of this project, I expect to explain the following concepts without using Google:

## General

- What is a binary tree
- The difference between a binary tree and a Binary Search Tree
- Possible gain in time complexity compared to linked lists
- Depth, height, and size of a binary tree
- Different traversal methods for a binary tree
- Complete, full, perfect, and balanced binary trees

## Copyright - Plagiarism

- I am tasked to create solutions for the tasks to meet the learning objectives.
- Avoid copying and pasting someone else’s work.
- No publishing of project content.
- Strictly prohibit any form of plagiarism, leading to removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Files should end with a new line
- Mandatory README.md file at the root of the project folder
- Code should follow the Betty style, checked using betty-style.pl and betty-doc.pl
- No global variables allowed
- Maximum of 5 functions per file
- Standard library usage allowed
- Prototypes of all functions included in the header file binary_trees.h
- Push the header file and include guards for all header files

### GitHub

- One project repository made by myself alone

## More Info

### Data structures

Use the following data structures and types for binary trees. Include them in the header file.

#### Basic Binary Tree

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

# 0x1C.c

Functions to print binary trees in a pretty way

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```

[Original code](Original code from http://stackoverflow.com/a/13755911/5184480)
