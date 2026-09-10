# Java OOP – `static` Keyword Assignment

This assignment contains Java OOP programs demonstrating the use of the `static` keyword, including static variables and static methods.

## Programs

### 1. Complex Number

The `Complex` class is used to store the real and imaginary parts of a complex number.

#### Operations

* Sum of two complex numbers
* Difference of two complex numbers
* Product of two complex numbers
* Modulus of a complex number
* Complement (conjugate) of a complex number
* Counting the number of Complex objects created using a static member

#### Example

For:

```text
Complex Number 1 = 5 + 3i
Complex Number 2 = 2 + 4i
```

The output is:

```text
Sum: 7.0 + 7.0i
Difference: 3.0 - 1.0i
Product: -2.0 + 26.0i
Modulus of first complex number: 5.830951894845301
Complement (Conjugate) of first complex number: 5.0 - 3.0i
```

---

### 2. Point

The `Point` class is used to store the coordinates of a geometrical point.

A static function is used to calculate the distance between two points.

#### Formula

The distance between two points `(x₁, y₁)` and `(x₂, y₂)` is:

```text
Distance = √((x₂ - x₁)² + (y₂ - y₁)²)
```

#### Example

For:

```text
Point 1 = (3, 4)
Point 2 = (6, 8)
```

The output is:

```text
Point 1: (3.0, 4.0)
Point 2: (6.0, 8.0)
Distance between the two points = 5.0
```

## Concepts Used

* Classes and Objects
* Constructors
* Static Members
* Static Methods
* Instance Methods
* Mathematical Operations
* Object-Oriented Programming in Java

## How to Run

Compile the Java program:

```bash
javac Main.java
```

Run the program:

```bash
java Main
```

## Language

**Java**
