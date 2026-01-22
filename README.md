# Inheritance in C++ – Types Cheat Sheet

## 📌 Overview

**Inheritance** is a fundamental concept of **Object-Oriented Programming (OOPS)** in C++. It allows one class (derived class) to acquire the properties and behavior of another class (base class). Inheritance promotes **code reusability**, **extensibility**, and **logical program structure**.

---

## 🧠 What is Inheritance?

Inheritance establishes a **parent–child relationship** between classes where:

* The **base class** provides common features
* The **derived class** reuses and extends those features

---

## 📂 Types of Inheritance in C++

---

## 1️⃣ Single Inheritance

### 📖 Description

In **Single Inheritance**, one derived class inherits from **only one base class**.

### 🔧 Syntax

```
class BaseClass { };
class DerivedClass : access_specifier BaseClass { };
```

### ✅ Key Points

* Simplest form of inheritance
* Easy to understand and implement
* Promotes basic code reuse

---

## 2️⃣ Multiple Inheritance

### 📖 Description

In **Multiple Inheritance**, a single derived class inherits from **more than one base class**.

### 🔧 Syntax

```
class BaseClass1 { };
class BaseClass2 { };
class DerivedClass : access_specifier BaseClass1, access_specifier BaseClass2 { };
```

### ✅ Key Points

* Enables combination of features from multiple classes
* May cause ambiguity (diamond problem)
* Virtual base classes are used to resolve ambiguity

---

## 3️⃣ Hierarchical Inheritance

### 📖 Description

In **Hierarchical Inheritance**, multiple derived classes inherit from a **single base class**.

### 🔧 Syntax

```
class BaseClass { };
class DerivedClass1 : access_specifier BaseClass { };
class DerivedClass2 : access_specifier BaseClass { };
```

### ✅ Key Points

* One base class serves multiple derived classes
* Common properties shared across derived classes
* Improves code organization

---

## 4️⃣ Multilevel Inheritance

### 📖 Description

In **Multilevel Inheritance**, a class is derived from another derived class, forming a **chain of inheritance**.

### 🔧 Syntax

```
class BaseClass { };
class IntermediateClass : access_specifier BaseClass { };
class DerivedClass : access_specifier IntermediateClass { };
```

### ✅ Key Points

* Supports step-by-step inheritance
* Derived class gets features of all previous classes
* Useful for layered system design

---

## 5️⃣ Hybrid Inheritance

### 📖 Description

**Hybrid Inheritance** is a combination of **two or more types of inheritance**, such as multiple and hierarchical inheritance.

### 🔧 Syntax

```
class BaseClass { };
class DerivedClass1 : virtual access_specifier BaseClass { };
class DerivedClass2 : virtual access_specifier BaseClass { };
class FinalDerived : access_specifier DerivedClass1, access_specifier DerivedClass2 { };
```

### ✅ Key Points

* Most complex form of inheritance
* Uses **virtual base classes** to avoid ambiguity
* Suitable for advanced system design

---

## 📚 Exam-Oriented Summary

* **Single Inheritance**: One base → one derived class
* **Multiple Inheritance**: Multiple base → one derived class
* **Hierarchical Inheritance**: One base → multiple derived classes
* **Multilevel Inheritance**: Base → intermediate → derived
* **Hybrid Inheritance**: Combination of inheritance types

---

## 🏁 Conclusion

Inheritance in C++ is a powerful mechanism that enhances **code reuse, modularity, and scalability**. Understanding different types of inheritance helps in designing efficient and well-structured object-oriented programs.

---

✨ *An essential OOPS concept for exams, practicals, and C++ fundamentals.*
