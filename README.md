### ⚡ DIN ⚡ 

---

din is a ⚡ blazing-fast C++ project manager and build tool designed for indie developers and minimalists. With commands like din start, din run, and din new class, it helps you generate modern CMake-based projects in seconds 🚀. No bloated configs, no external dependencies—just clean, organized code and simple library management via din.json and modules/ 📦. Whether you're building a CLI, game, or tool, din keeps your workflow sharp, light, and developer-friendly

### Commands Implemented

### ↳ `din start` 

This command initializes a new C++ project structure with `CMake`, `din.json`, and a ready-to-edit `main.cpp`

```bash
din start
↳ 〔 ✾ Names ✾ 〕: myapp
↳ 〔 ✍  Description 〕: a simple app for C++
↳ 〔 ♡ Author ♡ 〕: yourName
↳ 〔 ❖ License ❖ 〕: MIT

✠ Directory "/home/$user/Desktop/din/build/myapp" created ✠
✠ Directory "/home/$user/Desktop/din/build/myapp/modules" created ✠
✠ File /home/$user/Desktop/din/build/myapp/din.json created. ✠
✠ File /home/$user/Desktop/din/build/myapp/main.cpp created. ✠
✠ File /home/$user/Desktop/din/build/myapp/CMakeList.txt created. ✠
```

##### this is the structure generated for din ⚡ 

```bash
tree myapp/

myapp/
├── CMakeLists.txt
├── din.json
├── main.cpp
└── modules  # this is a directory to futures libs with `din add`
```
---

###  ↳ `din -v` 

this command show you the din version. 

```bash
din -v
╔╦══• •✠•❀•✠ • •══╦╗
  VERSION : 1.0.0
╚╩══• •✠•❀•✠ • •══╩╝
```

----

###  ↳ `din -h` 

this command show you the list of commands that we are working for improve your user experience

```bash
din -h
〔 Din Commands 〕

 ↳ din start           create a new din project.
 ↳ din run             run your project.
 ↳ din new class       create a new class into the project.
 ↳ din new lib         create a structure to new library.
 ↳ din upload          upload your library to center repository
 ↳ din add <lib>       install <lib> as dependency to your project.
 ↳ din build           compile and generate a binary.
 ↳ din test st         generate a unit testing structuro to your project
 ↳ din -v              show the din version.
 ↳ din -h              show the din commands.
```


### official maintainers

- linux -> @leonard-soft
- windows -> @sac1802
- mac -> 'coming soon'
