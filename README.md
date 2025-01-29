# Quantum Circuit Tool

10/23/2024: A command line tool that allows you to define a quantum circuit and observe the outcome. 

## Flag Commands

To simulate a circuit, the flag commands should be in this order:
1. -q {number of qubits n}

2. -{gate} {qubit control}:{qubit target}

3. (Optional) -s {q1q2...qn}

Example:
<img src="img/simple_paulix_circuit.svg" alt="Description of SVG">

The flag order to simualte this circuit would be:
./circuit -q 2 -x 1:2 -s 10


| Flag | Description     | Options                   | Example |
|------|-----------------|---------------------------|---------|
| -q   | Creates a new qubit, and describes the qubit state. <br> Currently, user can pick from four pure states.     | 0 = l0⟩ <br> 1 = l1⟩ <br> + = l+⟩ <br> - = l−⟩ | -q 1 |
| -s   | Simualtes specified qubit states | 0,1,+,- | -s +1 <br> -s --0 <br> -s 100 |
| -px  | Simulates the pauli x gate. Must have control. Target is optional (use 0 if no target) | <control>:<target> | -px 1:2 |