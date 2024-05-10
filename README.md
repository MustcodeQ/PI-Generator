# Calculate Digits of PI

This C program calculates the digits of PI using the Bailey–Borwein–Plouffe (BBP) formula. The BBP formula allows for the direct calculation of any hexadecimal digit of pi without needing to compute the preceding digits.

## How to Compile and Run:

1. **Compilation:**
   - Ensure you have a C compiler installed on your system (e.g., GCC for Unix-like systems or MinGW for Windows).
   - Open a terminal or command prompt and navigate to the directory containing the `calculate_pi.c` file.
   - Run the following command to compile the program:

     ```bash
     gcc -o calculate_pi calculate_pi.c
     ```

2. **Execution:**
   - After successful compilation, run the compiled executable by executing the following command:

     ```bash
     ./calculate_pi
     ```

3. **Input:**
   - Enter the desired number of digits of PI when prompted by the program.

4. **Output:**
   - The program will print the calculated digits of PI in hexadecimal format.

## Notes:
- The program calculates the digits of PI using the BBP formula, which is efficient for generating individual hexadecimal digits of PI.
- The number of digits of PI to generate should be within the capabilities of the system's memory and processing power.
- The program outputs the calculated digits of PI in hexadecimal format for simplicity and efficiency.

## Example Usage:
```bash
$ ./calculate_pi
Enter the number of digits of PI you want to generate: 50
243F6A8885A308D313198A2E03707344A4093822299F31D0082EFA98EC4E6C89452821E638D01377BE5466CF34E90C6CC0AC29B7C97C50DD3F84D5B5B54709179216D5D98979FB1BD1310BA698DFB5AC2FFD72DBD01ADFB7B8E1AFED6A267E96BA7C9045F12C7F9924A19947B3916CF70801F2E2858EFC16636920D871574E69A458FEA3F4933D7E0D95748F728EB658718BCD5882154AEE7B54A41DC25A59B59C30D5392AF26013C5D1B023286085F0CA417918B8DB38EF8E79DCB0603A180E6C9E0E8BB01E8A3ED71577C1BD314B2778AF2FDA55605C60E65525F3A20CACC8E79C3A46BC9B0C8B5
