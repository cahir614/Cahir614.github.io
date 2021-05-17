# Hello World!

in 13 different languages

## Rust
```rust
fn main() {
    println!("Hello World!");
}
```
## C
```c
#include <stdio.h>

int
main()
{
	printf("Hello, World!\n");
	return 0;
}
```
## C++
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```
## C\#
```csharp
using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Hello, world!");
    }
}
```
## x86 Assembly
```x86asm
	global  _main
	extern  _printf

	section .text
_main:
	push    message
	call    _printf
	add     esp, 4
	ret
message:
	db  'Hello, World', 10, 0
```
## Java
```java
public class Hello {
	public static void main(String[] args) {
		System.out.println("Hello World!");
	}
}
```
## Scala
```scala
object HelloWorld extends App {
  println("Hello, World!")
}
```
## Python
```python
print("Hello World!")
```
## bash
```bash
echo "Hello, World!"
```
## Go
```go
package main

import "fmt"

func main() {
    fmt.Println("Hello, World")
}
```
## Haskel
```hs
module Main where

main :: IO ()
main = putStrLn "Hello, World!"
```
## lua
```lua
print("Hello, World!")
```
## R
```r
cat("Hello world\n")
```
