### LIFO_point_management Project README

---

#### Overview

The **LIFO_point_management** project is designed to demonstrate the implementation of a Last-In-First-Out (LIFO) singly linked list of points using object-oriented principles in C++. This project aims to consolidate theoretical knowledge into practical application through a series of operations on a dynamic list of points.

---

#### Project Structure

```
│   GestionLIFOdesPoints.sln
│
├───Debug
│       GestionLIFOdesPoints.exe
│       GestionLIFOdesPoints.ilk
│       GestionLIFOdesPoints.pdb
│
└───GestionLIFOdesPoints
    │   GestionLIFOdesPoints.cpp
    │   GestionLIFOdesPoints.vcxproj
    │   GestionLIFOdesPoints.vcxproj.filters
    │   GestionLIFOdesPoints.vcxproj.user
    │   ListeChainee.cpp
    │   ListeChainee.h
    │   Point.cpp
    │   Point.h
    │
    └───Debug
        │   GestionLIFOdesPoints.log
        │   GestionLIFOdesPoints.obj
        │   LinkedList.obj
        │   ListeChainee.obj
        │   Point.obj
        │   vc142.idb
        │   vc142.pdb
        │
        └───GestionL.0A015422.tlog
                CL.command.1.tlog
                CL.read.1.tlog
                CL.write.1.tlog
                GestionLIFOdesPoints.lastbuildstate
                link.command.1.tlog
                link.read.1.tlog
                link.write.1.tlog
```

- **GestionLIFOdesPoints.sln**: Solution file for the project.
- **Debug/**: Directory containing compiled binaries and debug information.
- **GestionLIFOdesPoints/**: Main project directory.
  - **GestionLIFOdesPoints.cpp**: Main source file.
  - **GestionLIFOdesPoints.vcxproj**: Visual Studio project file.
  - **ListeChainee.cpp, ListeChainee.h**: Source and header files for the linked list implementation.
  - **Point.cpp, Point.h**: Source and header files defining the Point class.
  - **Debug/**: Debug output directory.
    - Debug build artifacts and logs.

---

#### Project Objectives

The primary objectives of this project are:

1. **Create a Dynamic List of Points**: Implement a dynamic singly linked list to store points.
2. **Add Points**: Write functions to add points to the list.
3. **Modify Points**: Implement functionality to modify existing points in the list.
4. **Remove Points**: Provide functions to delete points from the list.
5. **Visualize Points**: Implement a function to visualize (display) a specific point from the list.

---

#### Usage

To use this project:

1. **Compilation**: Open `GestionLIFOdesPoints.sln` in Visual Studio (or equivalent IDE supporting VC++), and build the solution in Debug mode.
   
2. **Execution**: Run `GestionLIFOdesPoints.exe` from the Debug directory after successful compilation.

3. **Functionality**: The application allows you to interact with a LIFO list of points through the implemented operations:
   - Adding points (`ajouterPoint` function).
   - Modifying points (`modifierPoint` function).
   - Removing points (`supprimerPoint` function).
   - Visualizing points (`visualiserPoint` function).

---

#### Notes

- This project serves as an educational example to demonstrate basic data structure operations in an object-oriented manner.
- The implementation assumes usage of C++ and Visual Studio environment (`vc142`).

---

#### Contributors

- This project was developed by faycal raghibi as part of C++ Course.

---
### Thank you for using GestionLIFOdesPoints! Happy coding!
