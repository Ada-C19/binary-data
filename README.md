# binary-data

## About The Project

This project provides sample code that demonstrates writing binary data to a file using the C language. Use the `hexdump` command (or a GUI hex editor such as [Hex Fiend](https://hexfiend.com/)) to view and the data it generates.

## Getting Started

This should be buildable with the 



### Prerequisites

Be sure you have the XCode CommandLine Tools (or full XCode) installed. GNU tools should also work but have not been tested.

If you don't have the command line tools installed, they can be installed with the following command:

```sh
xcode-select --install
```

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/Ada-C19/binary-data.git
   ```
2. Compile the code
   1. Either use the provided `Makefile` by running
      ```sh
      make
      ```
   2. Or compile manually with
      ```sh
      clang -o binary-data main.c
      ```

Debug builds can be made by running 
```
make debug
``` 
or 
```
clang -g -o binary-data main.c
```

## Usage

After building the program, run it with
   ```sh
   ./binary-data
   ```

Then, inspect the generated `data.bin` file using a hex editor. The built-in `hexdump` command can be used for this purpose.
```sh
hexdump -C data.bin
```
