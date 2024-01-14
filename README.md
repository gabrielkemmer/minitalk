Minitalk

Minitalk is a lightweight client-server communication program designed for sending and receiving small messages using the concept of signals. This project is a part of a larger set of assignments and aims to demonstrate interprocess communication in a simple and efficient way.

Table of Contents

Features
Prerequisites
Getting Started
Usage
Contributing
License
Features

Client-Server Communication: Minitalk allows a client to send short messages to a server using signals.
Signal-Based: The communication between the client and server is done entirely through signals, making it lightweight and efficient.
Minimalistic: The program is designed to be minimalistic and focuses on demonstrating interprocess communication concepts.
Prerequisites

Before you can use Minitalk, ensure you have the following prerequisites:

A Unix-like operating system (e.g., Linux, macOS)
gcc compiler or another compatible C compiler
libft library (if required, link to the library's GitHub repository)
Getting Started

Clone this repository to your local machine:
shell
Copy code
git clone https://github.com/gabrielkemmer/minitalk.git
Navigate to the project directory:
shell
Copy code
cd minitalk
Compile the client and server programs (ensure that libft is compiled if required):
shell
Copy code
make
Usage

Run the server:
shell
Copy code
./server
The server will listen for incoming messages from clients.
Run a client to send a message to the server (replace [Server PID] with the actual server's process ID and [Message] with your message):
shell
Copy code
./client [Server PID] [Message]
The client will send the specified message to the server using signals.
Contributing

Contributions to Minitalk are welcome! If you'd like to contribute, please follow these guidelines:

Fork the repository.
Create a new branch for your feature or bug fix.
Make your changes and commit them.
Push your changes to your fork.
Submit a pull request to the main repository.
Please ensure that your code follows good coding practices, and include appropriate documentation and test cases.

License

This project is licensed under the MIT License - see the LICENSE file for details.
