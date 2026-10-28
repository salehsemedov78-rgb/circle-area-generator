# Circle Calculator Web Application
My first C++ web application compiled to WebAssembly.

## Purpose
Calculate the area and circumference of a circle from its radius.

## Formulas
* Area = PI * radius * radius
* Circumference = 2 * PI * radius

## Technologies
C++, HTML, CSS, JavaScript, WebAssembly

## Why can't a browser directly execute main.cpp?
A web browser cannot execute raw C++ code directly because browsers natively understand only HTML, CSS, and JavaScript. C++ is a compiled language meant for machine hardware, whereas browsers run code safely inside a secure virtual machine environment. By using Emscripten, we translate `main.cpp` into WebAssembly (`.wasm`), a low-level binary code format that browsers can load, parse, and execute at near-native speed.
