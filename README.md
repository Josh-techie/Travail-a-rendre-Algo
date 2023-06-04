# Queueing System Simulation in C/C++

This program simulates a queueing system with three service stations (A, B, and C) using discrete time update process. The program allows clients to arrive at the post office and be inserted into a queue, release any available service station, and assign clients from the queue to available service stations.

## Installation

1. Clone this repository to your local machine.
2. Open the project in your preferred IDE.
3. Compile and run the program.

## Usage

The program uses three functions to simulate the queueing system:

- `liberer_guichets(G,t)`: Function that releases any available service stations.
- `arrivees(F,...)`: Function that simulates the number of clients arriving at the post office between two discrete times.
- `remplir_guichet(G,F,T)`: Function that assigns clients from the queue to available service stations.

## Code Writer

The code for this program was written by [Josh-Techie](https://github.com/Josh-techie).
## Contributing

Contributions are always welcome! Feel free to open an issue or submit a pull request if you would like to improve this program.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.